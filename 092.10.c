/*
Форматированный вывод числа.
Написать программу, реализующую вывод числа с разделением на триады цифр.
Входные данные:
Целое положительное число.
Выходные данные:
Вывести введённое число, отформатированное соответствующим образом. Лишние пробелы в конце и начале строки считаются ошибкой.
Примечание: ﻿число, имеющее при себе один или два разряда, вывести без изменений.
*/

#include <stdio.h>
int main(void)
{
    int i = 0, j = 0, c = 0, a = 0;
    char str[100];
    fgets(str, 100, stdin);
    while (str[j] != '\0') {
        j += 1;
    }
    c = j - 1;
    for (i = 0;i < j;i++) {
        if (c % 3 == 0 && i != 0 && i != j - 1)
            printf(" ");
        printf("%c", str[i]);
        c -= 1;
    }
    return 0;
}