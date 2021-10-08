#include "iostream"
using namespace std;
/* declaro las variables globales para el password */
string usuario = "" , pass = "", user = "Jesus", password = "315";
/* declaro las variables globales para la suma , resta, mult */
int numero1, numero2, numero3, resultado;
/* declaro funcion principal*/
int main(){
    /* declaro varible opcion en char*/
    char opc;
    cout<<"Bienvenido por favor ingresa tus credenciales: "<<endl;
    cout<<"Por favor ingresa tu Usuario: "<<endl;
    cin>>usuario;
    cout<<"Digita tu Password :"<<endl;
    cin>>pass;
    /* inicia validacion de password*/
    if(usuario == user && pass == password){
       cout<<"Bienvenido : "<<usuario<<" al sistema por favor selecciona una opción"<<endl;
       cout<<"1.- Suma"<<endl;
       cout<<"2.- Resta"<<endl;
       cout<<"3.- Multiplicacion"<<endl;
       cin>>opc;
        /* inicia validacion del menu*/
         if(opc == '1'){
           cout<<"Bienvenido a la suma";
           cout<<"Por favor Ingresa 3 numeros enteros a sumar"<<endl;
           cout<<"Ingresa Primer Numero"<<endl;
           cin>>numero1;
           cout<<"Ingresa Segundo Numero"<<endl;
           cin>>numero2;
           cout<<"Ingresa Tercer Numero"<<endl;
           cin>>numero3;
           resultado = numero1 + numero2 + numero3;
           cout<<"El resultado de tu suma es: "<<resultado;
         }
         else if(opc == '2'){
           cout<<"Bienvenido a la resta";
           cout<<"Por favor Ingresa 3 numeros enteros a restar"<<endl;
           cout<<"Ingresa Primer Numero"<<endl;
           cin>>numero1;
           cout<<"Ingresa Segundo Numero"<<endl;
           cin>>numero2;
           cout<<"Ingresa Tercer Numero"<<endl;
           cin>>numero3;
           resultado = numero1 - numero2 - numero3;
           cout<<"El resultado de tu resta es: "<<resultado;
         }
         else if(opc == '3'){
           cout<<"Bienvenido a la Multiplicacion";
           cout<<"Por favor Ingresa 3 numeros enteros a multiplicar"<<endl;
           cout<<"Ingresa Primer Numero"<<endl;
           cin>>numero1;
           cout<<"Ingresa Segundo Numero"<<endl;
           cin>>numero2;
           cout<<"Ingresa Tercer Numero"<<endl;
           cin>>numero3;
           resultado = (numero1 * numero2) * numero3;
           cout<<"El resultado de tu multiplicacion es: "<<resultado;
         }
         else{
             cout<<"No es una funcion permitida";
         }
         /* termina validacion del menu*/
    }
    /* termina la validacion de password*/
    else{
       cout<<"Lo sentimos no eres un usuario del sistema por favor verifia a soporte";
    }
    return 0;
    cin.get();
}
/* termina funcion principal*/
