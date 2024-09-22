#include <iostream>
#include <stdalign.h> 
using namespace std;
class Auto { //Todo esto del private y public se llama encapsulamiento de clases

private: //Atributos
string marca;   
string modelo;
int anio; 
string color; 

public://Metodos de la clase Auto
Auto (string, string, int, string);
void mostrarAuto(); 
};
