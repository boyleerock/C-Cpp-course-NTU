#include <stdio.h>
#include <stdlib.h>
 
#include "bag.h"
//#include "bag.c"
//bag.c �b �ۤv���q���W�ݭn�O�d�N�n�A�W�Ǯɤd�U�O�d�ۡC�]�p�G�O��devC++���ܡ^
int main() {
    int n, k, i, number_of_item = 0, total_weight_of_item = 0;
    int *a;
    //n=���v�n�R���F�� k=�I�]���e�q
    scanf("%d%d", &n, &k);
    a = (int *)malloc(sizeof(int)*n);
    for(i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
    ans(n, k, a);//�i�Jans �禡
    free(a);
    a = NULL;
    return 0;
}
