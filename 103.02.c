/*
Написать функцию void swap(int * x, int * y), которая меняет значения переменных местами.
Примечание: здесь и в остальных заданиях до конца курса выводить символы и цифры на печать не требуется.
*/

void swap(int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

