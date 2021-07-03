#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, n, d, i, tn;
	int sum = 0;
	
	scanf("%d%d%d", &a, &d, &n);
	sum = (n * (2 * a + (n-1) * d))/2;	//等差數列的總和 
	tn = a + (n-1) * d;					//最後一項 
	
	if(d >= 0){
		for(i = a; i <= tn; i = i + d){
			if(i != tn){
				printf("%d + ", i);
			}
			else{
				printf("%d = %d", i, sum);
			}			
		}
	}
	else
	{
		for(i = a; i >= tn; i = i + d){
			if(i != tn){
				if(i < 0){
					printf("(%d) + ", i);
				}
				else{
					printf("%d + ", i);
				}
			}
			else{
				if(i < 0){
					printf("(%d) = %d", i, sum);
				}
				else{
					printf("%d = %d", i, sum);
				}
			}			
		}
	}
	return 0;
}
