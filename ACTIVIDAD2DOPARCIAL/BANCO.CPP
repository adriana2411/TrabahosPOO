//CLASE PADRE,PERSONA

#include <iostream>
#include <stdalign.h> 
#include <vector> 
using namespace std;


class Persona{
 private: 
 string nombre; 
 string apellido;

 public: 
 Persona (string, string);
 virtual void mostrarInfo(); /*este es el método*/
 void imprimir(); 
 string getNombre();
}; 

Persona::Persona (string _nombre, string _apellido){

    nombre= _nombre;
    apellido= _apellido;
}
  void Persona::mostrarInfo() {
    cout<<"Nombre: "<<nombre<<endl;
    cout<<"Apellido: "<<apellido<<endl;
  }

void Persona::imprimir(){
  cout<<"Imprime"<<endl;
}
string Persona::getNombre(){ 

return nombre;

  }
