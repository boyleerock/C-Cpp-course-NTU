#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char c;
	do
	{
		scanf(" %c", &c);
		printf("%c\n", c);
	}while(c != 'q');
	return 0;
}
