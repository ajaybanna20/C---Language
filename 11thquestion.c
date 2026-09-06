/* write a c program input character 'a':two number addition 
otherwise :input is not matched */
#include <stdio.h>
int main () {
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if (ch == 'a') {
        int first ,second;
        printf("enter 2 numbers\n");
        scanf(" %d %d",&first,&second);
        printf("additon of 2 numbers = %d\n",first + second);
        
    }
    else {
        printf("input is not matched");
    }
    return 0;
}