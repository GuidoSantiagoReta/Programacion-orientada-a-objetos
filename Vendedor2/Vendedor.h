#ifndef VENDEDOR_H_INCLUDED
#define VENDEDOR_H_INCLUDED

#include<string>
using namespace std;

class Vendedor{

      public:
     //constructor con  parametros
     Vendedor (string nom, float s, float ven, float com );
     Vendedor();

     void setNombre(string);
     void setSueldoBasico(float);
     void setVentas(float);
     void setComision(float);
     //funciones get
      string getNombre();
      float getSueldoBasico();
      float getVentas();
      float getComision();
      float sueldoAcobrar();

  private:
     string nombre;
     float sueldoBasico;
     float ventas;
     float comision;
};


#endif // VENDEDOR_H_INCLUDED
