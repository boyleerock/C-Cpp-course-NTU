#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[128];
	scanf("%s", str);
	if(isdigit(str[0]) != 0)
		printf("n=%s", str); 
	else
		printf("is not a number\n"); 
		
	return 0;
}
