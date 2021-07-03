#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j;
	int sum = 0;
	double aver = 0;
	int score[2][3];
	
	for(j = 0; j < 2; j++)
	{
		for(i = 0; i < 3; i++)
		{	
			scanf("%d", &score[j][i]);
		}
	}
	for(j = 0; j < 2; j++)
	{
		printf("class %d\n", j+1);		
		sum = 0;
		for(i = 0; i < 3; i++)
		{	
			printf(" %d: %d\n", i+1, score[j][i]);
			sum += score[j][i];
		}
		aver = (double)sum /3 ;
		printf(" sum: %d\n", sum);
		printf(" avg: %.2f\n", aver);
	}
	sum = 0;
	for(j = 0; j < 2; j++)
	{
		for(i = 0; i < 3; i++)
		{	
			sum += score[j][i];
		}
	}
	
	printf("total: %d, avg: %.2f", sum, (double)sum/6);
	
	return 0;
}
