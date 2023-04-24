/*Задача.
Помогите Гиллу Байтсу исправить написанную им функцию
 int binary_search(int arr[], int n, int arg). Функция должна 
 находить порядковый номер элемента со значением arg в 
 отсортированном по возрастанию массиве arr. Если такой элемент не 
 найден, то функция должна возвращать значение -1.
 */

int binary_search(int arr[], int n, int arg){
  int first = 0;
  int last = n;
  int res = -1;

  while (first < last) {
    int mid = (last + first) / 2;

    if (arg <= arr[mid])
      last = mid;
    else
      first = mid + 1;
  }

  if (last < n && arr[last] == arg)
    res = last;

	return res;	   
}
