#include "Piedra.h"


/* ---------------------------------------------------------------------------------------------------------*/

Piedra::Piedra(){

    this->nombre= PIEDRA;
    this->icono = PIEDRA_ICONO;
    this->cantidad = 0;
}

/* ---------------------------------------------------------------------------------------------------------*/

Piedra::Piedra(int cantidad){

    this->nombre = PIEDRA; 
    this->icono = PIEDRA_ICONO;
    this->cantidad = cantidad;
}

/* ---------------------------------------------------------------------------------------------------------*/