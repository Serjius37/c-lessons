/*
*Степень двойки
*По данном числу N N N определить, является ли оно степенью числа 2 2 2.
*Входные данные:
*Одно целое неотрицательное число N N N.
*Выходные данные:
*YES -- если число N N N является степенью двойки, и NO в противном случае. 
*/

#include <stdio.h>

int main() 
{
    int control;
    scanf("%d", &control);
    if (control == 1 ||control == 2)
        printf("YES");
    else if (control == 0)
        printf("NO");    
    else {
        while(control != 2) {
            if (control%2 != 0) { 
                printf("NO");
                break;
            }
            control=control/2;
            if (control == 2) {
                printf("YES");
            }
        }
    }   
    return 0;
}