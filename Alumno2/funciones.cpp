
#include <iostream>
#include "Alumno.h"
using namespace std;
#include<string>
#include<iomanip>

Alumno::Alumno(string nom, int n1, int n2, int n3)
{
   setNombre(nom);
   setNota1 (n1);
   setNota2 (n2);
   setNota3 (n3);
};
Alumno::Alumno()
{
   nombre = "";
   nota1 = 0;
   nota2 = 0;
   nota3 = 0;
};

//funciones set
void Alumno::setNombre(string nom) {
        nombre = nom;
}
void Alumno::setNota1(int n1) {
        if (n1 < 1 || n1>10){
        nota1 = 1;
        }
         else{
            nota1 = n1;
         }
};

void Alumno::setNota2(int n2) {
        if (n2 < 1 || n2>10){
         nota2= 1;
        }
         else{
            nota2 = n2;
         }
};

void Alumno::setNota3(int n3) {
        if (n3 < 1 || n3>10){
         nota3= 1;
        }
         else{
            nota3 = n3;
         }
};
//funciones get
string Alumno::getNombre()
 {
    return nombre;
 }

 int Alumno::getNota1()
 {
     return nota1;
 }

 int Alumno::getNota2()
 {
     return nota2;
 }
  int Alumno::getNota3()
 {
     return nota3;
 }


float Alumno::promedio(){
    float suma = nota1 + nota2 + nota3;
    float promedio = suma / 3;
    return promedio;

}

float Alumno::mayor(){
     float notaMayor = nota1;
            if (nota2 > notaMayor) {
                notaMayor = nota2;
            }
            if (nota3 > notaMayor) {
                notaMayor = nota3;
            }
            return notaMayor;
        }
