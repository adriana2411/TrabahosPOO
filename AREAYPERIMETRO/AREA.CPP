#include <iostream>
#include <cmath>
using namespace std;

class Area {

public: 
Area();
int cuadrado(int);
int triangulo(int, int);
int rectangulo(int, int);
int circulo(int);
int rombo(int, int);
int hexagono(int, int);


private:
int num1, num2, radio, diagonalM, diagonalm, lado, perimetro, apotema; 
float pi; 
};

Area::Area(){
num1= 0;
num2=0;
radio=0;
diagonalM=0; 
diagonalm=0;
lado=0;
perimetro=0; 
apotema=0; 
pi=3.1416; 
}
int  Area::cuadrado(int _num1){
    num1= _num1;
   return num1 * num1;
}

int Area::triangulo(int _num1, int _num2){
    num1= _num1;
    num2= _num2;
    return num1 * num2/2;
}

int Area::rectangulo (int _num1, int _num2){
    num1= _num1;
    num2= _num2;
    return num1 * num2;
}

int Area::circulo(int _radio){
    radio= _radio;
    return pi * radio * radio ;
}

int Area::rombo(int _diagonalM, int _diagonalm){
    diagonalM= _diagonalM;
    diagonalm= _diagonalm;
    return diagonalM * diagonalm/2;
}

int Area::hexagono(int _perimetro, int _apotema){
    perimetro= _perimetro;
    apotema= _apotema;
    return perimetro * apotema/2;
}

class Perimetro {

public: 
Perimetro();
int cuadrado(int);
int triangulo(int);
int rectangulo(int, int);
int circulo(int);
int rombo(int);
int hexagono(int);

private:
int lado, base, altura, radio;
float pi;
};
Perimetro::Perimetro(){
lado=0; 
base=0; 
altura=0; 
radio=0;
pi=3.1416; 
}

int Perimetro::cuadrado(int _lado){
   lado= _lado;
   return lado * 4;
}

int Perimetro::triangulo(int _lado){
    lado= _lado;
    return lado * 3;
}

int Perimetro::rectangulo(int _base, int _altura){
    base= _base;
    altura= _altura;
    return base *2 + altura*2 ;
}

int Perimetro::circulo(int _radio){
    radio= _radio;
    return pi * radio * 2 ;
}

int Perimetro::rombo(int _lado){
    lado= _lado;
    return lado*4;
}

int Perimetro::hexagono(int _lado){
    lado= _lado;
    return lado *6;
}

