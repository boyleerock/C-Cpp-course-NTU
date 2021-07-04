#include <stdio.h>
#include <stdlib.h>

int sum1(int n);

int main() {
	int n, ans;
	
	scanf("%d", &n);
	ans = sum1(n);
	printf("%d\n", ans);
	
	return 0;
}

int sum1(int n){
	int i, total = 0;
	
//	total = (1+n)*n/2;
	for(i = 0; i <= n; i++){
		total += i;
	}
	
	return total;
}
