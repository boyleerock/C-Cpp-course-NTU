#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("sum is %d\n", a+b+c);
	printf("average is %.2f\n", (double)(a+b+c)/3);
	printf("product is %d\n", a*b*c);
	int smallest = a;
	if(smallest > b){
		smallest = b;
	}
	if(smallest > c){
		smallest = c;
	}
	printf("smallest is %d\n", smallest);
	
	int largest = a;
	if(largest < b){
		largest = b;
	}
	if(largest < c){
		largest = c;
	}
	printf("largest is %d\n", largest);
	
	return 0;
}
