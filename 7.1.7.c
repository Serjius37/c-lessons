/*Вывести все числа из промежутка [A;B],(B>A) [A;B], (B \gt A) [A;B],(B>A). При этом число A A A должно выводиться 1 1 1 раз, число A+1 A+1 A+1 -- два раза, A+2 A+2 A+2 -- три раза и т.д.
Входные данные:
Два натуральных числа A,B, A,B, A,B, таких, что (B>A). (B \gt A). (B>A).
Выходные данные:
Число A A A, два числа A+1 A+1 A+1, три числа A+2 A+2 A+2 и т.д. Каждое число занимает поле шириной в 5 символа, выравнивание по правому краю.
Подсказка:
используйте вложенные циклы.*/

#include <stdio.h>

int main() {
    int k,m;
    int count=0;
    scanf ("%d %d",&k,&m);
    if (m<=0){
      printf("");  
    } else {
        if (k<0){
            for (int i = 1; i!=m+1; i+=1){
                count+=1;    
                for(int j = 1; j<=count; j+=1){
                    printf("%5.d",i); 
                }    
            } 
        } else {
            for (int i = k; i!=m+1; i+=1){
                count+=1;    
                for(int j = 1; j<=count; j+=1){
                    printf("%5.d",i);  
                }        
            } 
         }
    } return 0;
}