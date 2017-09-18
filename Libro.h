//
// Created by Hedmon lopez on 18/09/2017.
//

#ifndef EXAMEN2PROGRA3ZEBRA_LIBRO_H
#define EXAMEN2PROGRA3ZEBRA_LIBRO_H


#include <iostream>

using namespace std;

class Libro
{
public:
    string nombre;
    string autor;
    int existencias;

    Libro(string nombre, string autor, int existencias);
    virtual ~Libro();
protected:
private:
};
#endif //EXAMEN2PROGRA3ZEBRA_LIBRO_H
