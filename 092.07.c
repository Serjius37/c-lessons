/*
Расстояние Хэмминга.
Расстояние Хэмминга для двух слов одинаковой длины — это количество позиций, в которых различаются эти слова. Для двух заданных строк найти расстояние между ними.
Входные данные:
Две символьные строки одинаковой длины, записанные каждая на отдельной строке. Длины строк не превышают 13.
Выходные данные:
Одно целое число -- расстояние Хэмминга.
*/

#include <stdio.h>
int main(void)
{
    int i = 0, c = 0, a = 0;
    char str[15], str1[15];
    fgets(str, 15, stdin);
    fgets(str1, 15, stdin);
    for (i = 0; str1[i] != '\n';i++) {
        if (str[i] != str1[i])
            c += 1;
    }
    printf("%d", c);
    return 0;
}


