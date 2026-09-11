// write a c program input character 'd':two number divide otherwise :input is not matched //
#include <stdio.h>
int main () {
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if (ch == 'd') {
        int first ,second;
        printf("enter 2 numbers\n");
        scanf("%d %d",&first,&second);
        printf("division of 2 numbers = %d\n",first / second);
        
    }
    else {
        printf("input is not matched");
    }
    return 0;
}