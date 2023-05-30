#include <iostream>
#include "Rectangulo.h"
#include<string>
#include<iomanip>
#include<stdio.h>

using namespace std;

int main()
{
    Rectangulo r1,r2;
    r1.setBase(8);
    r1.setAltura(2);

      float base, altura;
    cout << "Ingrese la base del segundo rectangulo: ";
    cin >> base;
    cout << "Ingrese la altura del segundo rectangulo: ";
    cin >> altura;
    r2.setBase(base);
    r2.setAltura(altura);

// Mostrar la superficie y  perímetro de cada rectángulo

    cout << "Rectangulo 1: ";
    r1.getAltura();
    r1.getBase();
    cout<<" Altura: "<<r1.getAltura()<< " Base: "<<r1.getBase()<<endl;
    cout << "Superficie: " << r1.Superficie() << endl;
    cout << "Perimetro: " << r1.Perimetro() << endl;

    cout << "Rectangulo 2: ";
    r2.getAltura();
    r2.getBase();
    cout<<" Altura: "<<r2.getAltura()<< " Base: "<<r2.getBase()<<endl;
    cout << "Superficie: " << r2.Superficie() << endl;
    cout << "Perimetro: " << r2.Perimetro() << endl;
    return 0;
}
