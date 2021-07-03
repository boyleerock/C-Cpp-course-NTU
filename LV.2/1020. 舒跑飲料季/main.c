#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	
	printf("%d", n + (n/4) + (((n/4) + (n%4) + 1)) / 4) ;

	return 0;
}
