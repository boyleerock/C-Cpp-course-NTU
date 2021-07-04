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
	
	cout << "=== 歡迎使用eCash ===" << endl;
	cout << "eCash: 請輸入您的帳號: ";
	cin >> fileName;
	
	e.login(fileName);
	
	while(1){
		cout << fileName << "您好，請選擇項目:" << endl 
			 << "s: 儲值" << endl
			 << "p: 消費" << endl
			 << "d: 查詢餘額" << endl
			 << "q: 離開" << endl
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
				cout << "eCash: 帳號登出, 已存檔!" << endl
					 << "謝謝，ByeBye!" << endl; 
				return 0;
		}
		e.logout (fileName);
	
		system("pause");
		system("cls");	
	}
	return 0;
}
