// write a c program input number and check number is greater than 67 or not ?
#include <stdio.h>
int main(){
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    if(number>67) {
        printf ("the number is greter than 67");
    }
    else {
        printf ("the number is not greter than 67");
    }
    return 0;
}