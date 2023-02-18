/*
Определить тип символа.
Входные данные:
Один символ. Либо буква латинского алфавита, либо цифра.
Выходные данные:
digit -- если это цифра, en -- если это буква латинского алфавита. В иных случаях вывести error.
*/

#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    if(ch <= 57 && ch >= 48){
        printf("digit");
    }else if(ch <= 90 && ch >= 65 || ch <= 122 && ch >= 97){
        printf("en");
    }else {
        printf("error");
    }
    return 0;
}

