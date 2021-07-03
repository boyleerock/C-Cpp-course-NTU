#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	char * pch;
	scanf("%d", &n);
	
	char number_str[1000000];
	
	//convert integer into char-string
    sprintf(number_str, "%d", n);	
    
    //Returns a pointer to the first occurrence of character in the C string str.
    pch = strchr(number_str,'7');	
    
	if (pch != NULL || n % 7 == 0)
	{
	    printf ("YES");
	}
	else 
	{
		printf("NO");
	}
  
	return 0;
}


