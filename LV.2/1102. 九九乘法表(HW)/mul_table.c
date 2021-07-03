#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, m;
	scanf("%d%d", &n, &m);
	
	int i, j;
	
	for(i = 1; i <= n; i++)
	{
		for(j = 1; j <= m; j ++)
		{
			printf("%d*%d=%2d ", i, j, i*j);
		}
		printf("\n");
	}
	return 0;
}
