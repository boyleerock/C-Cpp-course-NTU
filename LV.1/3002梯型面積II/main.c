#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int top, bottom, height;
	scanf("%d%d%d", &top, &bottom, &height);
	double area = (double)(top+bottom)*height/2;
	printf("%.1f", area); 
	return 0;
}
