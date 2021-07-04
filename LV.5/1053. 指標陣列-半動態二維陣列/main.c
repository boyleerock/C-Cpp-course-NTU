#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *a[3];	//Declare 3 variable of "integer pointer array"
	int i, j;
	
	//Dynamically allocate the each pointer with pointer array
	for(i = 0; i < 3; i++){
		a[i] = (int *)malloc(sizeof(int) * (i+1));
	}
	/*
	a[0] = (int *)malloc(sizeof(int));
	a[1] = (int *)malloc(sizeof(int) * 2);
	a[2] = (int *)malloc(sizeof(int) * 3);
	*/
	
	////write in the value of each array's index
	for(i = 0; i < 3; i++){
		for(j = 0; j <= i; j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	//print the value of each array's index
	for(i = 0; i < 3; i++){
		for(j = 0; j <= i; j++){
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}
	
	//release the memory of each array pointer
	for(i = 0; i < 3; i++){
		free(a[i]);
		a[i] = NULL;
	}
	return 0;
}
