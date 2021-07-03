#include <stdio.h>
#include <stdlib.h>
#include <math.h> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N, X, Y;
	scanf("%d%d%d", &N, &X, &Y);
	if(N % 2 != 0)
	{
		printf("%d", 20 + X * ((N/2)+1) - Y * (N -(N/2)-1));
	}
	else
	{
		printf("%d", 20 + X * (N/2) - Y * (N- (N/2) -1));
	}
	
	return 0;
}
