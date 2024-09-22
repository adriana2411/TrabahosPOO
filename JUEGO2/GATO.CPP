#include <iostream>

using namespace std;

class Gato{
    private:
    string tablero [3][3]; 
    int columna,fila;
    string jugador1, jugador2,status,figura1,figura2;
    int turno; 
    int jugadorTurno = 2;
    bool statuspart = false;
    int tableroGuar[3][3] = {0};
    bool statusFig = false;

    public:
    Gato(string ,string, string, string,string,int);
    void mostrarJuego();
    void pedirDatos();
    void inicioJuego();
    void mostrarGanador();

};


Gato :: Gato(string _jugador1,string _jugador2, string _status, string _figura1,string _figura2,int _turno){
    jugador1 = _jugador1;
    jugador2 = _jugador2;
    status = _status;
    figura1 = _figura1;
    figura2 = _figura2;
    turno = _turno;
    
}

void Gato :: mostrarJuego(){
    cout << "\n------ JUGADOR 1 : " << jugador1 << "  JUGADOR 2 : " << jugador2 << endl;
    

    for(int i = 0;i < 3; i++){
        for(int j = 0; j < 3;j++){
        cout << "| " << tablero[i][j] << " |";
        }
        cout << endl;
    }



}

void Gato :: pedirDatos(){


    cout << "\n-----Seleccione figura jugador 1 -----" << endl;

    cout << "X" << endl;
    cout << "O" << endl;
    cin >> jugador1;
    
    if(jugador1 == "x" || jugador1 == "X" ){
         figura1 = "x";
         figura2 = "o";
         

    }else{
        figura1 = "o";
        figura2 = "x";
        
    }

}

void Gato :: inicioJuego(){

    do {
        
        cout << "\n------ JUGADOR 1 : " << figura1 << "  JUGADOR 2 : " << figura2 << endl;
        if(jugadorTurno % 2 == 0){

            do{
                 
                cout << "JUGADOR 1 Ingrese columna: ";
                cin >> columna;
                cout << "\nJugador 1 ingrese fila: " ;
                cin >> fila;
            if(tableroGuar[fila - 1][columna - 1] == 0){ //Si es igual a 0 quiere decifr que no hay nada
                  tablero[fila - 1][columna - 1] = figura1; //Guardamos figura 
                  tableroGuar[fila - 1][columna - 1] = 1; //Guardamos datos para comprobar

            mostrarJuego();
            mostrarGanador();
            jugadorTurno++;
            statusFig = true;
            } else {
                cout << "\n Ese lugar ya esta utilizado, selecciona otra opcion" << endl;
            }
        
            }while( statusFig != true);
            

            } else {
                    do{
                 
                cout << "JUGADOR 2 Ingrese columna: ";
                cin >> columna;
                cout << "\nJugador 2 ingrese fila: " ;
                cin >> fila;
            if(tableroGuar[fila - 1][columna - 1] == 0){ //Si es igual a 0 quiere decifr que no hay nada
                  tablero[fila - 1][columna - 1] = figura2; //Guardamos figura 
                  tableroGuar[fila - 1][columna - 1] = 2; //Guardamos datos para comprobar

            mostrarJuego();
            mostrarGanador();
            jugadorTurno++;
            statusFig = true;
            } else {
                cout << "\n Ese lugar ya esta utilizado, selecciona otra opcion" << endl;
            }
        
            }while( statusFig != true);
                
                } 

        
    }while(statuspart != true);
    //Cuando alguien gane pasara a tru
    
}

void Gato :: mostrarGanador(){
     
     //Comprobar filas
     for (int i = 0; i < 3; i++)
     {
        if(tableroGuar[i][0] != 0 && tableroGuar[i][0] == tableroGuar[i][1] && tableroGuar[i][1] == tableroGuar[i][2]){ //Quiere decir que hay algo
            if(tableroGuar[i][0] = 1) {
                cout << "\n JUGADOR 1 GANADOR" << endl;
                statuspart = true;
            } else {
                cout << "\n JUGADOR 2 GANADOR" << endl;
                statuspart = true;
            }
        }
     }

     //Comprobamos columnas
     for (int i = 0; i < 3; i++)
     {
        if(tableroGuar[0][i] != 0 && tableroGuar[0][i] == tableroGuar[1][i] && tableroGuar[1][i] == tableroGuar[2][i]){ //Quiere decir que hay algo
            if(tableroGuar[i][0] = 1){
                cout << "\n JUGADOR 1 GANADOR" << endl;
                statuspart = true;
            } else {
                cout << "\n JUGADOR 2 GANADOR" << endl;
                statuspart = true;
            }
        }
     }

     // Comprobar diagonales
    if (tableroGuar[0][0] != 0 && tableroGuar[0][0] == tableroGuar[1][1] && tableroGuar[1][1] == tableroGuar[2][2]) {
        if (tableroGuar[0][0] == 1) {
            cout << "\n JUGADOR 1 GANADOR" << endl;
                statuspart = true;
        } else {
            cout << "\n JUGADOR 2 GANADOR" << endl;
                statuspart = true;
        }
    }

    if (tableroGuar[0][2] != 0 && tableroGuar[0][2] == tableroGuar[1][1] && tableroGuar[1][1] == tableroGuar[2][0]) {
        if (tableroGuar[0][2] == 1) {
           cout << "\n JUGADOR 1 GANADOR" << endl;
                statuspart = true;
        } else {
            cout << "\n JUGADOR 2 GANADOR" << endl;
                statuspart = true;
        }
        
    }


    
}
