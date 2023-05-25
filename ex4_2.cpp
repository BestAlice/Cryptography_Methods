//
// Created by dima_ on 5/25/2023.
//
#include <stdio.h>
#include <iostream>


//2 3 0 4 8 7 6 5 1 9


int main(){

    int Key[10];
    for (int i = 0; i < 10; ++i) {
        std::cin >> Key[i];
    }
    int i = 0;
    int j = 0;
    int tmp, K;
    int K_list[5];


    int S[10];
    for (size_t i = 0; i < 10; i++){
        S[i] = i;
    }

    for (size_t i = 0; i < 10; i++){
        j = (j+S[i] + Key[i % 10]) % 10;
        tmp = S[i];
        S[i] = S[j];
        S[j] = tmp;
    }

    std::cout << "S: ";
    for (int i = 0; i < 10; ++i) {
        std::cout << S[i];
        if (i != 9) std::cout <<",";
    }
    std::cout <<std::endl;

    i =0;
    j =0;
    for (size_t o = 0; o < 5; o++)
    {
        i= (i+1) %10;
        j= (j+S[i]) %10;
        tmp = S[i];
        S[i] = S[j];
        S[j] = tmp;
        int t = (S[i]+ S[j]) % 10;
        K_list[o] = S[t];
    }
    
    std::cout << "K: ";
    for (int i = 0; i < 5; ++i) {
        std::cout << K_list[4-i] ;
        if (i != 4) std::cout <<",";
    }
    std::cout <<std::endl;

    return 0;
}