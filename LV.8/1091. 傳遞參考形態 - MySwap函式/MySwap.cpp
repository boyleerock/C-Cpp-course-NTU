#include <iostream>
#include "MySwap.h"

void MySwap(int &n1,int &n2){
	int temp;
	temp = n1;
	n1 = n2;
	n2 = temp;
}
