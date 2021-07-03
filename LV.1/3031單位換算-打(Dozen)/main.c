#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, dozen, unit;
	scanf("%d", &n);
	dozen = n/12;
	unit = n%12;
	if(n%12 != 0){
		printf("%d dozen and %d\n", dozen, unit);
	}
	else{
		printf("%d dozen\n", dozen);
	}
	return 0;
}
