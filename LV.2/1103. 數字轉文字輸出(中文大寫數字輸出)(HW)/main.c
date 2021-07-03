#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);				//ex:12345
	
	char number_str[1000000];
	sprintf(number_str, "%d", n);	//convert integer into char-string
	
	if(strlen(number_str) >= 6 || strlen(number_str) <= 0 || number_str[0] == '0')
	{
		printf("out of range");
	}
	else
	{
		if(number_str[strlen(number_str)-5] != '0')
		{
			if(number_str[strlen(number_str)-5] == '1')
			{
				printf("³ü¸U");
			}
			else if(number_str[strlen(number_str)-5] == '2')
			{
				printf("¶L¸U");
			}
			else if(number_str[strlen(number_str)-5] == '3')
			{
				printf("°Ñ¸U");
			}
			else if(number_str[strlen(number_str)-5] == '4')
			{
				printf("¸v¸U");
			}
			else if(number_str[strlen(number_str)-5] == '5')
			{
				printf("¥î¸U");
			}
			else if(number_str[strlen(number_str)-5] == '6')
			{
				printf("³°¸U");
			}
			else if(number_str[strlen(number_str)-5] == '7')
			{
				printf("¬m¸U");
			}
			else if(number_str[strlen(number_str)-5] == '8')
			{
				printf("®Ã¸U");
			}
			else if(number_str[strlen(number_str)-5] == '9')
			{
				printf("¨h¸U");
			}
		}
		
		if(number_str[strlen(number_str)-4] != '0')
		{
			if(number_str[strlen(number_str)-4] == '1')
			{
				printf("³ü¥a");
			}
			else if(number_str[strlen(number_str)-4] == '2')
			{
				printf("¶L¥a");
			}
			else if(number_str[strlen(number_str)-4] == '3')
			{
				printf("°Ñ¥a");
			}
			else if(number_str[strlen(number_str)-4] == '4')
			{
				printf("¸v¥a");
			}
			else if(number_str[strlen(number_str)-4] == '5')
			{
				printf("¥î¥a");
			}
			else if(number_str[strlen(number_str)-4] == '6')
			{
				printf("³°¥a");
			}
			else if(number_str[strlen(number_str)-4] == '7')
			{
				printf("¬m¥a");
			}
			else if(number_str[strlen(number_str)-4] == '8')
			{
				printf("®Ã¥a");
			}
			else if(number_str[strlen(number_str)-4] == '9')
			{
				printf("¨h¥a");
			}
		}
		
		if(number_str[strlen(number_str)-3] != '0')
		{
			if(number_str[strlen(number_str)-3] == '1')
			{
				printf("³ü¨Õ");
			}
			else if(number_str[strlen(number_str)-3] == '2')
			{
				printf("¶L¨Õ");
			}
			else if(number_str[strlen(number_str)-3] == '3')
			{
				printf("°Ñ¨Õ");
			}
			else if(number_str[strlen(number_str)-3] == '4')
			{
				printf("¸v¨Õ");
			}
			else if(number_str[strlen(number_str)-3] == '5')
			{
				printf("¥î¨Õ");
			}
			else if(number_str[strlen(number_str)-3] == '6')
			{
				printf("³°¨Õ");
			}
			else if(number_str[strlen(number_str)-3] == '7')
			{
				printf("¬m¨Õ");
			}
			else if(number_str[strlen(number_str)-3] == '8')
			{
				printf("®Ã¨Õ");
			}
			else if(number_str[strlen(number_str)-3] == '9')
			{
				printf("¨h¨Õ");
			}
		}
		
		if(number_str[strlen(number_str)-2] != '0')
		{
			if(number_str[strlen(number_str)-2] == '1')
			{
				printf("³ü¬B");
			}
			else if(number_str[strlen(number_str)-2] == '2')
			{
				printf("¶L¬B");
			}
			else if(number_str[strlen(number_str)-2] == '3')
			{
				printf("°Ñ¬B");
			}
			else if(number_str[strlen(number_str)-2] == '4')
			{
				printf("¸v¬B");
			}
			else if(number_str[strlen(number_str)-2] == '5')
			{
				printf("¥î¬B");
			}
			else if(number_str[strlen(number_str)-2] == '6')
			{
				printf("³°¬B");
			}
			else if(number_str[strlen(number_str)-2] == '7')
			{
				printf("¬m¬B");
			}
			else if(number_str[strlen(number_str)-2] == '8')
			{
				printf("®Ã¬B");
			}
			else if(number_str[strlen(number_str)-2] == '9')
			{
				printf("¨h¬B");
			}
		}
		
		if(number_str[strlen(number_str)-1] != '0')
		{
			if(number_str[strlen(number_str)-1] == '1')
			{
				printf("³ü");
			}
			else if(number_str[strlen(number_str)-1] == '2')
			{
				printf("¶L");
			}
			else if(number_str[strlen(number_str)-1] == '3')
			{
				printf("°Ñ");
			}
			else if(number_str[strlen(number_str)-1] == '4')
			{
				printf("¸v");
			}
			else if(number_str[strlen(number_str)-1] == '5')
			{
				printf("¥î");
			}
			else if(number_str[strlen(number_str)-1] == '6')
			{
				printf("³°");
			}
			else if(number_str[strlen(number_str)-1] == '7')
			{
				printf("¬m");
			}
			else if(number_str[strlen(number_str)-1] == '8')
			{
				printf("®Ã");
			}
			else if(number_str[strlen(number_str)-1] == '9')
			{
				printf("¨h");
			}
		}		
		printf("¤¸¾ã");
	}	
	
	return 0;
}
