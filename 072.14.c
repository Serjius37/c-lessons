/*Быстрое возведение в степень
Гилл Байтс на последнем занятии по информатике изучал алгоритм быстрого возведения числа aa в степень kk. Он основывается на следующем свойстве степени: a2k=ak∗aka2k=ak∗ak
Например, вместо последовательного вычисления a2a2, a3a3 и a4a4, можно после вычисления a2a2 умножить это число само на себя и получить сразу a4a4.
Гилл решил обязательно запрограммировать этот алгоритм. Благо он уже прошёл тему циклы и быстро смог написать программу, реализующую подобный трюк. Вот её код:

#include <stdio.h>

int main(void) {
  int a = 0, k = 0;
  int res = 0;

  scanf("%d %d", &a, &k);
  res = 1;
//пока степень больше нуля
  while(k > 0){
// если степень чётная, то
    if (k%2 == 0){   
      res = res*res; // умножаем текущий результат на себя
      k = k/2;  // степень делим пополам
    }else { //если степень нечётная
      res = res * a; // то умножаем на исходное число
      k = k - 1;   // от степени вычитаем единицу
   }
 }
  printf("%d\n", res);

  return 0;
}
*/

#include <stdio.h>

int main(void) {
  int a = 0, k = 0;
  int res = 0;

  scanf("%d %d", &a, &k);
  res = 1;

  while(k > 0){
    if (k % 2 == 0){  
      a = a * a;
      k = k / 2;
    }else {
      res = res * a;
      k = k - 1;
   }
 }
  printf("%d\n", res);

  return 0;
}