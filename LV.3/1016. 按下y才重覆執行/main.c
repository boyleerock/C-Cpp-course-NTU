#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch = 'y';
	while(ch == 'y'){
		scanf(" %c", &ch);
		if(ch == 'y')
			printf("run\n");
	}
	return 0;
}
