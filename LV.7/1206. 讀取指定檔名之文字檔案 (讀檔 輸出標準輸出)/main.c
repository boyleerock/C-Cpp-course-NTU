#include <stdio.h>
#include <stdlib.h>

int main() {
	char str[80];
	char c1;
	
	scanf("%s", &str);
	
	FILE *f = fopen(str, "r");	//Open file
	if(f == NULL){
		printf("open %s fail!\n", str);
		return 0;
	}
	while(1){
		fscanf(f, "%c", &c1);	//Read file
		if(feof(f))
			break;
		putchar(c1);
	}
	fclose(f);					//Close file
	
	return 0;
}
