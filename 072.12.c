/* Перевёртыш
Напишите программу, которая по данному натуральному NN печатает его цифры в обратном порядке.
Входные данные:
Одно натуральное число NN.
Выходные данные:
Цифры числа NN, записанные в обратном порядке. 
*/

#include <stdio.h>

int main() {
int control,v,r;
int total=1;
    
scanf("%d", &control);
v=control;
while(control > 9){
    control/=10;
    total+=1;
} 
for (int i = 1; i != total; i+=1){    
    r=v%10;
    v=v/10;
    printf("%d", r); 
}
    printf("%d", v); 
return 0;
}