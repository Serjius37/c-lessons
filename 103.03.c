/*Написать функцию void sum_digits(int * x),
которая заменяет число x на сумму цифр из которых состоит число x.
*/

void sum_digits(int* x)
{
    int c1 = *x, c2 = *x, c = 0, sum = 0;
    while (c2 >= 9) {
        c++;
        c1 = c2 % 10;
        sum += c1;
        c2 /= 10;
    }
    *x = sum + c2;
}
