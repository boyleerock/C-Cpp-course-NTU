#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	ch = getchar();
	if(ch>='0' && ch<='9')
		printf("%c is a number.", ch);
	else if(ch>='A' && ch<='Z')
		printf("%c is a capital letter.", ch);
	else if(ch>='a' && ch<='z'){
		printf("%c is a lowercase letter.\n", ch);
		ch -= 32;	//or ch -= ('a'-'A');
		printf("swap to capital letter %c.", ch);
	}
	
	else
		printf("%c is a punctuation.", ch);
	return 0;
}
