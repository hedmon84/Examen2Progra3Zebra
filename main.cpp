#include <iostream>
#include <list>
#include <fstream>
#include <stack>
#include <queue>
#include <set>
#include <map>
#include "Libro.h"
#include "Evaluador.h"
#include "NodoBinario.h"

using namespace std;
int pos= 100;
//Escribe todos los datos del libro en un archivo con nombre nombre_archivo en la posicion dada

void escribir(string nombre_archivo, Libro*libro, int posicion)
{
    ofstream out (nombre_archivo.c_str(),ios::in);
    if(!out.is_open())
    {
        out.open(nombre_archivo.c_str());
    }
    out.seekp(posicion*pos);
    out.write(libro->nombre.c_str(),50);
    out.write(libro->autor.c_str(),50);
    out.write((char*)&libro->existencias,4);

    out.close();
}

//Devuelve el libro guardado en el archivo en la posicion dada
Libro* leer(string nombre_archivo, int posicion)
{
    char name[20];
    char aut[20];
    int cont;

    ifstream in(nombre_archivo.c_str());
    in.seekg(posicion*pos);

    in.read(name,40);
    in.read(aut,40);
    in.read((char*)&cont,6);


    in.close();

    Libro *libro = new Libro(name, aut,cont);
    return libro;
}

//Crea un mapa en base a las llaves y valores dados, asocia cada llave con los valores en la misma posicion
map<string, int> convertirEnMapa(set<string> llaves, set<int> valores)
{
    map<string, int> respuesta;
    set<string>::iterator i = llaves.begin();
    set<int>::iterator x = valores.begin();
    while(i!=llaves.end())
    {
        respuesta[*i] = *x;
        x++;
        i++;
    }
    return respuesta;
}

//Devuelve una cola con los mismos valores que el parametro exepto que no tiene el ultimo valor
queue<int> popBack(queue<int> cola)
{
    queue<int> respuesta;
    stack<int> respuestaT;
    stack<int> temporal;
    int add;
    while(!cola.empty())
    {
        add = cola.front();
        temporal.push(add);
        cola.pop();
    }
    temporal.pop();
    while(!temporal.empty())
    {
        add = temporal.top();
        respuestaT.push(add);
        temporal.pop();
    }
    while(!respuestaT.empty())
    {
        add = respuestaT.top();
        respuesta.push(add);
        respuestaT.pop();
    }
    return respuesta;
}

//Reemplaza todos los valores del arbol
void reemplazarValores(NodoBinario* raiz, int valor)
{
    if (raiz==NULL){
        return;
    }

    if(raiz->valor = valor){
    }

    reemplazarValores(raiz->derecho,valor);
    reemplazarValores(raiz->izquierdo,valor);
}

//Devuelve la cantidad de bits "encendidos" o con el valores de 1
int contarBits(char byte)
{
    int cant = 0;

    for(int i = 7; 0 <= i; i--)
    {
        if((byte>>i) & 1)
        {
            cant++;
        }
    }

    return cant;
}

int main()
{
    //Funcion evaluadora
    evaluar();
    return 0;
}