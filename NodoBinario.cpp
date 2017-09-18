//
// Created by Hedmon lopez on 18/09/2017.
//

#include "NodoBinario.h"

NodoBinario::NodoBinario(int valor)
{
    this->valor = valor;
    this->derecho = NULL;
    this->izquierdo = NULL;
}

NodoBinario::~NodoBinario()
{
    //dtor
}
