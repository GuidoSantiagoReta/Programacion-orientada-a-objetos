#ifndef RECTANGULO_H_INCLUDED
#define RECTANGULO_H_INCLUDED
#include<string>

using namespace std;


class  Rectangulo{

public:

    //Constructor con parametros predeterminados
     Rectangulo(float a=1, float b=1);
    //funciones set
     void setBase(float a);
     void setAltura(float b);
     float Superficie();
     float Perimetro();
     //funciones get
     float getBase();
     float getAltura();

private:
  float base;
  float altura;




};



#endif // RECTANGULO_H_INCLUDED
