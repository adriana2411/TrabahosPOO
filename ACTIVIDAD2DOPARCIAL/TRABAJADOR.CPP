//CLASE HIJA

#include "persona.cpp"

class Trabajadorr: public Persona {
private: 
int id;
int sueldo;

public: 
Trabajadorr (int, int, string, string);
   void mostrarInfo(); 

 }; 

 Trabajadorr::Trabajadorr(int _id, int _sueldo, string _nombre, string _apellido ):Persona( _nombre, _apellido){

    id= _id;
    sueldo= _sueldo; 
   
 }

 void Trabajadorr :: mostrarInfo() {
   Persona::mostrarInfo(); 
    cout<<"id: "<<id<<endl;
    cout<<"sueldo: "<<sueldo<<endl; 
 
 } 

