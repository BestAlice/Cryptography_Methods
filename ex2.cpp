#include <string>
#include <iostream>
#include <vector>

// 11110001100111011011  <- данные
// 2 <- кол-во раундов
// 1001110111  <- ключи по порядку
// 1010100100

std::string string_xor(std::string s1, std::string s2){
    if (s1.length() != s2.length()){
        return "0";
    }

    std::string result = "";

    for (int n=0; n < s1.length(); n++){
        if (s1[n] != s2[n]){
            result += "1";
        } else {
            result += "0";
        }
    }
    return result;

}



int main(){

    std::string data;
    int loops;
    

    std::cin >> data;
    std::cin >> loops;

    std::vector<std::string> keys(loops);
    for (int i=0; i < loops; i++){
        std::cin >> keys[i];
    }

    std::string L, R, tmp;
    L = data.substr(0, data.length()/2);
    R = data.substr(data.length()/2, data.length());
    for (int i=0; i < loops; i++){
        tmp = R;
        R = string_xor(L, string_xor(R, keys[i]));
        L = tmp;
    }

    std::cout << L + R;

    return 0;
}