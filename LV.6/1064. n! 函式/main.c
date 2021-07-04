#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fact(int n);

int main(int argc, char *argv[]) {
	int ans, n;
	
	scanf("%d", &n);
	ans = fact(n);
	printf("%d", ans);
	
	return 0;
}

int fact(int n){
	int i, total = 1;
	for(i = 1; i <= n; i++){
		total *= i;
	}
	return total;
}
