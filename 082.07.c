/*
Для заданной квадратной матрицы A[N] посчитать следующие величины:

    сумму элементов, находящихся над главной диагональю
    сумму элементов, расположенных под побочной диагональю


Входные данные:
Одно натуральное число NN. Далее с новой строки NN строк по NN целых чисел в каждой. NN не превышают десяти.
Выходные данные:
Два целых числа, записанных через пробел. Первым вывести меньшее из чисел.
*/

#include <stdio.h>

int main(void)
{
    int N;
    scanf("%d", &N);
    int arr[N][N];
    int c = 0, k = 0;

    for (int i = 0; i < N; i = i + 1) {
        for (int j = 0; j < N; j = j + 1) {
            scanf("%d ", &arr[i][j]);
            if (j > i)
                c += arr[i][j];
            if ((i + j) > (N - 1))
                k += arr[i][j];
        }
    }
    for (int i = 0; i < N; i = i + 1) {
        for (int j = 0; j < N; j = j + 1) {
        }
    }
    if (c < k)
        printf("%d %d", c, k);
    else
        printf("%d %d", k, c);

    return 0;
}