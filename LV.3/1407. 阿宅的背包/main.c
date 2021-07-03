#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
    int n, k, i, number_of_item = 0, total_weight_of_item = 0;;
    int *a;
    //n=阿宅要買的東西 k=背包的容量
    scanf("%d%d", &n, &k);
    a = (int *)malloc(sizeof(int)*n);
    for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
    
    for(i = 0; i < n; i++){
        if(a[i] <= k){
            number_of_item ++;
            total_weight_of_item += a[i];
        }
    }
    printf("%d %d\n",number_of_item, total_weight_of_item);
    
    free(a);
    a = NULL;
    return 0;
}
