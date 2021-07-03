#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, b;
	scanf("%lf%lf", &a, &b);
	double sum = a + b;
	printf("%.2f + %.2f = %.2f", a, b, sum);
	return 0;
}
