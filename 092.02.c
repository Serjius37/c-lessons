/*
Длина строки.
Подсчитать количество символов в строке, без учёта нуль-символа.
Входные данные:
Символьная строка
Выходные данные:
Одно целое число -- длина входной символьной строки.
Подсказки:
Формат входных данных: "YoungCoder.Ru\0\n" 
*/

#include <stdio.h>
#include <string.h>
int main (void)
{    
   int i= 0;
   char str[100];
   fgets(str, 100, stdin);
   for(i = 0; str[i] != '\0' ; i++)
       
   printf("%d", i);
   return 0;
}

