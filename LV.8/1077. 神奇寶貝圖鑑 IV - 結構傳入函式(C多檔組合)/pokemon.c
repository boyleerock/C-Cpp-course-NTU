#include "pokemon.h"
#include <stdio.h>
 
void InputData(struct Pokemon *p){
    scanf("%s", &p->name);
    scanf("%d", &p->lv);
    scanf("%d", &p->hp);
}
void ShowInfo(struct Pokemon p){
    printf("Name: %s\nLv: %d\nHP: %d\n\n", p.name, p.lv, p.hp);
}
