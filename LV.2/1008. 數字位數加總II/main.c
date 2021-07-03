#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	
	char number_str[1000000];
	
	//convert integer into char-string
    sprintf(number_str, "%d", n);	
    
    int i, sum = 0;
    for(i = 0; i < strlen(number_str); i++)
    {
    	//convert the character to integer 
		sum += number_str[i] - '0';;
	}
	printf("%d", sum);
	return 0;
}
