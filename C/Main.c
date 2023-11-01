#include <stdbool.h>
#include <stdio.h> 
#include <string.h>
#include "Indamon.h"




int main() {

    Indamon pika;
    Indamon bulba;
    Indamon_init(&pika, "Pika", 10, 5, 5, false);
    Indamon_init(&bulba, "Bulba", 10, 5, 5, false);
    printInfo(&bulba);
    indamonAttack(&pika, &bulba);
    printInfo(&bulba);
    
    return 0;
}