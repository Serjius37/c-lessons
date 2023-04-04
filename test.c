#include <stdio.h>
int main()
{
    char str[5];
    fgets(str, 5, stdin);
    printf(str);
    return 0;
}