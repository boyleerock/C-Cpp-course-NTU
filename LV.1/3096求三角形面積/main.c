#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double x1, y1, x2, y2, x3, y3;
	scanf("%lf%lf%lf%lf%lf%lf", &x1, &y1, &x2, &y2, &x3, &y3);

		double AB = sqrt(pow(x1-x2, 2) + pow(y1-y2, 2));
		double BC = sqrt(pow(x2-x3, 2) + pow(y2-y3, 2));
		double CA = sqrt(pow(x3-x1, 2) + pow(y3-y1, 2));
		double S =(AB + BC + CA) / 2;
		printf("%.2f", sqrt(S*(S-AB)*(S-BC)*(S-CA)));
	
	return 0;
}
