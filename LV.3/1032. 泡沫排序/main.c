#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[5];
	int i, j, k, m, temp;
	
	for(i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}
	
	/* 將a,b兩變數內容互換:
	int a = 10, b=5, temp;
	temp = a;
	a = b;
	b = temp;
	*/
	
	for(j = 5; j > 1; j--)
	{
		for(k = 0; k < j -1; k++)
		{
			if(a[k] > a[k+1])
			{
				temp = a[k];
				a[k] = a[k+1];
				a[k+1] = temp;
			}
		}
	}
	
	/*for(j = 0; j < 5 -1; j++)
	{
		for(k=0; k < 5 - 1 -j; k++)
		{
			if(a[k] > a[k+1])
			{
				temp = a[k];
				a[k] = a[k+1];
				a[k+1] = temp;
			}
		}
	}*/

	for(m = 0; m < 5; m++)
	{
		printf("%d ",a[m]);
	}
	return 0;
}
