/*write a c program input character 'm': two number multiplication otherwise :
input is not matched */
#include <stdio.h>
int main () {
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if (ch == 'm') {
        int first;
        int second;
        printf("enter 1st numbr\n");
        scanf("%d",&first);
        printf("enter 2st numbr\n");
        scanf("%d",&second);
        printf("multiplication of 2 numbers = %d\n",first * second);
        
    }
    else {
        printf("input is not matched");
    }
    return 0;
}