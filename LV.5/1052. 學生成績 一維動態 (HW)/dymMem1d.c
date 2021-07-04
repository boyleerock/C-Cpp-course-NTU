#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int students, i, *score, highest = 0, highestPos = 0;
	double avg = 0;
	
	scanf("%d", &students);
	score = (int *)malloc(sizeof(int)*students);
	
	for(i = 0; i < students; i++){
		scanf("%d", &score[i]);
		avg += (double)score[i]/students;
	}
	
	printf("avg = %.2f\nfail:\n", avg);
	
	for(i = 0; i < students; i++)
	{
		if(score[i] < 60)
		{
			printf("%d: %d\n", i+1, score[i]);
		}
	}
	
	for(i = 0; i < students; i++)
	{
		if(score[i] > highest)
		{
			highest = score[i];
			highestPos = i;
		}
	}
	printf("highest:\n%d: %d", highestPos + 1, highest);
	
	free(score);
	score = NULL;
	return 0;
}
