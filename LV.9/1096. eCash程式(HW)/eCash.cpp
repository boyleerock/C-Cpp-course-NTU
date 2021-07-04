#include <iostream>
#include <cstdlib>

using namespace std;

class eCash{
	private:
		int balance;
	public:
		eCash(){
			balance = 0;
		}
		void store(int m){
			if(m <= 0){
				cout << "eCash: Please enter a number > 0." << endl;
			}
			else{
				balance += m;
				cout << "eCash: You stored " << m << "." << endl;
			}
		}
		void pay(int m){
			if(balance <= m){
				cout << "eCash: Insufficient balance." << endl;
			}
			else if(m <= 0){
				cout << "eCash: Please enter a number > 0." << endl;
			}
			else{
				balance -= m;
				cout << "eCash: You spend " << m << "." << endl;
			}	
		}
		void display(){
			cout << "eCash: You remaining " << balance << "." << endl;
		}
};

int main(int argc, char** argv) {
	char op;
	int m;
	
	eCash e;
	
	while(1){
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
				cout << "eCash: Thank you. Bye Bye." << endl;
				return 0;
		}
		system("pause");
		system("cls");	
	}
	return 0;
}
