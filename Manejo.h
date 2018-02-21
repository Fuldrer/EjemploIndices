//
// Created by Carlos Molina on 2/21/2018.
//
#include <iostream>
#include "Indice.h"
#include "Item.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

#ifndef EJEMPLOINDICES_MANEJO_H
#define EJEMPLOINDICES_MANEJO_H


class Manejo {
    Indice ind[30];
    Item items[30];
    void escribir();
    void leer();
    void llenar();
};


#endif //EJEMPLOINDICES_MANEJO_H
