#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int size, i, j;
	string *ptr, temp;
	bool sorted;
	
	cin >> size;			//Input the size of the memory
	ptr = new string[size];	//Allocate some dynamic memery space 
							//and return the address of the space
	for(i = 0; i < size; i++){
		cin >> ptr[i];
	}
	
	for(j = size; j > 1; j--){
		sorted = true;
		for(i = 0; i < j-1; i++){
			if(ptr[i] > ptr[i+1]){
				temp = ptr[i];
				ptr[i] = ptr[i+1];
				ptr[i+1] = temp;
				cout<<i<< " "<< ptr[i] << i+1 <<" "<< ptr[i] << endl;
				sorted = false;
			}
		}
		if(sorted)	//If the sorting is finshed, 
			break;  //then jump out of the loop
	}
	
	for(i = 0; i < size; i++)
		cout << ptr[i] << " ";
	
	delete [] ptr;	//Release memory
	return 0;
}
