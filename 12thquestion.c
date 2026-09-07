/* Q)write a c program input character 's': four number substraction
otherwise :input is not matched */
#include <stdio.h>
int main () {
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if (ch == 's') {
       int first ,second,third,fourth;
        printf("enter 4 numbers\n");
        scanf("%d %d %d %d",&first,&second,&third,&fourth);
        printf("substraction of 4 numbers = %d\n",first-second-third-fourth);
        
    }
    else {
        printf("input is not matched");
    }
    return 0;
}