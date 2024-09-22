#include <iostream>
using namespace std;

int main (){
int a; 
char c;
float d;
bool f;
string g;

cout<<"Ingresa un numero de tipo entero: "<<"\n";
cin>>a;
cout<<"Ingresa una letra: " <<"\n";
cin>>c;
cout <<"Ingresa u numero de tipo flotante: "<<"\n";
cin>>d;
cout<<"Escribe una palabra: "<<"\n";
cin>> g;

cout<<"La variable entera ingresada es: "<< (a)<<"\n";
cout<<"La variable caracter ingresada es: "<< (c)<<"\n";
cout<<"La variable flotante ingresada es: "<<(d)<<"\n";
cout<<"La variable booleana ingresada es: "<<(f)<<"\n";
cout<<"La variable cadena de caracteres ingresada es: "<< (g)<<"\n";

int b = 14;
int *p = &b;
int *p2 = p;

cout<<"El numero de memoria del puntero es: "<<&p2<<"\n";
cout<<"El numero de memoria de la variable es: "<<p<<"\n";
cout<<"El valor de la variable definida es: "<<b;


}
