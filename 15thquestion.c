/* write a c program input character 's': two number swap number without third variable
otherwise :input is not matched */
#include <stdio.h>
int main () {
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if (ch == 's') {
        int a ,b;
        printf("enter 2 numbers\n");
        scanf("%d %d",&a,&b);
        
        //swap the numbers without third variable
        a = a+b;
        b = a-b;
        a = a-b;
        
        printf("a=%d & b=%d", a ,b);
        return 0;
    }
}