#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, j, **score, m, n;	//Initiallize m classes and n students
	double avg = 0;
	
	scanf("%d%d", &m, &n);
	//Dynamically allocate  m classes and n students in each class
	score = (int **)malloc(sizeof(int*) *m);
	for(j = 0; j < m; j++)
		score[j] = (int *)malloc(sizeof(int) * n);
	
	//write in m classes and n students in each class
	for(j = 0; j < m; j++){
		for(i = 0; i < n; i++){
			scanf("%d", &score[j][i]);
		}
	}
	
	//print each score for each student and compute the average score
	//but the function of average should be the sum of "each student's score/ students number in each class"
	//because if we use "the sum of total score divides students number in each class", 
	//the sum will be too big and out of memory
	for(j = 0; j < m; j++){
		printf("class %d\n", j + 1);
		avg = 0;	//reset the average score to zero
		for(i = 0; i < n; i++){
			printf(" %d: %d\n", i + 1, score[j][i]);
			avg += (double)score[j][i]/n;
		}
		printf(" avg: %.2f\n", avg);
	}
	
	avg = 0;	//reset the average score to zero again
	for(j = 0; j < m; j++){
		for(i = 0; i < n; i++){
			avg += (double)score[j][i]/ (n * m);
		}
	}
	printf("avg: %.2f\n", avg);
	
	for(j = 0; j < m; j++){
		free(score[j]);
		score[j] = NULL;
	}
	
	//release the memory
	free(score);
	score = NULL;
	
	return 0;
}
