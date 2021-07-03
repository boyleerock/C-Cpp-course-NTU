#include <stdio.h>
#include <stdlib.h>
#include <vector>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n, i;
	scanf("%d", &n);
	
	vector<int> myvector;
	for(i = n; i > 0; i--){
		myvector.push_back(i);
	}
	for(i = 0; i < n; i++){
		printf("%d", myvector);
	}
	return 0;
}
