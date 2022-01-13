/*Даны три числа. Подсчитать количество положительных среди этих чисел.
Входные данные:
Три целых числа a,b,c a,b,c a,b,c.
Выходные данные:
Одно целое число -- количество положительных чисел, среди чисел a,b,c a,b,c a,b,c.
Sample Input:
79 -18 88
Sample Output:
2
*/

#include <stdio.h>

int main() {
    int a,b,c;
    int count = 0;
    scanf("%d %d %d",&a,&b,&c);
    count += a>0;
    count += b>0;
    count += c>0;
    printf("%d",count);
    return 0;
}
