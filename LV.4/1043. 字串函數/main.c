#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[128];
	char str2[128];
	
	gets(str1);
	gets(str2);
	
	if(strcmp(str1, str2) > 0){
		printf("1>2\n");
	}else if(strcmp(str1, str2) < 0){
		printf("1<2\n");
	}else{
		printf("1==2\n");
	}
	strcat(str1, str2);
	printf("%s\n%d", str1, strlen(str1));
	
	return 0;
}
