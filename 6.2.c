/* Сравнение чисел
Напишите программу сравнивающие два целых числа.

Входные данные:
Два целых числа x x x, y y y

Выходные данные:
1 -- если x=y x = y x=y
0 -- если x≠y x \ne y x=y

Sample Input:

-2 2

Sample Output:

0
*/
#include <stdio.h>

int main() {
  int x, y;
  scanf ("%d %d",&x,&y);
  printf("%d\n",x==y);
  return 0;
}