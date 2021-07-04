#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i, *password, temp;
	scanf("%d", &n);
	
	password = (int* )malloc(sizeof(int)*n);
	for(i = 0; i < n; i++){
		scanf("%d", &password[i]);
	}
	
	for(i = 0; i < n; i += 2){
		temp = password[i];
		password[i] = password[i+1];
		password[i+1] = temp; 
	}
	
	for(i = 0; i < n; i++){
		printf("%d ", password[i]);
	}
	
	free(password);
	password = NULL;
	return 0;
}
