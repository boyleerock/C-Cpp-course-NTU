#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str1[128];
	char str2[128];
	gets(str1);
	gets(str2);
	char *ptr = strstr(str1, str2);
	
	while(ptr !=NULL){
		
		printf("%d\n", ptr-str1);
		ptr = strstr(ptr+1, str2);
	}
	return 0;
}
