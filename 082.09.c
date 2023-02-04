/*
Поменять местами столбцы с минимальной и максимальной суммой элементов.
Входные данные:
Два натуральных числа NN и MM. Далее с новой строки NN строк по MM целых чисел в каждой. NN и MM не превышают десяти.
Выходные данные:
Вывести исходную матрицу NN на MM, в которой столбцы с минимальной и максимальной суммой элементов поменяны местами. Числа разделять пробелами. Если присутствует несколько столбцов с одинаковой минимальной суммой элементов, то использовать первый по порядку. Аналогично с максимальной суммой.
Sample Input:
3 4
1 2 3 4
1 3 4 5
0 2 3 -2
Sample Output:
3 2 1 4
4 3 1 5
3 2 0 -2
*/

#include <stdio.h>

int main() {
    int N, M, sum, v = 0, w = 0, max = 0, min = 0;
    scanf("%d %d", &N, &M);
    int arr[N][M];
    int arr1[M];
    for (int i = 0; i < N ; i++){
        for (int j = 0; j < M ; j++){  
            scanf("%d",&arr[i][j]);
        }
    }
    for (int j = 0; j < M ; j++){
        sum = 0;
        for (int i = 0; i < N ; i++){  
             sum += arr[i][j];
        }    
        arr1[j] = sum;   
    }  
          
    for (int i = 1; i < M ; i++){
        if (arr1[max] > arr1[i])
            max = i;
        if (arr1[min] < arr1[i]) 
            min = i;
    }    
    
    for (int i = 0; i < N; i++){
        for(int j = 0; j < M; j++){
            if(j == min){
                printf("%d ", arr[i][max]);
            }else if(j == max){
                printf("%d ", arr[i][min]);
            }else {
                printf("%d ", arr[i][j]);
            }    
        }
    printf("\n");
    }
  return 0;
}