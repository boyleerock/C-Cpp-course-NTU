#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[128];
	char gender[128]; 
	int age;
	scanf("%s%d%s", &name, &age, &gender); 
	printf("Name:%s\nAge:%d\nGender:%s\n", name, age, gender);
	return 0;
}
