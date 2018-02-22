//
// Created by Carlos Molina on 2/21/2018.
//

#include "Manejo.h"

void Manejo::escribir() {
    ofstream esctritura("item_indices.txt",ios::out|ios::binary);
    for(int x=0;x<5;x++){
        esctritura.write(reinterpret_cast<char*>(&ind[x]), sizeof(ind[x]));
    }
    for(int x=0;x<5;x++){
        esctritura.write(reinterpret_cast<char*>(&items[x]), sizeof(items[x]));
    }
    esctritura.close();
}

void Manejo::leer() {
    Indice ind2;
    Item *items2 = new Item();
    ifstream lectura("item_indices.txt",ios::in|ios::binary);
    lectura.seekg(0);
    cout<<"Codigo a buscar?"<<endl;
    char* busqueda;
    cin>>busqueda;
    for(int i=0;i<5;i++){
        lectura.read(reinterpret_cast<char*>(&ind2),8);
        if(ind2.identidad ==busqueda){
            lectura.seekg(sizeof(ind2)*5);
            for(int j=0;j<ind2.indice;j++){
                lectura.read(reinterpret_cast<char*>(&items2),18);
            }
            cout<<items2->nombre<<items2->apellido<<items2->edad<<items2->identidad<<endl;
        }
    }
    lectura.close();
}

void Manejo::llenar() {
    strcpy(items[0].nombre,"Carlos");
    strcpy(items[0].apellido,"Molina");
    strcpy(reinterpret_cast<char*>(&items[0].edad),"21");
    strcpy(items[0].identidad,"0501");
    strcpy(ind[0].identidad,"0501");
    items[0].tamitem = strlen(items[0].nombre)+strlen(items[0].apellido)+4+strlen(items[0].identidad);
    ind[0].indice = 1;

    strcpy(items[1].nombre,"Daniel");
    strcpy(items[1].apellido,"Medina");
    strcpy(reinterpret_cast<char*>(&items[1].edad),"22");
    strcpy(items[1].identidad,"0502");
    strcpy(ind[1].identidad,"0502");
    items[1].tamitem = strlen(items[1].nombre)+strlen(items[1].apellido)+4+strlen(items[1].identidad);
    ind[1].indice = 2;

    strcpy(items[2].nombre,"Christian");
    strcpy(items[2].apellido,"Molina");
    strcpy(reinterpret_cast<char*>(&items[2].edad),"19");
    strcpy(items[2].identidad,"0503");
    strcpy(ind[2].identidad,"0503");
    items[2].tamitem = strlen(items[2].nombre)+strlen(items[2].apellido)+4+strlen(items[2].identidad);
    ind[2].indice = 3;

    strcpy(items[3].nombre,"Andrea");
    strcpy(items[3].apellido,"Zuniga");
    strcpy(reinterpret_cast<char*>(&items[3].edad),"22");
    strcpy(items[3].identidad,"0504");
    strcpy(ind[3].identidad,"0504");
    items[3].tamitem = strlen(items[3].nombre)+strlen(items[3].apellido)+4+strlen(items[3].identidad);
    ind[3].indice = 4;

    strcpy(items[4].nombre,"Paola");
    strcpy(items[4].apellido,"Carcamo");
    strcpy(reinterpret_cast<char*>(&items[4].edad),"19");
    strcpy(items[4].identidad,"0505");
    strcpy(ind[4].identidad,"0505");
    items[4].tamitem = strlen(items[4].nombre)+strlen(items[4].apellido)+4+strlen(items[4].identidad);
    ind[4].indice = 5;

    strcpy(items[5].nombre,"Aaron");
    strcpy(items[5].apellido,"Santos");
    strcpy(reinterpret_cast<char*>(&items[5].edad),"22");
    strcpy(items[5].identidad,"0506");
    strcpy(ind[5].identidad,"0506");
    items[5].tamitem = strlen(items[5].nombre)+strlen(items[5].apellido)+4+strlen(items[5].identidad);
    ind[5].indice = 6;
}
