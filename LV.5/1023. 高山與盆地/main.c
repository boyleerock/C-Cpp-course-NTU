#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, i, *height, highest, lowest, highestPos = 1, lowestPos = 1;
	
	scanf("%d", &n);
	//Dynamically allocate the pointer called "height"
	height = (int* )malloc(sizeof(int)*n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &height[i]);
	} 
	
	highest = height[0];	//Set the 1st index of height to be the highest height
	lowest = height [0];	//Set the 1st index of height to be the lowest height
	for(i = 0; i < n; i++){
		if(height[i] > highest){
			highest = height[i];
			highestPos = i + 1;
		}
		if(height[i] < lowest){
			lowest = height[i];
			lowestPos = i + 1;
		}
	}
	printf("%d %d\n", highestPos, highest);
	printf("%d %d\n", lowestPos, lowest);
	
	//release memory
	free(height);
	height = NULL;
	
	return 0;
}
