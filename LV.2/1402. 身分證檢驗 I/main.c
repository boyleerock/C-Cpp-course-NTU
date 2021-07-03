#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char id[10];
	int a, b, c, d, e, f, g, h, i, j, sum;
	scanf("%s", &id);
	
	switch(id[0])
	{
	case 'A':
	case 'a':
		a = id[0]-'0';
		a = 10;
		break;
	case 'B':
	case 'b':
		a = id[0]-'0';
		a = 11;
		break;
	case 'C':
	case 'c':
		a = id[0]-'0';
		a = 12;
		break;
	case 'D':
	case 'd':
		a = id[0]-'0';
		a = 13;
		break;
	case 'E':
	case 'e':
		a = id[0]-'0';
		a = 14;
		break;
	case 'F':
	case 'f':
		a = id[0]-'0';
		a = 15;
		break;
	case 'G':
	case 'g':
		a = id[0]-'0';
		a = 16;
		break;
	case 'H':
	case 'h':
		a = id[0]-'0';
		a = 17;
		break;
	case 'I':
	case 'i':
		a = id[0]-'0';
		a = 34;
		break;	
	case 'J':
	case 'j':
		a = id[0]-'0';
		a = 18;
		break;
	case 'K':
	case 'k':
		a = id[0]-'0';
		a = 19;
		break;
	case 'L':
	case 'l':
		a = id[0]-'0';
		a = 20;
		break;
	case 'M':
	case 'm':
		a = id[0]-'0';
		a = 21;
		break;
	case 'N':
	case 'n':
		a = id[0]-'0';
		a = 22;
		break;
	case 'O':
	case 'o':
		a = id[0]-'0';
		a = 35;
		break;
	case 'P':
	case 'p':
		a = id[0]-'0';
		a = 23;
		break;
	case 'Q':
	case 'q':
		a = id[0]-'0';
		a = 24;
		break;
	case 'R':
	case 'r':
		a = id[0]-'0';
		a = 25;
		break;
	case 'S':
	case 's':
		a = id[0]-'0';
		a = 26;
		break;
	case 'T':
	case 't':
		a = id[0]-'0';
		a = 27;
		break;
	case 'U':
	case 'u':
		a = id[0]-'0';
		a = 28;
		break;
	case 'V':
	case 'v':
		a = id[0]-'0';
		a = 29;
		break;
	case 'W':
	case 'w':
		a = id[0]-'0';
		a = 32;
		break;
	case 'X':
	case 'x':
		a = id[0]-'0';
		a = 30;
		break;
	case 'Y':
	case 'y':
		a = id[0]-'0';
		a = 31;
		break;
	case 'Z':
	case 'z':
		a = id[0]-'0';
		a = 33;
		break;
	default :
		printf("fake");
		break;
	}
	b = id[1] - '0';
	c = id[2] - '0';
	d = id[3] - '0';
	e = id[4] - '0';
	f = id[5] - '0';
	g = id[6] - '0';
	h = id[7] - '0';
	i = id[8] - '0';
	j = id[9] - '0';
	
	sum = (a/10) * 1 + (a % 10) * 9 + b * 8 + c * 7 + d * 6 
	      + e * 5 + f * 4 + g * 3 + h * 2 + i * 1 + j *1;
	   
    if(sum % 10 == 0 && strlen(id) == 10)
    {
  		printf("real");
    }
    else if(sum % 10 != 0)
    {
    	printf("fake");
	}
	return 0;
}
