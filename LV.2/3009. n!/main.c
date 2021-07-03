#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i;
	int result = 1;
	scanf("%d", &n);
	
	for(i = 1; i <=n; i++)
	{
		result = result * i;
	}
	printf("%d", result);
	return 0;
}
