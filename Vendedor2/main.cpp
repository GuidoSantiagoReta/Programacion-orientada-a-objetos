#include <iostream>
#include "Vendedor.h"
#include<string>
using namespace std;
#include<iomanip>
#include<stdio.h>


int main()
{
    Vendedor v1("Jorge", 80000.50, 20, 2000),v2;

    string nom;
    float s;
    float ven;
    float com;

    cout<<"Ingrese el nombre: ";
    cin>>nom;
    cout<<"Ingrese el sueldo: ";
    cin>>s;
    cout<<"Ingrese las ventas: ";
    cin>>ven;
    cout<<"Ingrese la comsion: ";
    cin>>com;

    cout<<"Datos del empleado 1: "<<endl;
    cout<<" Nombre: "<<v1.getNombre()<<" y su sueldo basico es: "<<v1.getSueldoBasico()<<" Precio: "<<fixed<<setprecision(2)<<v1.getVentas()<< " Su comision es: "<<v1.getComision()<<endl;
    cout << "Su sueldo a cobrar es: " << fixed << setprecision(2) << v1.sueldoAcobrar() << endl;

    cout<<"Datos del empleado 2: "<<endl;
    v2.setNombre(nom);
    v2.setSueldoBasico(s);
    v2.setVentas(ven);
    v2.setComision(com);

    cout<<" Nombre: "<<v2.getNombre()<<" y su sueldo basico es: "<<v2.getSueldoBasico()<<" Precio: "<<fixed<<setprecision(2)<<v2.getVentas()<< " Su comision es: "<<v2.getComision()<<endl;
    cout << "Su sueldo a cobrar es: " << fixed << setprecision(2) << v2.sueldoAcobrar() << endl;
    return 0;
}
