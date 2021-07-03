#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int status, score;
	scanf("%d%d", &status, &score);
	
	if(status == 1){
		if(score >= 60 && score <= 100)
		{
			printf("pass");	
		}
		else if(0 <= score && score < 60)
		{
			printf("fail");
		}
		else
		{
			printf("score error");
		}
	}
	else if(status == 2)
	{
		if(score >= 70 && score <=100)
		{
			printf("pass");
		}
		else if(0 <= score && score < 70)
		{
			printf("fail");
		}
		else
		{
			printf("score error");
		}
	}
	else
	{
		printf("role error");
	}
	return 0;
}
