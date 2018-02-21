#include <iostream>
#include "Indice.h"
#include "Item.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>

using namespace std;

ifstream lectura("item_indices.txt",ios::in|ios::binary);
ofstream esctritura("item_indices.txt",ios::out|ios::binary);

int main() {
    Indice ind[30];
    Item items[30];

    strcpy(items[0].nombre,"carlos");
    strcpy(items[0].apellido,"Molina");
    strcpy(reinterpret_cast<char*>(&items[0].edad),"21");
    strcpy(items[0].identidad,"0501");
    strcpy(ind[0].identidad,"0501");
    //ind[0].indice = tamitem*pos-1;
    std::cout << "Hello, World!" << std::endl;
    return 0;
}