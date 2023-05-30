#include <iostream>
#include "Vendedor.h"
#include<string>
using namespace std;
#include <iomanip>

// OJO: ASIGNAR DE ESTA MANERA
 //constructor con  parametros
Vendedor::Vendedor(string nom, float s, float ven, float com){

        setNombre(nom);
        setSueldoBasico(s);
        setVentas(ven);
        setComision(com);
    }
 //constructor con parametros predeterminados
Vendedor::Vendedor(){

         nombre= "";
         sueldoBasico = 0;
         ventas= 0;
         comision= 0;
}

void Vendedor::setNombre(string nom) {
        nombre = nom;
}

void Vendedor::setSueldoBasico(float s){

       if (s >= 0)
            sueldoBasico = s;
       else
        sueldoBasico = 0;
}

void Vendedor::setVentas(float ven){
       if (ven >= 0)
        ventas = ven;
}

void Vendedor::setComision(float com){

       if (com >= 0)
       comision = com;
}

//Funcion sueldo a cobrar
float Vendedor::sueldoAcobrar(){
 return sueldoBasico + (ventas * comision);
}
//funciones get
string Vendedor::getNombre()  {
    return nombre;
}

float Vendedor::getSueldoBasico()  {
    return sueldoBasico;
}

float Vendedor::getVentas()  {
    return ventas;
}

float Vendedor::getComision()  {
    return comision;
}
