#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score[5][3]={{76,73,85},{88,84,76},{92,82,92},{82,91,85},{72,74,73}};
	int i, j;
	int sum = 0, highest = 0, highestPos = 0;
	double avg;
	for(i = 0; i < 5; i++){
		printf("student %d\n", i+1);
		sum = 0;
		
		for(j = 0; j < 3; j++){
			printf(" %d: %d\n", j+1, score[i][j]);
			sum += score[i][j];
			if( sum > highest){
				highest = sum;
				highestPos = i+1;
			} 
		}
		printf(" sum: %d\n", sum);
		avg = (double)sum/3;
		printf(" avg: %.2f\n", avg);
			
	}
	sum = 0;
	for(i = 0; i < 5; i++){
		for(j = 0; j < 3; j++){
			sum += score[i][j];		
		}			
	}
	printf("total: %d, avg: %.2f\n", sum, (double)sum/15);
	printf("highest avg: student %d: %.2f\n", highestPos, (double)highest/3);
	return 0;
}
