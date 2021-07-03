#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char ch;
	char str1[128];
	char str2[128];
	
	scanf("%c", &ch);
	scanf("%s ", &str1);
	gets(str2);
	
	printf("%c\n", ch);
	printf("%s\n", str1);
	printf("%s\n", str2);
	return 0;
}
