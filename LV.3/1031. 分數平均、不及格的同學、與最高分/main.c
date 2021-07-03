#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score[3];
	int i;
	int sum = 0;
	for(i = 0; i < 3; i++)
	{
		scanf("%d", &score[i]);
	}
	
	for(i = 0; i < 3; i++)
	{
		sum += score[i];
	}
	printf("avg = %.2f\nfail:\n", (double)sum/3);
	
	for(i = 0; i < 3; i++)
	{
		if(score[i] < 60)
		{
	
			printf("%d: %d\n", i+1, score[i]);
		}
	}
	
	int highest = 0;
	int highestPos = 0;
	for(i = 0; i < 3; i++)
	{
		if(score[i] > highest)
		{
			highest = score[i];
			highestPos = i;
		}
	}
	printf("highest:\n%d: %d", highestPos + 1, highest);
	
	return 0;
}
