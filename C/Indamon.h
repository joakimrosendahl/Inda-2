#ifndef INDAMON_H
#define INDAMON_H
#include <stdbool.h>

typedef struct {
    char name[10];
    int hp;
    int attack;
    int defense;
    bool fainted;
} Indamon;

// Getter and setter function declarations
char* getName(Indamon* instance);
void setName(Indamon* instance, char* newName);
int getHp(Indamon* instance);
void setHp(Indamon* instance, int newHp);
int getAttack(Indamon* instance);
void setAttack(Indamon* instance, int newAttack);
int getDefense(Indamon* instance);
void setDefense(Indamon* instance, int newDefense);
bool getFainted(Indamon* instance);
void setFainted(Indamon* instance, bool newFainted);


// Initialization function declaration
void Indamon_init(Indamon* instance, char* name, int hp, int attack, int defense, bool fainted);
void printInfo(Indamon* instance);

#endif // INDAMON