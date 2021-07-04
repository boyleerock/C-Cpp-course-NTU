using namespace std;

class Pokemon
{
private:
	string Name;
	int Lv;
	int HpMax;
	int HpCur;
	
public:
    void ShowInfo();
    void Attack(Pokemon &Target);
    void Defence(int n);
    void Cure();
    void setData(string name, int lv, int hp);
};
