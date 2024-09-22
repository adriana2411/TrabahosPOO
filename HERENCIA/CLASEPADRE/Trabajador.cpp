#include <iostream>
#include <stdalign.h> 
/*#include <programacion6.cpp> */
using namespace std;

class Trabajador { //Todo esto del private y public se llama encapsulamiento de clases

private: //Atributos
string Empleado;

public://Metodos de la clase Auto
Trabajador (string);
void mostrarTrabajador(); 
};

Trabajador::Trabajador (string _Empleado){
Empleado= _Empleado;
} 

void Trabajador::mostrarTrabajador() {
    cout<<"Empleado: "<<Empleado<<endl;
   

}
