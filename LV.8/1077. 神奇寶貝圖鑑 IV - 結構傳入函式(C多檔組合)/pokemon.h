#ifndef POKEMON_H
#define POKEMON_H
 
struct Pokemon
{
    char name[128];
    int lv;
    int hp;
};
 
void InputData(struct Pokemon *);
void ShowInfo(struct Pokemon);
 
#endif
