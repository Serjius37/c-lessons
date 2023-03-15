/*
По заданному числу N сформировать матрицу (N×NN×N) следующего вида:
1    2    3   ...  n-2  n-1  n
2    1    2   ...  n-3  n-2  n-1
3    2    1   ...  n-4  n-3  n-2
...              ...
n-1  n-2  n-3 ...  2    1    2
n    n-1  n-2 ...  3    2    1
Входные данные:
Одно натуральное число NN.
Выходные данные:
Вывести на экран массив NN на NN, указанного вида. Числа разделять пробелами. 
*/

#include <stdio.h>

int main(void) {
  int N;
  scanf("%d", &N);
  int arr[N][N];
  int k = 1;

  for (int i = 0; i < N; i = i + 1){
      if (i % 2 == 0)
          k = 1;
      else
          k = N;
    for(int j = 0; j < N; j = j + 1){
      arr[i][j] = k;
      if (i % 2 == 0)
          k = k + 1;
      else
          k -= 1;
    }
  }

  for (int i = 0; i < N; i = i + 1){
    for(int j = 0; j < N; j = j + 1){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}