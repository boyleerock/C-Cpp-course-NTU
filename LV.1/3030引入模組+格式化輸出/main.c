#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double score;
	scanf("%lf", &score);
	printf("Original: %.2f\n", score);
	double adjScore = sqrt(score)*10;
	double difference = adjScore - score;
	printf("Adjusted: %.2f(+%.f)\n", adjScore, difference);
	
	return 0;
}
