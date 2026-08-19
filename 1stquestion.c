// write a c program input number and check number is greater than 10 or not ?
#include <stdio.h>
int main(){
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    if(number>10) {
        printf ("the number is greter than 10");
    }
    else {
        printf ("the number is not greter than 10");
    }
    return 0;
}