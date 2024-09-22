#include "beneficiario.cpp"
using namespace std;


Persona persona ("Juan", "Perez");


int main() {

string nombree, apellidoo;
int numCuenta, fechaa, saldoIniciall, saldoAnteriorr;
Beneficiario beneficiario(numCuenta, fechaa, saldoIniciall, saldoAnteriorr, nombree, apellidoo);

beneficiario.Menu();
cout<<"Funciona"<<endl;

    return 0;
}

