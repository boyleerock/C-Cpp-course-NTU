#include<iostream>
using namespace std;
 
class Pokemon
{
public:
    Pokemon();
    Pokemon(string na, int lv, int hp);
    void ShowInfo();
    void operator>>(Pokemon &Target);// 攻擊
    void Defence( int atkp );// 防御(被攻擊？)
    void Cure();// 治癒
	friend class PokemonHealthCenter;
	//加PokemonHealthCenter為好友
private:
    void setData(string name, int lv, int hp);
    string Name;
    int Lv;
    int HpMax;
    int HpCur;       
};
 
class PokemonHealthCenter
{
public:
    PokemonHealthCenter(string na);
    void operator<<(Pokemon &p);
private:
    string Name;
};
typedef PokemonHealthCenter PC;
