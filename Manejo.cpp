//
// Created by Carlos Molina on 2/21/2018.
//

#include "Manejo.h"

void Manejo::escribir() {
    ofstream esctritura("item_indices.txt",ios::out|ios::binary);
}

void Manejo::leer() {
    ifstream lectura("item_indices.txt",ios::in|ios::binary);
}

void Manejo::llenar() {
    strcpy(items[0].nombre,"carlos");
    strcpy(items[0].apellido,"Molina");
    strcpy(reinterpret_cast<char*>(&items[0].edad),"21");
    strcpy(items[0].identidad,"0501");
    strcpy(ind[0].identidad,"0501");
    //ind[0].indice = tamitem*pos-1;
}
