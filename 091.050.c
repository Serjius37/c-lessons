#include <stdio.h>
int main() {
    char c;
    int n;
    int a[26] = {0};
    scanf("%d", &n);
    while (n--) {
        scanf("%c ", &c);
        a[c%65%32] += 1;
    }
    for (int i = 0; i < 26; i++)
        printf("%d ", a[i]);
    printf("\n");
    return 0;
}