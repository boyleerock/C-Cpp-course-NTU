#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a, b;
	char c;
	scanf("%lf%lf %c", &a, &b, &c);
	
	switch(c)
	{
	case '+':
		printf("%.2f + %.2f = %.2f", a, b, a + b);
		break;
	case '-':
		printf("%.2f - %.2f = %.2f", a, b, a - b);
		break;
	case '*':
		printf("%.2f * %.2f = %.2f", a, b, a * b);
		break;
	case '/':
		printf("%.2f / %.2f = %.2f", a, b, a / b);
		break;
	}
	
	return 0;
}
