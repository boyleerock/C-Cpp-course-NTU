#include<iostream>
using namespace std;
 
class Pokemon
{
public:
    Pokemon();
    Pokemon(string na, int lv, int hp);
    void ShowInfo();
    void operator>>(Pokemon &Target);// ����
    void Defence( int atkp );// ���s(�Q�����H)
    void Cure();// �v¡
	friend class PokemonHealthCenter;
	//�[PokemonHealthCenter���n��
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
