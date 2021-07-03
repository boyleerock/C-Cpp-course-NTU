#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int score = 0;
	int sum = 0;
	int count = -1;
	int largest = 0;
	int largestCount = 0;
	
	while(score != -1){
		count ++;
		sum += score;
		scanf("%d", &score);
		if(score > largest){
			largest = score;
			largestCount++;
		}
	}
	
	printf("%d\n%.1f\n%d\n%d\n", sum, (double)sum/count, largest, largestCount);
	return 0;
}
