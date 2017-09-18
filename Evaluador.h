//
// Created by Hedmon lopez on 18/09/2017.
//

#ifndef EXAMEN2PROGRA3ZEBRA_EVALUADOR_H
#define EXAMEN2PROGRA3ZEBRA_EVALUADOR_H

#include "Libro.h"
#include "NodoBinario.h"
#include <iostream>       // std::cin, std::cout
#include <stack>
#include <queue>
#include <set>
#include <map>
#include <list>
using namespace std;

void evaluar();
void escribir(string nombre_archivo, Libro*libro, int posicion);
Libro* leer(string nombre_archivo, int posicion);

map<string, int> convertirEnMapa(set<string> llaves, set<int> valores);

queue<int> popBack(queue<int> cola);

void reemplazarValores(NodoBinario* raiz, int valor);

int contarBits(char byte);

#endif //EXAMEN2PROGRA3ZEBRA_EVALUADOR_H
