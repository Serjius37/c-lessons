/*
Вывести на экран последние KK символов латинского алфавита в верхнем регистре в алфавитном порядке.
Входные данные:
Одно натуральное число K,(K<27)K,(K<27).
Выходные данные:
KK последних символов латинского алфавита.
*/

#include <stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    while (91 - ch <= 'Z') {
        printf("%c", 91 - ch);
        ch -= 1;
    }
    return 0;
}

