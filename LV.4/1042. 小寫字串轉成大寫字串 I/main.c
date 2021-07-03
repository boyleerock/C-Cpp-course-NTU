#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
 
int main(int argc, char *argv[]) {
    char str1[80];
    gets(str1);
    int len = strlen(str1);
    int i;
 
    for(i=0;i<len;i++){
//      if(str1[i]>='a' && str1[i]<='z')
//            str1[i] -= 32;
        if(islower(str1[i]))
            str1[i] -= 32;
    }  
 
    puts(str1);   
 
    return 0;
}
