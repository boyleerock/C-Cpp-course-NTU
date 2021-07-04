#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int A[5];
	int *P, i, largest = 0, largestPos = 0;
	
	P = A;
	for(i = 0; i < 5; i++){
		//scanf("%d", &P[i]);
		//scanf("%d", P+i);
		scanf("%d", &*(P+i));
	}
	
	for(i = 0; i < 5; i++){
		if(*(P+i) > largest){
		    largest = *(P+i);
			largestPos = i;
		}
	}
	printf("%d: %d", largestPos + 1, largest);
	return 0;
}
