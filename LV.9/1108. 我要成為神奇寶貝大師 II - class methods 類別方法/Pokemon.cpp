#include <iostream>
#include "Pokemon.h"
using namespace std;

void Pokemon::ShowInfo(){
    cout << "Name: " << Name << endl 
		 << "Lv: "	 << Lv << endl
		 << "HP: "   << HpCur << "/" << HpMax << endl << endl;
}

void Pokemon::Attack(Pokemon &Target){
	cout << Name << " Attack "<<Target.Name<<" "<<Lv<<" Points.\n";
	Target.Defence(Lv);
}

void Pokemon::Defence(int atkp){
	HpCur -= atkp;
}

void Pokemon::Cure(){
	cout << Name<<" has restore health.\n";
	HpCur = HpMax;
}
