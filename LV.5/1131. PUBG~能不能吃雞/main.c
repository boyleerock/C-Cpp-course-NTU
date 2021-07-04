#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, k, *rating, i;
	scanf("%d%d", &n, &k);
	
	rating = (int *)malloc(sizeof(int)*n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &rating[i]);
	}
	if(n % 2 == 0){
		if(k > (int)(rating[(n/2) - 1] + rating[n/2])/2){
			printf("%d\nWINNER WINNER CHICKEN DINNER!\n", (int)(rating[(n/2) - 1] + rating[n/2])/2);
		}
		else{
			printf("%d\nBETTER LUCK NEXT TIME!\n", (int)(rating[(n/2) - 1] + rating[n/2])/2);
		}
	}
	else{
		if(k > (int)(rating[n/2])){
			printf("%d\nWINNER WINNER CHICKEN DINNER!\n", (int)(rating[n/2]));
		}
		else{
			printf("%d\nBETTER LUCK NEXT TIME!\n", (int)(rating[n/2]));
		}
	
	}
	
	//release memory
	free(rating);
	rating = NULL;
	return 0;
}
