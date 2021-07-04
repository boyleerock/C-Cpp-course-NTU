#include <iostream>
#include "Pokemon.h"
using namespace std;

void Pokemon::ShowInfo(){
    cout << "Name: " << Name << endl 
		 << "Lv: "	 << Lv << endl
		 << "HP: "   << HpMax << "/" << HpCur << endl << endl;
}
