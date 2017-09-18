//
// Created by Hedmon lopez on 18/09/2017.
//

#include "Evaluador.h"

bool compareQueues(queue<int>q1, queue<int>q2)
{
    if(q1.size()!=q2.size())
        return false;
    while(!q1.empty())
    {
        if(q1.front()!=q2.front())
            return false;
        q1.pop();
        q2.pop();
    }
    return true;
}

void evaluar()
{
    int nota = 0;

    escribir("archivo_evaluador1",new Libro("Cien anos de soledad","Gabriel Garcia Marquez",20),1);
    escribir("archivo_evaluador1",new Libro("Don Quijote de la Mancha","Miguel de Cervantes",10),0);
    escribir("archivo_evaluador1",new Libro("Hamlet","William Shakespeare",30),2);

    cout<<"Ejercicio escribir() y leer():\t\t";
    bool correcto = true;

    if(  (leer("archivo_evaluador1",0)
          && leer("archivo_evaluador1",0)->nombre == "Don Quijote de la Mancha"
          && leer("archivo_evaluador1",1)->nombre == "Cien anos de soledad"
          && leer("archivo_evaluador1",2)->nombre == "Hamlet"
          && leer("archivo_evaluador1",0)->autor == "Miguel de Cervantes"
          && leer("archivo_evaluador1",1)->autor == "Gabriel Garcia Marquez"
          && leer("archivo_evaluador1",2)->autor == "William Shakespeare"
          && leer("archivo_evaluador1",0)->existencias == 10
          && leer("archivo_evaluador1",1)->existencias == 20
          && leer("archivo_evaluador1",2)->existencias == 30
         )==false)
    {
        correcto=false;
    }

    escribir("archivo_evaluador2",new Libro("Macbeth","William Shakespeare",5),0);
    escribir("archivo_evaluador2",new Libro("El amor en los tiempos del colera","Gabriel Garcia Marquez",10),1);

    if(  (leer("archivo_evaluador2",0)
          && leer("archivo_evaluador2",0)->nombre == "Macbeth"
          && leer("archivo_evaluador2",1)->nombre == "El amor en los tiempos del colera"
          && leer("archivo_evaluador2",0)->autor == "William Shakespeare"
          && leer("archivo_evaluador2",1)->autor == "Gabriel Garcia Marquez"
          && leer("archivo_evaluador2",0)->existencias == 5
          && leer("archivo_evaluador2",1)->existencias == 10
         )==false)
    {
        correcto=false;
    }

    if(correcto)
    {
        nota+=5;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<"Ejercicio convertirEnMapa():\t\t";
    set<string> s1a;
    s1a.insert("A");
    s1a.insert("B");
    s1a.insert("C");
    s1a.insert("D");
    set<int> s1b;
    s1b.insert(10);
    s1b.insert(20);
    s1b.insert(30);
    s1b.insert(40);

    set<string> s2a;
    s2a.insert("lola");
    s2a.insert("lolo");
    set<int> s2b;
    s2b.insert(100);
    s2b.insert(200);

    map<string, int> m1 = convertirEnMapa(s1a, s1b);
    map<string, int> m2 = convertirEnMapa(s2a, s2b);

    if(m1["A"]==10
       && m1["B"]==20
       && m1["C"]==30
       && m2["lola"]==100
       && m2["lolo"]==200
            )
    {
        nota+=6;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    queue<int> q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);

    queue<int> q1_respuesta;
    q1_respuesta.push(1);
    q1_respuesta.push(2);


    queue<int> q2;
    q2.push(10);
    q2.push(20);
    q2.push(30);
    q2.push(40);
    q2.push(50);

    queue<int> q2_respuesta;
    q2_respuesta.push(10);
    q2_respuesta.push(20);
    q2_respuesta.push(30);
    q2_respuesta.push(40);

    cout<<"Ejercicio popBack():\t\t\t";
    if(compareQueues(popBack(q1), q1_respuesta)
       && compareQueues(popBack(q2), q2_respuesta)
            )
    {
        nota+=6;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    NodoBinario* n1 = new NodoBinario(1);
    NodoBinario* n2 = new NodoBinario(2);
    NodoBinario* n3 = new NodoBinario(3);
    NodoBinario* n4 = new NodoBinario(4);
    NodoBinario* n5 = new NodoBinario(5);
    NodoBinario* n6 = new NodoBinario(6);
    NodoBinario* n7 = new NodoBinario(7);

    n1->izquierdo = n2;
    n1->derecho = n3;
    n2->izquierdo = n4;
    n2->derecho = n5;
    n3->izquierdo = n4;
    n3->derecho = n5;
    n4->izquierdo = n6;
    n5->derecho = n7;

    cout<<"Ejercicio buscarYReemplazar():\t\t";
    reemplazarValores(n1,100);
    if(n1->valor == 100
       && n2->valor == 100
       && n3->valor == 100
       && n4->valor == 100
       && n5->valor == 100
       && n6->valor == 100
       && n7->valor == 100
            )
    {
        nota+=6;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }


    cout<<"Ejercicio contarBits():\t\t\t";
    if(contarBits(1)==1
       && contarBits(2)==1
       && contarBits(3)==2
       && contarBits(255)==8
       && contarBits(9)==2
       && contarBits(30)==4
            )
    {
        nota+=6;
        cout<<"Correcto"<<endl;
    }else
    {
        cout<<"Incorrecto"<<endl;
    }

    cout<<endl<<"Nota: "<<nota<<"/25"<<endl;
}
