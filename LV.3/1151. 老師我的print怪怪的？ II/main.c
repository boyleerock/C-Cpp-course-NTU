#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i;
	while(n != -1)
	{
		scanf("%d", &n);
	}
	
	for(i = 0; i < 5; i++){
		printf("%d", n);
	}
	return 0;
}
