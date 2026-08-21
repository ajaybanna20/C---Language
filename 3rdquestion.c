/* write a c program input number and check number is even or odd ?
even :number divide by 2
odd :number does not divide by 2 */
#include <stdio.h>
int main(){
    int number;
    printf("enter a number:");
    scanf("%d",&number);
    if(number%2==0) {
        printf ("the number is even");
    }
    else {
        printf ("the number is odd");
    }
    return 0;
}