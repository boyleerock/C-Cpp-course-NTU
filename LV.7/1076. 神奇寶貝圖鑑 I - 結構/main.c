#include <stdio.h>
#include <stdlib.h>
 
struct Monster{
    char Name[100];
    int Lv;
    int Hp;
};
int main(int argc, char *argv[]) {
    struct Monster m1, m2;
 
    scanf("%s%d%d", &m1.Name, &m1.Lv, &m1.Hp);
    scanf("%s%d%d", &m2.Name, &m2.Lv, &m2.Hp);
    printf("Name: %s\nLv: %d\nHP: %d\n\n", m1.Name, m1.Lv, m1.Hp);
    printf("Name: %s\nLv: %d\nHP: %d\n\n", m2.Name, m2.Lv, m2.Hp);
 
    return 0;
}
