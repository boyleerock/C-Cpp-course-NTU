#include <stdio.h>
#include <stdlib.h>

#define MONSTER 3

typedef struct Monster{
	char Name[100];
	int Lv;
	int Hp;
}Monster2;

int main(int argc, char *argv[]) {
	int i, n, flag = 0;
	Monster2 m[MONSTER];
	for(i = 0; i < MONSTER; i++){
		scanf("%s%d%d", &m[i].Name, &m[i].Lv, &m[i].Hp);
	}
	scanf("%d", &n);
	for(i = 0; i < MONSTER; i++){
		if(m[i].Lv >= n){
			printf("Name: %s\nLv: %d\nHP: %d\n\n", m[i].Name, m[i].Lv, m[i].Hp);
			flag = 1;
		}
	}
	if(flag == 0)
		printf("not found\n");
		
	return 0;
}
