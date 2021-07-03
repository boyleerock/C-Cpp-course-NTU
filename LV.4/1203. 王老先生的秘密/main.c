#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int agree =0, reject = 0, nsure = 0;
	int time, i;

	scanf("%d ", &time);
	char str[time][128];
	
	for(i = 0; i < time; i++){
		scanf("%s", &str[i]); 
	}
	for(i = 0; i < time; i++){
		if(strcmp(str[i], "yes") == 0 || strcmp(str[i], "no") == 0){
			agree++;
		}
		else if(strcmp(str[i], "YES") == 0 || strcmp(str[i], "NO") == 0){
			reject++;
		}
		else{
			nsure++;
		}
	}
	printf("%d %d %d", agree, reject, nsure);
	return 0;
}
