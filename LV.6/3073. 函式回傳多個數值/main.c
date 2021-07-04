#include <stdio.h>
#include <stdlib.h>

void return2num(int n, int *factRst, int *sumRst);

int main() {
	int n, ans1, ans2;
	
	scanf("%d", &n);
	return2num(n, &ans1, &ans2);
	printf("%d\n%d\n", ans1, ans2);
	
	return 0;
}

void return2num(int n, int *factRst, int *sumRst){
	int i, total = 1;
	for(i = 1; i <= n; i++){
		total *= i;
	}
	*factRst = total;
	*sumRst = 0;
	total = 0; 
	for(i = 0; i <= n; i++){
		total += i;
	}
	*sumRst = total;
}

