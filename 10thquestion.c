/* write a c program input character and check character is z,x,c,v,b,n,m : lower line
otherwise :input is not matched */
#include <stdio.h>
int main () {
	char ch;
	printf("enter a character: ");
	scanf("%c",&ch);
	if (ch =='z') {
		printf("lower line");
	}
	else if (ch == 'x') {
		printf("lower line");
	}
	else if (ch == 'c') {
		printf("lower line");
	} 
	else if (ch == 'v') {
		printf("lower line");
	}
	else if (ch == 'b') {
		printf("lower line");
	}
	else if (ch == 'n') {
		printf("lower line");
	}
	else if (ch == 'm') {
		printf("lower line");
	}
	else {
		printf("input is not matched");
	}
return 0;
}
