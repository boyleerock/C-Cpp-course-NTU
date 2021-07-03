#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char str[128];
	int i ;
	
	scanf("%s", &str);
	
	for(i = 0; i < strlen(str); i++){
		while(isdigit(str[i]) == 0){
			if(isdigit(str[i]) == 0){
				printf("is not a number\n");
			}
			scanf("%s", &str);
		}
	}
	printf("n=%s", str);
	
	return 0;
}
