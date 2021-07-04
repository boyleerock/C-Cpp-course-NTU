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
		cout << "eCash: 帳號開啟完成!" <<endl;
		while ( getline (myfile, line )){							
		  stringstream str_to_int(line);	//Converting Strings to Numbers
		  str_to_int >> balance;	
	    }
	    myfile.close();
	}
	else{
		cout << "eCash: 帳號不存在, 第一次使用!" << endl;
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
		cout << "eCash: 請輸入大餘0的金額" << endl;
	}
	else{
		balance += m;
		cout << "eCash: 您存了" << m << "元" << endl;
	}
}

void eCash::pay(int m){
	if(balance <= m){
		cout << "eCash: 您的錢不夠" << endl;
	}
	else if(m <= 0){
		cout << "eCash: 請輸入大餘0的金額" << endl;
	}
	else{
		balance -= m;
		cout << "eCash: 您花了" << m << "元" << endl;
	}
}

void eCash::display(){
	
	cout << "eCash: 您尚有 " << balance << "元" << endl;
	
}
