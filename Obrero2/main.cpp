#include <iostream>
#include "Obrero.h"
#include<string>
#include<iomanip>
#include<stdio.h>

using namespace std;

int main()
{
    Obrero o1("Joan",20,50.2), o2;

    string nom;
    float p;
    int hs;



    cout<<"Ingrese el nombre: ";
    cin>>nom;
    cout<<"Ingrese las horas trabajadas del obrero 1: ";
    cin>>hs;
    cout<<"Ingrese el precio: ";
    cin>>p;

    cout<<"Datos del obrero 1: "<<endl;
    cout<<" nombre: "<<o1.getNombre()<<" Horas trabajadas: "<<o1.getHoras()<<" Su sueldo es: "<<fixed<<setprecision(2)<<o1.sueldoAcobrar()<<endl;


    cout<<"Datos del obrero 2: "<<endl;
    o2.setNombre(nom);
    o2.setHoras(hs);
    o2.setPrecio(p);

    cout<<" Nombre: "<<o2.getNombre()<<" Horas trabajadas: "<<o2.getHoras()<<" Su sueldo es: "<<fixed<<setprecision(2)<<o2.sueldoAcobrar()<<endl;





    return 0;
}
