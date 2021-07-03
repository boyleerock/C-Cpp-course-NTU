#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i;
	int sum = 0;
	scanf("%d", &n);

	for(i = 1; i <= n; i++)
	{
		sum = sum + i;
	}
	printf("%d", sum);
	return 0;
}
