#include <stdio.h>
#include <stdlib.h>

#define N 50

struct addressBook{
	char name[80];
	char phoneNum[80];
	char email[80];
};
typedef struct addressBook ab;

int main(){
	ab a[N];
	int i, n = 0;
	FILE *in;
	FILE *out;
	char option;
	
	char str[80];
	
	while(1){
//		puts("i insert");
//		puts("l list");
//		puts("s save");
//		puts("o load");
//		puts("c clear");
//		puts("q quit");
		
		scanf(" %c", &option);
		
		switch(option){
			case 'i':					//insert the info
				scanf("%s", &a[n].name);
				scanf("%s", &a[n].phoneNum);
				scanf("%s", &a[n].email);
				n++;
				break;
			case 'l':					//print the list
				for(i = 0; i < n; i++){
					printf("Name: %s\n", a[i].name);
					printf("Phone: %s\n", a[i].phoneNum);
					printf("Email: %s\n", a[i].email);
				}
				break;
			case 's':
				scanf("%s", &str);
				out = fopen(str, "w");		//Open file
				for(i = 0; i < n; i++){		//Read file
					printf("Name: %s\n", a[i].name);
					printf("Phone: %s\n", a[i].phoneNum);
					printf("Email: %s\n", a[i].email);
					
					fprintf(out, "%s\n", a[i].name);
					fprintf(out, "%s\n", a[i].phoneNum);
					fprintf(out, "%s\n", a[i].email);
				}
				fclose(out);					//Close file
				break;
			case 'o':
				n = 0;
				scanf("%s", &str);
	
				in = fopen(str, "r");	//Open file
				if(in == NULL){
					printf("open %s fail!\n", str);
					return 0;
				}
				
				for(i = 0; i < n; i++){		//Read file
					fscanf(in, "%s\n", &a[i].name);
					fscanf(in, "%s\n", &a[i].phoneNum);
					fscanf(in, "%s\n", &a[i].email);
					
					printf("Name: %s\n", a[i].name);
					printf("Phone: %s\n", a[i].phoneNum);
					printf("Email: %s\n", a[i].email);
				}	
				fclose(in);					//Close file
				break;
			case 'c':
				n = 0;						//reset 
				break;
			case 'q':
				return 0;
		}
		system("pause");
		system("cls");
	}
	
	return 0;
}
