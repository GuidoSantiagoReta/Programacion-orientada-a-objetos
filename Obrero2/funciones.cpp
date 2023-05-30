
#include <iostream>
#include "Obrero.h"
using namespace std;
#include<string>
#include<iomanip>


Obrero::Obrero(string nom,int hs,float p)
{
    setNombre(nom);
    setHoras(hs);
    setPrecio(p);
}

Obrero::Obrero(){

         nombre= "";
         horas= 0;
         precio=0;
}
void Obrero::setNombre(string nom)
{
    nombre=nom;
}

void Obrero::setHoras(int hs)
{
    if(hs<0)
    {
        horas=0;
    }
    else
    {
        horas=hs;
    }
}

void Obrero::setPrecio(float p)
{
    if(p<0)
    {
        precio = 0;
    }
    else
    {
        precio = p;
    }
}


float Obrero::sueldoAcobrar()
{
    return horas*precio;
}

//funciones get
string Obrero::getNombre()
 {
    return nombre;
 }

 int Obrero::getHoras()
 {
     return horas;
 }

 float Obrero::getPrecio()
 {
     return precio;
 }



