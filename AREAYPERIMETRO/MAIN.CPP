
#include "area.cpp"

int main() {
    int opcion = 0;
    int num1, num2, radio, diagonalM, diagonalm, lado, perimetro, apotema;
    
    Area area;
    Perimetro perimetroObj;

    while (opcion != 1) {
        cout << "1. Salir\n";
        cout << "2. Area de Cuadrado\n";
        cout << "3. Area de Triangulo\n";
        cout << "4. Area de Rectangulo\n";
        cout << "5. Area de Circulo\n";
        cout << "6. Area de Rombo\n";
        cout << "7. Area de Hexagono\n";
        cout << "8. Perimetro de Cuadrado\n";
        cout << "9. Perimetro de Triangulo\n";
        cout << "10. Perimetro de Rectangulo\n";
        cout << "11. Perimetro de Circulo\n";
        cout << "12. Perimetro de Rombo\n";
        cout << "13. Perimetro de Hexagono\n";
        cout << "Ingrese una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 2:
            cout << "Ingrese el lado del cuadrado: ";
            cin >> num1;
            cout << "El area del cuadrado es: " << area.cuadrado(num1) << "\n";
            break;
        case 3:
            cout << "Ingrese la base y la altura del triangulo: ";
            cin >> num1 >> num2;
            cout << "El area del triangulo es: " << area.triangulo(num1, num2) << "\n";
            break;
        case 4:
            cout << "Ingrese la base y la altura del rectangulo: ";
            cin >> num1 >> num2;
            cout << "El area del rectangulo es: " << area.rectangulo(num1, num2) << "\n";
            break;
        case 5:
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            cout << "El area del circulo es: " << area.circulo(radio) << "\n";
            break;
        case 6:
            cout << "Ingrese las diagonales mayor y menor del rombo: ";
            cin >> diagonalM >> diagonalm;
            cout << "El area del rombo es: " << area.rombo(diagonalM, diagonalm) << "\n";
            break;
        case 7:
            cout << "Ingrese el perimetro y la apotema del hexagono: ";
            cin >> perimetro >> apotema;
            cout << "El area del hexagono es: " << area.hexagono(perimetro, apotema) << "\n";
            break;
        case 8:
            cout << "Ingrese el lado del cuadrado: ";
            cin >> lado;
            cout << "El perimetro del cuadrado es: " << perimetroObj.cuadrado(lado) << "\n";
            break;
        case 9:
            cout << "Ingrese el lado del triangulo: ";
            cin >> lado;
            cout << "El perimetro del triangulo es: " << perimetroObj.triangulo(lado) << "\n";
            break;
        case 10:
            cout << "Ingrese la base y la altura del rectangulo: ";
            cin >> num1 >> num2;
            cout << "El perimetro del rectangulo es: " << perimetroObj.rectangulo(num1, num2) << "\n";
            break;
        case 11:
            cout << "Ingrese el radio del circulo: ";
            cin >> radio;
            cout << "El perimetro del circulo es: " << perimetroObj.circulo(radio) << "\n";
            break;
        case 12:
            cout << "Ingrese el lado del rombo: ";
            cin >> lado;
            cout << "El perimetro del rombo es: " << perimetroObj.rombo(lado) << "\n";
            break;
        case 13:
            cout << "Ingrese el lado del hexagono: ";
            cin >> lado;
            cout << "El perimetro del hexagono es: " << perimetroObj.hexagono(lado) << "\n";
            break;
        case 1:
            cout << "Saliendo...\n";
            break;
        default:
            cout << "Opcion no valida, intente nuevamente.\n";
            break;
        }
    }

    return 0;
}
