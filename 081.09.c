/*В заданном массиве поменять местами первую и вторую половины.
Входные данные:
Первая строка число N,(N>0)N,(N>0) -- длина массива (чётное число). Длина массива не более 100 элементов. Вторая строка NN  натуральных чисел, записанных через пробел.
Выходные данные:
Новый массив, в котором сначала записаны элементы с номерами k+1,k+2,…,Nk+1,k+2,…,N, а потом записаны элементы с номерами 1,2,3,…,k−1,k1,2,3,…,k−1,k, где kk -- номер (N/2)(N/2)-ого члена исходного массива. Между собой значения разделять одним пробелом.
*/

#include <stdio.h>

int main(void){
    int N, i;
    scanf("%d", &N);
    int array[N + 1];
    for (i = 0; i < N ; i++){
        scanf("%d", &array[i]);
    }
    for (i = (N/2); i < N ; i++){
        printf("%d ", array[i]);           
    } 
    for (i=0; i < N/2 ; i++){
        printf("%d ", array[i]);
    }
      return 0;
}