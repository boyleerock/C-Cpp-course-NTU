#include <stdio.h>
#include <stdlib.h>

int fact(int n);
int P(int n, int m);

int main() {
	int n1, n2, ans;
	scanf("%d%d", &n1, &n2);
	ans = P(n1, n2);
	printf("%d\n", ans);
	
	return 0;
}

int fact(int n){
	int i, total = 1;
	for(i = 1; i <= n; i++)
		total *= i;
	return total;	
}

int P(int n, int m){
	return fact(n)/fact(n-m);
}
