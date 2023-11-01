#include <stdbool.h>
#include <stdio.h> 
#include <string.h>

typedef struct {
    char name[10];
    int hp;
    int attack;
    int defense;
    bool fainted;
} Indamon;

char* getName(Indamon* instance) {
    return instance -> name;
}
void setName(Indamon* instance, char* newName) {
    strcpy(instance -> name, newName);
}