/* write a c program input character 'w': two number swap number with third variable
otherwise :input is not matched */
#include <stdio.h>
int main () {
    char ch;
    printf("enter a character: ");
    scanf("%c",&ch);
    if (ch == 'w') {
        int a ,b;
        printf("enter 2 numbers\n");
        scanf("%d %d",&a,&b);
        
        //swap the numbers with third variable
        int temp = a;
        a= b;
        b =temp;
        
        printf("a=%d & b=%d", a ,b);
        return 0;
    }
}