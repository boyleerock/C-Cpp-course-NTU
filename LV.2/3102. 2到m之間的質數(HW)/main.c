#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int m, i, j, flag = 1;
	scanf("%d", &m);
	
	if(m = 1)
	{
		return 0;
	}
	else
	{
		for(i = 2; i < m; i++)
		{
			for(j = 2; j < i; j ++)
			{
				if(i%j == 0) 
				{
					flag = 0;
					break;
				} 
			}
			if(flag != 0 && j ==i)
			{
				printf("%d is prime\n", i);
			}
		}
	}
	return 0;
}
