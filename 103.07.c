/*Написать функцию int gcd(int x, int y), 
которая ищет наибольший общий делитель для чисел x и y.
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