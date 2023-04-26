/*Напишите функцию int abs_arr(int arr[], int n), которая заменяет отрицательные элементы массива их модулями. Кроме того,
функция должна возвращать количество произведенных замен.
*/

int abs_arr(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < 0) {
            arr[i] *= -1;
            count += 1;
        }
    }
    return count;
}