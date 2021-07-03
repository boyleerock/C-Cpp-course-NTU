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
				printf("壹萬");
			}
			else if(number_str[strlen(number_str)-5] == '2')
			{
				printf("貳萬");
			}
			else if(number_str[strlen(number_str)-5] == '3')
			{
				printf("參萬");
			}
			else if(number_str[strlen(number_str)-5] == '4')
			{
				printf("肆萬");
			}
			else if(number_str[strlen(number_str)-5] == '5')
			{
				printf("伍萬");
			}
			else if(number_str[strlen(number_str)-5] == '6')
			{
				printf("陸萬");
			}
			else if(number_str[strlen(number_str)-5] == '7')
			{
				printf("柒萬");
			}
			else if(number_str[strlen(number_str)-5] == '8')
			{
				printf("捌萬");
			}
			else if(number_str[strlen(number_str)-5] == '9')
			{
				printf("玖萬");
			}
		}
		
		if(number_str[strlen(number_str)-4] != '0')
		{
			if(number_str[strlen(number_str)-4] == '1')
			{
				printf("壹仟");
			}
			else if(number_str[strlen(number_str)-4] == '2')
			{
				printf("貳仟");
			}
			else if(number_str[strlen(number_str)-4] == '3')
			{
				printf("參仟");
			}
			else if(number_str[strlen(number_str)-4] == '4')
			{
				printf("肆仟");
			}
			else if(number_str[strlen(number_str)-4] == '5')
			{
				printf("伍仟");
			}
			else if(number_str[strlen(number_str)-4] == '6')
			{
				printf("陸仟");
			}
			else if(number_str[strlen(number_str)-4] == '7')
			{
				printf("柒仟");
			}
			else if(number_str[strlen(number_str)-4] == '8')
			{
				printf("捌仟");
			}
			else if(number_str[strlen(number_str)-4] == '9')
			{
				printf("玖仟");
			}
		}
		
		if(number_str[strlen(number_str)-3] != '0')
		{
			if(number_str[strlen(number_str)-3] == '1')
			{
				printf("壹佰");
			}
			else if(number_str[strlen(number_str)-3] == '2')
			{
				printf("貳佰");
			}
			else if(number_str[strlen(number_str)-3] == '3')
			{
				printf("參佰");
			}
			else if(number_str[strlen(number_str)-3] == '4')
			{
				printf("肆佰");
			}
			else if(number_str[strlen(number_str)-3] == '5')
			{
				printf("伍佰");
			}
			else if(number_str[strlen(number_str)-3] == '6')
			{
				printf("陸佰");
			}
			else if(number_str[strlen(number_str)-3] == '7')
			{
				printf("柒佰");
			}
			else if(number_str[strlen(number_str)-3] == '8')
			{
				printf("捌佰");
			}
			else if(number_str[strlen(number_str)-3] == '9')
			{
				printf("玖佰");
			}
		}
		
		if(number_str[strlen(number_str)-2] != '0')
		{
			if(number_str[strlen(number_str)-2] == '1')
			{
				printf("壹拾");
			}
			else if(number_str[strlen(number_str)-2] == '2')
			{
				printf("貳拾");
			}
			else if(number_str[strlen(number_str)-2] == '3')
			{
				printf("參拾");
			}
			else if(number_str[strlen(number_str)-2] == '4')
			{
				printf("肆拾");
			}
			else if(number_str[strlen(number_str)-2] == '5')
			{
				printf("伍拾");
			}
			else if(number_str[strlen(number_str)-2] == '6')
			{
				printf("陸拾");
			}
			else if(number_str[strlen(number_str)-2] == '7')
			{
				printf("柒拾");
			}
			else if(number_str[strlen(number_str)-2] == '8')
			{
				printf("捌拾");
			}
			else if(number_str[strlen(number_str)-2] == '9')
			{
				printf("玖拾");
			}
		}
		
		if(number_str[strlen(number_str)-1] != '0')
		{
			if(number_str[strlen(number_str)-1] == '1')
			{
				printf("壹");
			}
			else if(number_str[strlen(number_str)-1] == '2')
			{
				printf("貳");
			}
			else if(number_str[strlen(number_str)-1] == '3')
			{
				printf("參");
			}
			else if(number_str[strlen(number_str)-1] == '4')
			{
				printf("肆");
			}
			else if(number_str[strlen(number_str)-1] == '5')
			{
				printf("伍");
			}
			else if(number_str[strlen(number_str)-1] == '6')
			{
				printf("陸");
			}
			else if(number_str[strlen(number_str)-1] == '7')
			{
				printf("柒");
			}
			else if(number_str[strlen(number_str)-1] == '8')
			{
				printf("捌");
			}
			else if(number_str[strlen(number_str)-1] == '9')
			{
				printf("玖");
			}
		}		
		printf("元整");
	}	
	
	return 0;
}