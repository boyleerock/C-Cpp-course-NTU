#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

int main(int argc, char *argv[]) {
	char str1[80];
    int i;
		
 	while(strcmp(str1, "-1")){	//while(strcmp(str1, "-1") != 0)
		gets(str1);
		
		for(i = 0; i < strlen(str1); i++){
		//      if(str1[i]>='a' && str1[i]<='z')
		//            str1[i] -= 32;
		    if(islower(str1[i]))
		        str1[i] -= 32;
    	}  
 		if(strcmp(str1, "-1"))	//if(strcmp(str1, "-1") != 0)
    		puts(str1);   
	}
    
	
	return 0;
}
