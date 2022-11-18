/*
*Последовательность.
*Вывести последовательность чисел, поступившую на вход.
*Входные данные:
*На вход программы поступает последовательность целых чисел. Количество чисел в последовательности заранее неизвестно, но зато известно, что в конце последовательности записано число -9999 и в последовательности всегда есть хотя бы одно число.
*Выходные данные:
*Вывести все элементы последовательности, кроме заключительного -9999, на экран. 
*/

#include <stdio.h>

int main()
{
    int control;
    while(control != -9999) {
        scanf("%d", &control);
        if (control != -9999)  
            printf("%d ", control);
    }
    return 0;
}