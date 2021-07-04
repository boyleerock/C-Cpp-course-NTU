#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int n, i, *amount;
	
	scanf("%d", &n);
	//Dynamically allocate the pointer called amount
	amount = (int *)malloc(sizeof(int) *n);
	
	for(i = 0; i < n; i++){
		scanf("%d", &amount[i]);
		//scanf("%d", amount+i);
		//scanf("%d", &*(amount + i);
	}
	
	for(i = n - 1; i >= 0; i--){
		printf("%d ", amount[i]);
	}
	
	//release memory
	free(amount);
	amount = NULL;
	
	return 0;
}
