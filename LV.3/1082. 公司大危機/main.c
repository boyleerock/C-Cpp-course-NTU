#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N, K, i, a, b;
	int sumCapital = 0;
	int sumWithdrawl = 0;
	
	scanf("%d", &N);
	int invest[N];
	int withdraw[N];	//0 = stay or 1 = leave
	for(i = 0; i < N; i++){
		scanf("%d", &invest[i]);
		sumCapital += invest[i];	
	}
	while(K != 0){
		scanf("%d", &a);
		sumCapital -= invest[a-1];
		K--;
	}
	scanf("%d", &K);
	for(i = 0; i < K; i++){
		scanf("%d", &a);
		b = a;
		withdraw[b-1] = 1;
	}
	for(i = 0; i < N; i++){
		if(withdraw[a] = 1){
			printf("[%d]:%d", i, withdraw[a]);
		}
		else if(withdraw[a] = 0){
			printf("[%d]:%d", i, withdraw[a]);
		}
	}
	
	printf("%d\n", sumCapital);	
	int biggestCap = 0;
	for(i = 0; i < N; i++){
		if(invest[i] > biggestCap)biggestCap = invest[i];
	}
	printf("%d\n", biggestCap);
	
	return 0;
}
