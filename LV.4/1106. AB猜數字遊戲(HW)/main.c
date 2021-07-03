#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ans[5];
	char keyin[5];
	
	int i, j = 0;
	int a = 0, b = 0;
	
	scanf("%s", ans);
	
	while(a != 4){
		a = b = 0;
		
		scanf("%s", keyin);
		
		for(i = 0; i < 4; i++){
			if(ans[i] == keyin[i])
				a++;
			else{
				for(j = 0; j < 4; j++){
					if(ans[i] == keyin[j] && ans[i] != keyin[i]){
						b++;
					}
				}
			}	
		}
		printf("%dA%dB\n", a, b);
	}
	puts("You Win!");
	return 0;
}
