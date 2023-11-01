#include <stdbool.h>
#include <stdio.h> 
#include <string.h>
#include "Indamon.h"



char* getName(Indamon* instance) {
    return instance -> name;
}
void setName(Indamon* instance, char* newName) {
    strcpy(instance -> name, newName);
}

int getHp(Indamon* instance) {
    return instance -> hp;
}
void setHp(Indamon* instance, int newHp) {
    instance -> hp = newHp;
}
int getAttack(Indamon* instance) {
    return instance -> attack;
}
void setAttack(Indamon* instance, int newAttack) {
    instance -> attack = newAttack;
}

int getDefense(Indamon* instance) {
    return instance -> defense;
}
void setDefense(Indamon* instance, int newDefense) {
    instance -> defense = newDefense;
} 
bool getFainted(Indamon* instance) {
    return instance -> fainted;
}
void setFainted(Indamon* instance, bool newFainted) {
    instance -> fainted = newFainted;
}


void Indamon_init(Indamon* instance, char* name, int hp, int attack, int defense, bool fainted) {
    setName(instance, name);
    setAttack(instance, attack);
    setDefense(instance, defense);
    setFainted(instance, fainted);
}