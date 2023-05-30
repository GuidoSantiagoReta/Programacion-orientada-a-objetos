#ifndef OBRERO_H_INCLUDED
#define OBRERO_H_INCLUDED

#include<string>
using namespace std;


class Obrero{

public:
    Obrero(string nom, int hs, float p);
    Obrero();
    //funciones set
    void setNombre(string);
    void setHoras(int);
    void setPrecio(float);

    //funciones get
      string getNombre();
      int getHoras();
      float getPrecio();
      float sueldoAcobrar();

private:
string nombre;
int horas;
float precio;

};




#endif // OBRERO_H_INCLUDED
