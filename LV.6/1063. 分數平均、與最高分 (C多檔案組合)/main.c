#include <stdio.h>
#include <stdlib.h>
#include "score.h"

int main(int argc, char *argv[]) {
	int n, i;
	double avg;
	int *score;
	int MaxPos;
	scanf("%d", &n);
	score = (int *)malloc(sizeof(int) * n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &score[i]);
	}
	
	avg = Avg(n, score);
	printf("avg = %.2f\n", avg);
	MaxPos = MaxScore(n, score);
	printf("highest:\n%d: %d\n", MaxPos+1, score[MaxPos]);
	
	free(score);
	score = NULL;
	return 0;
}
