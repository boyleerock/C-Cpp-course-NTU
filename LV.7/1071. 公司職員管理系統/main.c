#include <stdio.h>
#include <stdlib.h>

struct Employee
{
    char Name[20];
    char Phone[11];
    int id;
};

int main(int argc, char *argv[]) {
	struct Employee e1;
	struct Employee e2;
	struct Employee e3;
	int numberID;
	
	scanf("%s%s%d", &e1.Name, &e1.Phone, &e1.id);
	scanf("%s%s%d", &e2.Name, &e2.Phone, &e2.id);
	scanf("%s%s%d", &e3.Name, &e3.Phone, &e3.id);
	scanf("%d", &numberID);
	
	if(numberID == e1.id){
		printf("found\nName: %s\nPhone: %s\nId: %d\n", e1.Name, e1.Phone, e1.id);
	}
	else if(numberID == e2.id){
		printf("found\nName: %s\nPhone: %s\nId: %d\n", e2.Name, e2.Phone, e2.id);
	}
	else if(numberID == e3.id){
		printf("found\nName: %s\nPhone: %s\nId: %d\n", e3.Name, e3.Phone, e3.id);
	}
	else{
		printf("not found\n");
	}
	return 0;
}
