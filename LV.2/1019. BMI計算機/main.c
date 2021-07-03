#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int height, weight;
	double BMI, heightM;
	scanf("%d%d", &height, &weight);
	
	heightM = (double)height / 100;
	BMI = weight /pow(heightM, 2);
	
	if(BMI < 18.5)
	{
		printf("%.2f\nUnderweight", BMI);
	}
	else if(BMI >= 18.5 && BMI < 24)
	{
		printf("%.2f\nNormal", BMI);
	}
	else if(BMI >= 24 && BMI < 27)
	{
		printf("%.2f\nOverweight", BMI);
	}
	else if(BMI >= 27 && BMI < 30)
	{
		printf("%.2f\nObese Class I", BMI);
	}
	else if(BMI >= 30 && BMI < 35)
	{
		printf("%.2f\nObese Class II", BMI);
	}
	else if(BMI >= 35)
	{
		printf("%.2f\nObese Class III", BMI);
	}
	return 0;
}
