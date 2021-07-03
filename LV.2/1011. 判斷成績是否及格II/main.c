#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int status, score;
	scanf("%d%d", &status, &score);
	
	if(status == 1){
		if(score >= 60)
		{
			printf("pass");	
		}
		else
		{
			printf("fail");
		}
		
	}
	else if(status == 2)
	{
		if(score >= 70)
		{
			printf("pass");
		}
		else
		{
			printf("fail");
		}
	}
	return 0;
}
