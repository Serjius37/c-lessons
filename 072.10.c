/*Дано натуральное число NN. Найти наименьшее натуральное число rr, такое, что 2r≥N2r≥N.
Входные данные:
Одно натуральное число NN.
Выходные данные:
Число rr. 
*/

#include <stdio.h>

int main() {
double control;
int total=0,r=1;
    
scanf("%lf", &control);
while(control > 1){
    control=control/2;
    total+=1;
}    
for (int i = 1; i != total+1; i+=1)      
    r=i;
    
printf("%d ", r);    
return 0;
}