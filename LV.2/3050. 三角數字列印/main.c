#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i, j;
	int count = 1;
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= i ; j++, count ++)
		{
			printf("%d ", count); 
		}
		printf("\n");
	}
	return 0;
}
