#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <sstream>
#include "eCash.h" 

using namespace std;

int main() {
	char op, fileName[100];
	int m;
	
	eCash e;
	
	cout << "=== �w��ϥ�eCash ===" << endl;
	cout << "eCash: �п�J�z���b��: ";
	cin >> fileName;
	
	e.login(fileName);
	
	while(1){
		cout << fileName << "�z�n�A�п�ܶ���:" << endl 
			 << "s: �x��" << endl
			 << "p: ���O" << endl
			 << "d: �d�߾l�B" << endl
			 << "q: ���}" << endl
			 << ">";
		cin >> op;
		
		switch(op){
			case 's':
				cin >> m; 
				e.store(m);
				break;
			case 'p':
				cin >> m; 
				e.pay(m);			
				break;
			case 'd':
				e.display();
				break;
			case 'q':
				cout << "eCash: �b���n�X, �w�s��!" << endl
					 << "���¡AByeBye!" << endl; 
				return 0;
		}
		e.logout (fileName);
	
		system("pause");
		system("cls");	
	}
	return 0;
}
