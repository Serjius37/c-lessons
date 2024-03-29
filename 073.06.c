/*Возрастающая последовательность
Последовательность назовём возрастающей, если каждый её следующий член больше предыдущего. Написать программу, проверяющую является ли последовательность возрастающей.
Входные данные:
Последовательность целых чисел. Признак окончания последовательности - число -9999. В последовательности всегда есть хотя бы два числа, кроме числа -9999.
Выходные данные:
YES -- если последовательность является возрастающей, NO в противном случае. 
*/

#include <stdio.h>

int main() {
    int f = 0, a = -1, c = -32768;
    for (;;) {
        scanf ("%d", &a);
        if (a == -9999) break;
        if (a <= c) {
            f += 1;
        }
        c=a;          
    }        
    
     if (f) {
        printf ("NO");
     } else { 
        printf("YES");
    }    
    return 0;
}