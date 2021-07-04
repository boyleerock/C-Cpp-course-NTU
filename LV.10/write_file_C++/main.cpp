// writing on a text file
#include <iostream>
#include <fstream>
using namespace std;

int main () {
	char fileName[100];
	int num;
	
  	cin >> fileName;
	ofstream myfile (fileName);
	cin >> num;
	if (myfile.is_open())
	{
		myfile << num;
		myfile.close();
	}
	else cout << "Unable to open file";
	return 0;
}
