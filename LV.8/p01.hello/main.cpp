#include <iostream>
using namespace std;

int main(int argc, char** argv) {
	int n1;
	double n2;
//	char n3;
	char n4[80];
	cin.operator>>(n1).operator>>(n2);
//	cout.operator<<(n1).operator<<(endl).operator<<(n2).operator<<(endl);
	cin.ignore();
	cin.getline(n4, 128);
	cout << n1 << n2 << n4 << endl;
	return 0;
}
