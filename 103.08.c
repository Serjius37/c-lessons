/*Написать функцию void reduce_fraction(int * a, int * b), 
которая будет сокращать дробь с числителем a и знаменателем b.
Используйте функцию gcd, написанную на прошлом шаге.
*/

int gcd(int x, int y){
while (x !=0 && y != 0){ 
    if (x >= y){      
        x=x% y; 
    }else {
        y =y% x;
    }  
}    
return  y+x ; 
} 

void reduce_fraction(int * a, int * b){
int t;
t = gcd(*a,*b);
*a /= t;
*b /= t;
}