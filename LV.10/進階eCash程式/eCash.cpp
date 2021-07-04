#include <iostream>
#include <cstdlib>
#include <fstream>
#include <string>
#include <sstream>
#include "eCash.h" 

using namespace std;

eCash::eCash(){		//Constructor
	balance = 0;
	line = "";
}

void eCash::login(char fileName[100]){
	ifstream myfile (fileName);		//Declare ifstream class to read a file
	if (myfile.is_open()){
		cout << "eCash: �b���}�ҧ���!" <<endl;
		while ( getline (myfile, line )){							
		  stringstream str_to_int(line);	//Converting Strings to Numbers
		  str_to_int >> balance;	
	    }
	    myfile.close();
	}
	else{
		cout << "eCash: �b�����s�b, �Ĥ@���ϥ�!" << endl;
	}
}

void eCash::logout(char fileName[100]){
	ofstream myfile (fileName);	//Declare ofstream class to write a file
	if (myfile.is_open()){
		myfile << balance;  	//Write in balance
		myfile.close();
	}
	else cout << "Unable to open file";
}

void eCash::store(int m){
	if(m <= 0){
		cout << "eCash: �п�J�j�l0�����B" << endl;
	}
	else{
		balance += m;
		cout << "eCash: �z�s�F" << m << "��" << endl;
	}
}

void eCash::pay(int m){
	if(balance <= m){
		cout << "eCash: �z��������" << endl;
	}
	else if(m <= 0){
		cout << "eCash: �п�J�j�l0�����B" << endl;
	}
	else{
		balance -= m;
		cout << "eCash: �z��F" << m << "��" << endl;
	}
}

void eCash::display(){
	
	cout << "eCash: �z�|�� " << balance << "��" << endl;
	
}
