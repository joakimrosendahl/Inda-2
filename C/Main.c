#include <stdbool.h>
#include <stdio.h> 
#include <string.h>
#include "Indamon.h"




int main() {

    Indamon pika;
    Indamon_init(&pika, "Pika", 10, 5, 5, false);
    
    return 0;
}