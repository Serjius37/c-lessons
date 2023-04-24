/*Напишите функцию int linear_search(int arr[], int n, int arg), которая находит позицию первого вхождения элемента со значением arg в массиве arr. Если такой 
элемент не найден, то функция должна возвращать значение -1.
*/

int linear_search(int arr[], int n, int arg){
int i, a = -1;
for (i=0; i < n ; i++){
    if (arg == arr[i]) {
        a = i;
        break;
    }
}  
return a;
}