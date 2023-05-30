#include <iostream>
#include "Rectangulo.h"
#include<string>
using namespace std;
#include <iomanip>


Rectangulo::Rectangulo(float b, float a){

  setBase(b);
  setAltura(a);

}

//funciones set
void Rectangulo::setBase(float b){

   if (b>0) base = b;


}
void Rectangulo::setAltura(float a){

    if (a>0) altura =a;
}


//funciones get

float Rectangulo::getBase(){
   return base;
}

float Rectangulo::getAltura(){
   return altura;
}

float Rectangulo::Superficie(){

    return(base * altura);

}

float Rectangulo::Perimetro(){
    return  2 * (base + altura);
}
