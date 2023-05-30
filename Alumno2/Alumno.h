#ifndef ALUMNO_H_INCLUDED
#define ALUMNO_H_INCLUDED
#include<string>

using namespace std;

class Alumno{

 public:
 Alumno (string nom, int n1, int n2, int n3);
 Alumno();

 //funciones set
void setNombre(string);
void setNota1(int);
void setNota2(int);
void setNota3(int);
float promedio();
float mayor();
//funciones get
 string getNombre();
 int getNota1();
 int getNota2();
 int getNota3();

 private:
 string nombre;
 int nota1;
 int nota2;
 int nota3;



};


#endif // ALUMNO_H_INCLUDED
