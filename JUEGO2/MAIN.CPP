#include <iostream>
#include "gato.cpp"
using namespace std;

int main (){

   Gato game("","","","","",1);

    cout << "  /\\./\\        __    __    __  __  " << endl;
    cout << " ( o   o )     / _|  / _ \\  |_  _|| _  | " << endl;
    cout << "  >  w  <     | |  _  | | | ||  | |   | |  | |" << endl;
    cout << " /       \\    | || | | || ||  | |   | |__| | " << endl;
    cout << "( |     | )    \\_|  \\_/|   ||   |__|" << endl;
    cout << " -\"\"\"\"\"-  " << endl;

   system("pause");
   game.pedirDatos();
   game.inicioJuego();
   system("pause");



   
    return 0;
}
