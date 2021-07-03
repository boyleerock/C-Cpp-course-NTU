#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, b;
	scanf("%lf %lf", &a, &b);
	double sum = a + b;
	double sub = a - b;
	double multiply = a * b;
	double divide = a / b;
	printf("%.2f + %.2f = %.2f\n", a, b, sum);
	printf("%.2f - %.2f = %.2f\n", a, b, sub);
	printf("%.2f * %.2f = %.2f\n", a, b, multiply);
	printf("%.2f / %.2f = %.2f\n", a, b, divide);
	return 0;
}
