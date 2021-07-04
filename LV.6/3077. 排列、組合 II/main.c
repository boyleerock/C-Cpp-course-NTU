#include <stdio.h>
#include <stdlib.h>

int fact(int n);
int P(int n, int m);
int C(int n, int m);

int main() {
	int n1, n2, ans1, ans2;
	scanf("%d%d", &n1, &n2);
	ans1 = P(n1, n2);
	ans2 = C(n1, n2);
	if(n1 >= n2){
		ans1 = P(n1, n2);
		ans2 = C(n1, n2);
		printf("%d\n%d\n", ans1, ans2);
	}else{
		ans1 = 0;
		ans2 = 0;
		printf("%d\n%d\n", ans1, ans2);
	}
	
	
	
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

int C(int n, int m){
	return fact(n)/(fact(m) * fact(n-m));
}
