/*Змейка
Для заданных чисел MM и NN сформировать матрицу, заполненную по спирали числами от 11 до M⋅NM⋅N.
Входные данные:
Два натуральных числа MM и NN. MM и NN не превышают 10.
Выходные данные:
Вывести на экран массив MM на NN, указанного вида. Формат вывода каждого числа 3 знака на число, выравнивание по правому краю.
*/

#include <stdio.h>

int main()
{
    int N, M, k = 1, a;
    scanf("%d %d", &N, &M);
    int arr[N][M];


    for (int i = 0; i < N; i = i + 1) {
        for (int j = 0; j < M; j = j + 1) {
            arr[i][j] = 0;
        }
    }
    for (a = 0; a < M / 2; a++) {
        for (int j = a; j < M - a && k <= M * N; j++) {
            arr[a][j] = k;
            k = k + 1;
        }
        for (int i = a + 1; i < N - a && k <= M * N; i++) {
            arr[i][M - a - 1] = k;
            k = k + 1;
        }
        for (int i = (M - a) - 2; i >= 0 + a && k <= M * N; i--) {
            arr[N - a - 1][i] = k;
            k = k + 1;
        }
        for (int i = (N - a) - 2; i > 0 + a && k <= M * N; i--) {
            arr[i][a] = k;
            k = k + 1;
        }
    }
    if (N % 2 == 1 && N > 3 || M == 1 || N == 1)
        for (int j = a; j < M - a && k <= M * N; j++) {
            arr[a][j] = k;
            k = k + 1;
        }
    for (int i = a + 1; i < N - a && k <= M * N; i++) {
        arr[i][M - a - 1] = k;
        k = k + 1;
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            printf("%3d", arr[i][j]);
        }
        printf("\n");
    }
    return 0;
}