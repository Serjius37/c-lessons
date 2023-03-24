/*
По заданному числу N сформировать матрицу (N×NN×N) следующего вида:

1  2    3   ...  n-1  n
n  n-1  n-2 ...  2    1
1  2    3   ...  n-1  n
n  n-1  n-2 ...  2    1
1  2    3   ...  n-1  n
n  n-1  n-2 ...  2    1

Входные данные:
Одно натуральное число NN.
Выходные данные:
Вывести на экран массив NN на NN, указанного вида. Числа разделять пробелами.
*/

#include <stdio.h>

int main()
{
    int N, M;
    scanf("%d %d", &N, &M);
    int arr[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d/t", &arr[i][j]);
        }
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%d\t ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}