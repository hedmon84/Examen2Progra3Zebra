//
// Created by Hedmon lopez on 18/09/2017.
//

#ifndef EXAMEN2PROGRA3ZEBRA_NODOBINARIO_H
#define EXAMEN2PROGRA3ZEBRA_NODOBINARIO_H


#include <iostream>
using namespace std;

class NodoBinario
{
public:
    int valor;
    NodoBinario* izquierdo;
    NodoBinario* derecho;

    NodoBinario(int valor);
    virtual ~NodoBinario();
protected:
private:
};

#endif //EXAMEN2PROGRA3ZEBRA_NODOBINARIO_H
