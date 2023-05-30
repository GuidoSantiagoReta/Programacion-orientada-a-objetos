#include <iostream>
#include "Alumno.h"
#include<string>
#include<iomanip>
#include<stdio.h>

using namespace std;

int main()
{
    Alumno a1("Jorge", 5, 6, 8), a2;

    string nom;
    int n1;
    int n2;
    int n3;

    cout<<"Ingrese el nombre: ";
    cin>>nom;
    cout<<"Ingrese la nota1: ";
    cin>>n1;
    cout<<"Ingrese la nota2: ";
    cin>>n2;
    cout<<"Ingrese la nota3: ";
    cin>>n3;


    cout<<"Datos del alumno 1: "<<endl;
    cout<<"Nombre: "<<a1.getNombre()<<" nota1: "<<a1.getNota1()<<" nota2: "<<a1.getNota2()<< " nota3: "<<a1.getNota3()<<endl;
    cout <<"Promedio: " << a1.promedio() << endl;
    cout <<"Nota Mayor: " << a1.mayor() << endl;

    cout<<"Datos del alumno 2: "<<endl;
    a2.setNombre(nom);
    a2.setNota1(n1);
    a2.setNota2(n2);
    a2.setNota3(n3);
    cout<<"Nombre: "<<a2.getNombre()<<" nota1: "<<a2.getNota1()<<" nota2: "<<a2.getNota2()<< " nota3: "<<a2.getNota3()<<endl;
    cout <<"Promedio: " << a2.promedio() << endl;
    cout <<"Nota Mayor: " << a2.mayor() << endl;

    return 0;
}
