#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	char str[80];
	int n1, n2, i;
	FILE *in, *out;
	
	scanf("%s", &str);
	scanf("%d", &n2);
	
	in = fopen(str, "r");	//Open file
	if(in == NULL){
		printf("failed to open file!\n");
		return 2;
	}
	fscanf(in, "%d", &n1);	//read file
	fclose(in);				//close file
	
	out = fopen("wr01.txt", "w");			//Open file
	for(i = 1; i <= n1 + n2; i++){	//write file
		fprintf(out, "%d ", i);
	}
	fclose(out);					//close 	
	
	return 0;
}
