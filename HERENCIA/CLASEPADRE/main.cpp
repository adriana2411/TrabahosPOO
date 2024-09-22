
#include "Sucursal.cpp" 
void foo();
void faa();

void faa(){
    foo();
}
void foo()
{
    faa();
}

int main(){



    Sucursal a(234, "carroscool", 234, "Chevrolet", "Aveo", 2015, "rojo", "Javier");
            a.mostrarSucursal();

            return 0;

}
