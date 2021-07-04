#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, i, *value, count = 0;
	double avg = 0;
	
	scanf("%d", &n);
	value = (int *)malloc(sizeof(int)*n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &value[i]);
		avg += (double)value[i]/n; 
	}
	for(i = 0; i < n; i++){
		if(value[i] > avg){
			count++; 
		}
	}
	printf("%d\n", count);
	
	free(value);
	value = NULL;
	return 0;
}
