/*Напишите функцию int minmax(int arr[], int n, int fl), которая возвращает максимальный или минимальный элемент массива arr, 
в зависимости от значения флага fl. 0 -- минимум, 1 -- максимум.
*/

int minmax(int arr[], int n, int fl){
int min=9999, max=-9999;
    
for (int i=0; i < n ; i++){
    if (min > arr[i]){
        min = arr[i];
    }      
    if (max < arr[i]){
        max = arr[i];
    } 
}  
if (fl == 0){
    return min;
} else {
    return max;
}
}