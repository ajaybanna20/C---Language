// write a c program input character :b ball otherwise :input is not matched 
#include <stdio.h>
int main () {
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if (ch == 'b'){
        printf("ball");
    }
    else {
        printf("input is not matched");
    }
    return 0;
}