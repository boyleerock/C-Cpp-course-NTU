#include <iostream>
#include "Pokemon.h"

using namespace std;

Pokemon::Pokemon(){
	Name = "No Name";
  	Lv=HpMax=HpCur=1;
}
Pokemon::Pokemon(string name, int lv, int hp){
	Name = name;
	Lv=lv;
	HpMax=HpCur=hp;
}
Pokemon::~Pokemon(){
	cout << Name << " has returned to the nature."<<endl;
}
void Pokemon::ShowInfo(){
	setData(Name, Lv, HpCur);
    cout << "Name: " << Name << endl;
    cout << "Lv: " << Lv << endl;
    cout << "HP: " << HpCur << "/"
         << HpMax << endl << endl;
}
void Pokemon::Attack(Pokemon &Target){
	Target.HpCur -= Lv;
    if(HpCur <= 0){
    	cout << Name << " is unable to attack." << endl;
	}
	if(Target.HpCur <= 0){
		cout << Name << " cannot attack fainted target " << Target.Name << endl;
	}
	cout << Name << " Attack " << Target.Name << " " << Lv << " Points.\n";
	Target.Defence(Lv);
}
void Pokemon::Defence(int n){
    HpCur -= n;
    if(HpCur <= 0){
    	HpCur = 0;
    	cout << Name << " is fainted." << endl;
	}
}
void Pokemon::Cure(){
	cout << Name<<" has restore health.\n";
	HpCur = HpMax;
}

void Pokemon::setData(string name, int lv, int hp){
	if(name == ""){
		cout << "Name can't be empty." << endl;
		name = "No Name";
	}
	if(lv < 1){
		cout << "Lv setting error." << endl;
		lv = 1;
	}
	if(hp < 1){
		cout << "Hp setting error." << endl;
		hp = 1;
	}
	Name = name;
	Lv = lv;
	HpCur = HpMax = hp;
}
