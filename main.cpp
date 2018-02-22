#include <iostream>
#include "Indice.h"
#include "Item.h"
#include <stdio.h>
#include <stdlib.h>
#include <fstream>
#include <string.h>
#include "Manejo.h"

using namespace std;

int main() {
    Manejo manage;
    manage.llenar();
    manage.escribir();
    manage.leer();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}