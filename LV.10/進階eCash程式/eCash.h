using namespace std;

class eCash{
	private:
		int balance;
		string line;
	public:
		eCash();	
		void login(char fileName[100]);	//Read the balance in a file		
		void logout (char fileName[100]); //Write the balance in a file
		void store(int m);
		void pay(int m);
		void display();
};
