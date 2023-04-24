#include <stdio.h>
int main()
{
    int a = 10, b = a;
    int *c = &b;
    char *str = "Hi World";
  //  char s[10] = "iesrntirs";
    printf("%s %p %p\n",str,str, &str);
  //  printf("%s %p", s, s);
    printf("%d %p\n", *c, c);
    printf("%d %p %d %p\n", a, &a, b, &b);
    return 0;
}