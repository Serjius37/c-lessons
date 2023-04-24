#include <stdio.h>
void print_date(int d, int m, int y, int k){
    char *format;
    switch (k) {
        case 0:
            y %= 100;
        case 1:
            format = "%02d.%02d.%02d";
            break;
        case 2:
            format = "%d/%02d/%02d";
            int tmp = d;
            d = y;
            y = tmp;
            break;
    }
    printf(format, d, m, y);
}
int main(){ 
    int d, m, y, k;
    scanf("%d %d %d %d", &d, &m, &y, &k);
    print_date(d,m,y,k);
    return 0;
}