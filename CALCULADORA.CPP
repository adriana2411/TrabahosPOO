#include <iostream>
#include <math.h>
using namespace std;

int main(){
int opcion;
double num1, num2, suma, resta, multiplicacion, potencia, resultado;

cout << "Ingrese un numero: " << endl;
cin >> num1;

cout << "Ingrese un numero: " << endl;
cin >> num2;

    cout << "Seleccione la opcion\n";
    cout << "1. Suma\n";
    cout << "2. Resta\n";
    cout << "3. Multiplicacion\n";
    cout << "4. Division\n";
    cout << "5. Potencia\n";

    cin >> opcion;

switch(opcion){
    case 1:
    suma = num1 + num2;
    cout<<"El resultado de su suma es: "<<suma<<endl;
    system("pause");
    cin>>suma;
    break;

    case 2:
    resta = num1 - num2;
    cout<<"El resultado de su resta es: "<<resta<<endl;
    break;

    case 3: 
    multiplicacion = num1 * num2;
    cout << "El resultado de su multiplicacion: " << multiplicacion << endl;
    break;

    case 4:
    if (num2 != 0) {
     double division = num1 / num2;
                cout << "El resultado de su division es: " << division << endl;
            } else {
                cout << "Error: División por cero no permitida." << endl;
            }
            break;

    case 5:
    cout << "ingrese la potencia " << endl;
    cin >> potencia;
     resultado = pow(num1,potencia);
    cout <<"su numero potencia es: "<< resultado << endl;
    break;

    default:
            cout << "Opción no válida." << endl;
            break;
}

}
