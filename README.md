# Ответы на онлайн курс Методы Криптографии.
Для С++ файлов формат ввода есть в начале файла в виде комментария.
## Задание 1
 Тут используется простейший шифр Вижинейра. Подходит любой решатель из интернета, например [этот](https://planetcalc.ru/2468/)
## Задание 2
 Используйте для него программу ex2.cpp
## Задание 3
 Используйте для него программу ex3.cpp
## Задание 4
#### Часть 1
Заходим вот на [этот сайт](https://www.omnicalculator.com/math/linear-feedback-shift-register). Наш калькулятор находится в левой половине экрана.
В поле initial state вбиваем регистр сдвига. В поле connection coefficient нужно вбить побитовую маску вашего многочлена (например. X^6+X^5+X^3+1 превращается в 110100. Единичку мы отбрасываем) Type of output - Period. Калькулятор выдаёт период данного регистра сдвига. Его можно вставлять в первое поле ответов. Далее Type of output - Output. ПОЛУЧИВШУЮСЯ ПОСЛЕДОВАТЕЛЬНОСТЬ НУЖНО ПЕРЕВЕНУТЬ И ВСТАВИТЬ ЗАПЯТЫЕ. Ответ вставляем во второе поле ответов.
#### Часть 2
Используйте для него программу ex4_2.cpp
## Задание 5
 Тут стоит использовать [этот сайт](https://www.tausquared.net/pages/ctf/rsa.html).
#### Часть 1
 В первом задании название всех полей совпадает, кроме поля с, на сайте оно e.
 Для полсчёта констант там есть соответствующие кнопки.
 Потом превращаем данное по заданию сообщение в набор трёхзначных чисел по таблице представленной в задании. 
 Через сайт заносим в поле m каждое число __по отдельности__ используем кнопку encrypt и вписываем их всех подряд в последнее поле, добавляя нули вначале чисел до нужной разрядности. 
#### Часть 2
 Отчищаем все поля на сайте.
 Вносим туда сначала первое число из открытого ключа в поле e. Второе число из открытого ключа в поле N. Первое число из закрытого ключа в поле d.
 Теперь вносим числа нужной разрядности в поле c и используем кнопку decrypt. Потому преобразуем число обратно через таблицу из задания 1.
## Задание 6
Отсутствует как враждебный класс

## Контрольная
Для решения используем вот эту [ссылку](https://colab.research.google.com/drive/1_ICGvtAO5vPWasYov0W5l0-Mfzwu3QD6?usp=sharing)
Тут нужно будет загрузить 2 данных по заданию изображения, и изменяем параметры по заданию. После этого прогоняем весь код и в конце ищем автора того что написано (просто ищем в гугле). В ответ пишем фамилию автора с маленькой буквы.

# Поздравляю вы закончили курс
