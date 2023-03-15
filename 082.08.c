/*
Столбцы
Для заданной матрицы посчитать сумму элементов каждого столбца.
Входные данные:
Два натуральных числа NN и MM. Далее с новой строки NN строк по MM целых чисел в каждой. NN и MM не превышают десяти.
Выходные данные:
MM целых чисел, записанных через пробел. Первой вывести сумму последнего столбца, второй предпоследнего и т.д.
Sample Input:

3 4
1 2 3 4
1 3 4 5
0 2 3 -2
Sample Output:
 7 10 7 2
*/

#include <stdio.h>

int main(void) {
    int N, M, c;
    scanf("%d %d", &N, &M);
    int arr[N][M];
    int arr1[M];
    c = 0;
    for (int i = 0; i < N ; i++){
        for (int j = 0; j < M ; j++){  
            scanf("%d ",&arr[i][j]);
        }
    } 
    for(int j = 0; j < M; j++){
        arr1[j] = 0;
        for (int i = 0; i < N; i++){
            arr1[j] += arr[i][j];
        }     
    } 

    /* for (int a = 0; a <= N +1; a++){
        c = 0;
   
        for (int i = 0; i < N; i++){
            for(int j = a; j < M; j++){
                if(j == a){
                    c += arr[i][j];
                    break;
                }
            }    
        arr1[a] = c;
        }    
    }  
    */ 
    for(int i = M - 1; i > -1; i--){
        printf(" %d", arr1[i]);
    }

  return 0;
}