/*
Форматирование даты
Написать функцию print_date(int d, int m, int y, int k), которая выводит дату в одном из указанных форматов.
при k = 0: dd.mm.yy
при k = 1: dd.mm.yyyy
при k = 2: yyyy/mm/dd
Входные данные:
Четыре числа:
первое число -- номер дня в месяце ,
второе число -- номер месяца,
третье число -- год,
четвёртое число -- формат.
Выходные данные:
Дата в указанном формате.
*/

#include <stdio.h>
void print_date(int d, int m, int y, int k)
{
    if (k < 1) {
        printf("%02d.%02d.%02d", d, m, y % 100);
    }
    else if (k == 1) {
        printf("%02d.%02d.%d", d, m, y);
    }
    else {
        printf("%d/%02d/%02d", y, m, d);
    }
}
int main()
{
    int n, k, d, t;
    scanf("%d %d %d %d", &n, &t, &d, &k);
    print_date(n, t, d, k);
    return 0;
    return 0;
}