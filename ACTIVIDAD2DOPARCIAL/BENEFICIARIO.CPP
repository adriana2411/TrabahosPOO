#include "trabajadorr.cpp"

class Beneficiario:public Persona {
  private:
      int numeroDeCuenta;
      int fechaDeInicio;
      int saldoActual;
      int saldoAnterior;
      bool activo;

  public:
    Beneficiario(int, int, int, int, string, string);
    void mostrarInfo();
    void Menu();
    void imprimir();
    
     

    
     };

     Beneficiario::Beneficiario(int _numeroDeCuenta, int _fechaDeInicio, int _saldoActual, int _saldoAnterior, string _nombre, string _apellido): Persona( _nombre, _apellido) {
          numeroDeCuenta= _numeroDeCuenta;
          fechaDeInicio= _fechaDeInicio;
          saldoActual= _saldoActual;
          saldoAnterior= _saldoAnterior;
          activo= true;
         
          
     }

     void Beneficiario:: mostrarInfo() {
           Persona:: mostrarInfo();
      cout << "El numero de cuenta es: " <<numeroDeCuenta << endl;
      cout << "La fecha de inicio fue: " <<fechaDeInicio << endl;
      cout << "El saldo actual es: " << saldoActual << endl;
      cout << "El saldo anterior es: " << saldoAnterior << endl;
      cout << "El Status de la cuenta es: ";
      if (activo) cout << "Cuenta activa" << endl; else cout << "Cuenta no activa" << endl;
       

     }

    void Beneficiario::Menu() { 
         int opcion1, opcion2;

    
 
  string nombre;
  string apellidoo;
  string nombreBuscar; 
  string nombre2="Maria";
  string nombre3="Pedro";
  int numCuenta2=456;
  int numCuenta3=123;
  int numCuenta, fechaa;
  int saldo_inicial=1000;
  float extra, saldo, retiro;  

       cout<<"\tBIENVENIDO A SU BANCO NEGOCIO DE CONFIANZA"<<endl;
       cout<<"\n";

    do{  //PONER AQUI EL DO 
       cout<<"\t1. INGRESAR UN NUEVO BENEFICIARIO"<<endl;
       cout<<"\t2. VISUALIZAR CLIENTE BENEFICIARIO YA EXISTENTE"<<endl;
       cout<<"\t3. SALIR"<<endl;
       cout<<"opcion1: ";
           cin>>opcion1; 


 switch(opcion1){
       
      
      case 1:
         cout<<"Ingresar nombre del nuevo Beneficiario ";
            cin>>nombre; 
         cout<<"Ingrsese el apellido del nuevo Beneficiario"<<endl;
             cin>>apellidoo;
         cout <<"Ingrese el numero de cuenta que se le asignara: "<<endl;
             cin>>numCuenta;
         cout<<"Ingrese fecha en la que se esta registrando: "<<endl;
             cin>>fechaa;
        break;
  
      case 2:
      int opcion2;
      
      
      do{  
       cout<<"\t1. BUSCAR BENEFICIARIO EXISTENTE"<<endl;
       cout<<"\t2. INGRESAR DINERO"<<endl;
       cout<<"\t3. RETIRAR DINERO"<<endl;
       cout<<"\t4. SALIR"<<endl;
       cout<<"opcion2: ";
           cin>>opcion2;
      
      switch(opcion2) { 
      
      case 1: 
       cout<<"Ingrese el Nombre del Beneficiario al que desea buscar: "<<endl;
           cin>>nombreBuscar;
               cout<<"\n";
       cout<<"Ingrese el Numero de Cuenta del Cliente: "<<endl;
           cin>>numCuenta2;
            cout<<"\n";

       if(nombreBuscar!=nombre2&&numCuenta2){
             cout<<"No es cliente Beneficiario de este banco"<<nombreBuscar<<endl;
    
         } else {
             cout<<"Ya es cliente Beneficiario"<<nombreBuscar<<endl;  
         }
     
         break;
   

      case 2:
         cout<<"Ingrese el nombre del Beneficiario al que desea ingresar dinero: "<<endl;
             cin>>nombre;
         cout<<"Digite la cantidad de Dinero que desea ingresar: ";
             cin>>extra;
         saldo = saldo_inicial + extra;
         cout<<"\tSu Nuevo Saldo es: $"<<saldo<<endl;
         break; 
        
      case 3:
       cout<<"Ingrese el nombre del Beneficiario al que desea retirar dinero: "<<endl;
       cin>>nombre;
       cout<<"Digite la cantidad de dinero que desea retirar: ";
          cin>>retiro;
        if(retiro>saldo_inicial){
            cout<<"No puede proceder la operacion. Su saldo es insuficiente.";
        } else {
            saldo = saldo_inicial - retiro;
            cout<<"Su Nuevo Saldo es: $"<<saldo;
              break; 
        case 4: 
         cout<<"Salir"<<endl;
           break;
               default:
               cout << "\n\nOPCIÓN NO VÁLIDA" << std::endl;
                  break;
    }

}
   while(opcion2!=4)
     break;

   case 3: 
   cout<<"Salir"<<endl;
     break;
   }
   while (opcion1!=3);
}
       
     }
while (opcion1!=3);
    }
 
