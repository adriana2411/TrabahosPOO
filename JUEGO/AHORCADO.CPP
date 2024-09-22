#include <iostream>
#include <string>  
using namespace std;

class Ahorcadoo {

private:
    char eleccion;
    string palabras = "tiburon"; 
    string palabra, fallidas;
    int vida;
    bool correcta, completa;

public:
    Ahorcadoo();
    void JugarPartida();
    void LimpiarPantalla();
    void Menu();
};

// Constructor
Ahorcadoo::Ahorcadoo(){
    Menu();
    }


void Ahorcadoo::LimpiarPantalla() {
    
    if (system("clear") == -1) {
        cout << "Error al borrar pantalla." << endl;
    }
}


void Ahorcadoo::Menu() {
    cout << "\n :::: Menu ::::" <<endl;
   cout << "1. Jugar." <<endl;
   cout << "2. Salir." <<endl;
   cout << "Eleccion: "; 
   cin >> eleccion;
    while (true) {
        vida = 6;
        palabra = "";
        fallidas = "";
        switch (eleccion) {
            case '1':
                JugarPartida();
                break;
            case '2':
                break;
            default:
                cout << "Opción no válida. Intenta nuevamente." << endl;
                break;
        }
    }
}


void Ahorcadoo::JugarPartida() {
    for (int i = 0; i < 7; i++) {
        palabra += "_";
    }

    LimpiarPantalla();

    while (vida > 0) {
        cout << "\t::: J U E G O D E L A H O R C A D O :::" << endl;
        cout << "Fallos: " << fallidas << endl;
        cout << "Progreso: " << palabra << endl;
        cout << "Ingrese una letra: ";
        cin >> eleccion;

        correcta = false;
        for (int i = 0; i < palabras.size(); i++) {
            if (palabras[i] == eleccion) {
                palabra[i] = eleccion;
                correcta = true;
            }
        }

        if (!correcta) {
            vida--;
            fallidas += eleccion;
        }

        completa = true;
        for (int i = 0; i < palabra.size(); i++) {
            if (palabra[i] == '_') {  
                completa = false;
            }
        }

        if (completa) {
            cout << "\t::: J U E G O D E L A H O R C A D O :::" << endl;
            cout << "Palabra: " << palabras << endl;
            cout << "¡¡¡ACERTASTE!!!... Ingresa una letra para continuar: ";
            cin >> eleccion;
            return;
        }
    }

    cout << "\t::: J U E G O D E L A H O R C A D O :::" << endl;
    cout << "Palabra: " << palabras << endl;
    cout << "PERDISTE :( ... Ingresa una letra para continuar: ";
    cin >> eleccion;
}
