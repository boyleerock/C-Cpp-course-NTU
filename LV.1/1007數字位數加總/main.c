#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;					//a=bcde Ex:a = 1234
	scanf("%d", &a);
	int e = a % 10;			//计 
	a = a/10;				//a=bcd
	int d = a % 10;			//计
	a = a/10;				//a= bc
	int c = a % 10;			//κ计 
	a = a/10;				//a = b
	int b = a;				//计 
	printf("%d", b+c+d+e);
	return 0;
}
