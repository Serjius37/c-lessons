#include <stdio.h>
#include <string.h>
int main() {
    char str1[51];
    char str2[51];
    int c = 0, i = 0, j = 0;
    fgets(str1, 50, stdin);
    fgets(str2, 50, stdin);
    if (strlen(str1) > strlen(str2)){
        while(i < strlen(str1)){
            while (j < strlen(str2)){
                if (str1[i] == str2[j]){
                    str2[j] = '9';
                    c += 1;
                    break;
                }
            }
        }    
    } 
    i = strlen(str2);
    if (c == i)
        printf("yes");
    else    
        printf("no");
    return 0;
}