/*


Циклический сдвиг
Произвести циклический сдвиг столбцов квадратной матрицы A[N] на KK позиций вправо.
Входные данные:
Одно натуральное число NN. Далее с новой строки NN строк по NN целых чисел в каждой. NN не превышают десяти. Затем с новой строки записано натуральное число KK.
Выходные данные:
Вывести на исходную матрицу NN на NN, столбцы которой циклически сдвинуты на KK позиций вправо. Числа разделять пробелами.
Sample Input 1:
3
1 2 3
1 4 5
2 3 -2
2
Sample Output 1:
2 3 1 
4 5 1 
3 -2 2 
Sample Input 2:
3
1 2 3
1 4 5
2 3 -2
4
Sample Output 2:
3 1 2 
5 1 4 
-2 2 3 
*/

#include <stdio.h>

int main() {
    int N, M, sum, v = 0, w = 0, max = 0, min = 0;
    scanf("%d", &N);
    int arr[N][N];
    for (int i = 0; i < N ; i++){
        for (int j = 0; j < N ; j++){  
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d", &M);
    for (int i = 0; i < N ; i++){
        for (int j = 0; j < N; j++){  
            printf("%d ",arr[i][(j+(N - M%N)) % N]);
        }
    printf("\n");
    }
  return 0;
}