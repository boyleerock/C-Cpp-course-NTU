#include <stdio.h>
#include <stdlib.h>

#define N 3 
typedef struct Monster{
	char Name[100];
    int Lv;
    int Hp;
}Mon;
int main(int argc, char *argv[]) {
	Mon M [N];
	int i, highest = 0, highestPos = M[0];
	for(i = 0; i < N; i++){
		scanf("%s%d%d", &M[i].Name, &M[i].Lv, &M[i].Hp);
		if(highest < M[i].Lv)
			highest = M[i].Lv;
			highestPos = i;
	}
	printf("Name: %s\nLv: %d\nHP: %d\n", M[highestPos].Name, M[highestPos].Lv, M[highestPos].Hp);
	
	return 0;
}
