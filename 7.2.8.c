/*Количество цифр
Подсчитать количество цифр в записи натурального числа NN.
Входные данные:
Одно натуральное число NN.
Выходные данные:
Одно целое число kk -- количество цифр в записи числа NN. 
*/

#include <stdio.h>

int main() {
int control;
int total=1;
    
scanf("%d", &control);
while(control > 9){
    control/=10;
    total+=1;
}    
printf("%d", total);    
return 0;
}