#include <stdio.h>
#include <stdlib.h>
#include "score.h"

double Avg(int n, int *P){
	double avg = 0;
	int i;
	for(i = 0; i < n; i++){
		avg += (double)P[i]/n;
	}
	return avg;
} 

int MaxScore(int n, int *P){
	int i;
	int highestPos = 0;
	for(i = 0; i < n; i++){
		if(P[highestPos] < P[i])
			highestPos = i;
	}
	return highestPos;
}
