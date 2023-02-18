/*
Остров сокровищ
Капитан Флинт зарыл клад на Острове сокровищ. Есть описание, как найти клад.
Описание состоит из строк вида: "North 5", где первое слово – одно из "North", "South", "East", "West", а второе целое число – количество шагов, которое необходимо пройти в этом направлении.
Напишите программу, которая по описанию пути к кладу определяет точные координаты клада, считая, что начало координат находится в начале пути, ось OX направлена на восток, ось OY – на север.
Входные данные:
В первой строке натуральное число NN. Затем с новой строки NN строк, указанного формата.
Выходные данные:
Вывести координаты клада – два целых числа через пробел. 
*/

#include <stdio.h>
#include <string.h>
int main (void)
{    
   int a = 0, x = 0, y = 0, step;
   char str[15];
   scanf("%d", &a);
   for(int i = 0; i < a; i++) {
       scanf("%s %d", &str, &step);
       if (str[0] == 'W'){
           x -= step ; 
        } else if (str[0] == 'S')
            y -= step;
          else if (str[0] == 'N'){
            y += step ;
        } else if (str[0] == 'E'){
            x += step;
        }   
   }
   printf("%d %d", x, y);  
   return 0;
}