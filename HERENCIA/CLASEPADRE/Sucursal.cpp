
#include "auto.cpp"
#include "trabajador.cpp"

 

class Sucursal: public Auto , Trabajador  {  

    private: //private means protected, Atributos
       int id;
       string nombre;
       int promocion;
    
   public:
    Sucursal (int, string, int, string, string, int, string, string);//se pondran los atributos de la clase padre y despues del hijo
    //sucursal (string_marca, string_modelo, string_año, string_color, int_id, string_nombre, int_promocion);
    void mostrarSucursal ();
}; 

 Sucursal :: Sucursal (int _id, string _nombre, int _promocion, string _marca, string _modelo, int _anio, string _color, string _Empleado) : Auto( _marca, _modelo, _anio, _color), Trabajador ( _Empleado){
    
    id= _id;
    nombre= _nombre;
    promocion= _promocion; 
      }

 

    void Sucursal :: mostrarSucursal (){
         mostrarAuto ();
        mostrarTrabajador();
         cout<<"id Suc: "<<id<<endl;
         cout<<"nombre Suc: "<<nombre<<endl;
         cout<<"promocion en Suc: "<<promocion<<endl;

   
    }
