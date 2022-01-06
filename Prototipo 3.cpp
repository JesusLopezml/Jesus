#include<cstdlib>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<vector>
// definir las teclas o utilizar
#define ENTER 13
#define BACKESPACE 8 
using namespace std;
// declaramos las variables para las operaciones 
int num1, num2, num3, res;
// se declara la funcion principal 
int main(){
// declarar las variables para las opciones a elegir
int opc, opc1;
// declarar los vectores para los usuarios y sus contraseñas
vector<string>usuarios;
vector<string>pass;
// se definen los usuarios del el vector
usuarios.push_back("Jesus");
usuarios.push_back("Angel");
usuarios.push_back("Naty");
usuarios.push_back("Eve");
// definir los password del vector 
pass.push_back("12345");
pass.push_back("171220");
pass.push_back("2323672");
pass.push_back("822215");
// declarar las variables para el password 
string usuario, password;
// declarar las variables para el contador 
int contador = 0;
bool ingresa = false;
// declarar el ciclo del password 
do{
  system("cls");
  cout<<"\t\t\t login de usuario Jesus"<<endl;
  cout<<"\t\t\t _____________________________"<<endl;
  cout<<"\n\t Usuario: ";
  getline(cin,usuario);
  char caracter;
  cout<<"\t Password: ";
  caracter = getch();
  password = "";
     while (caracter != ENTER){
          if(caracter != BACKESPACE){
             password.push_back(caracter);
             cout<<"*";
          }
          else{
              if(password.length()>0){
                  cout<<"\b\b";
                  password = password.substr(0, password.length()-1);
              }
          }
          caracter = getch();
     }
     for(int i = 0; i< usuarios.size(); i++){
         if(usuarios[i] == usuario && pass[i] == password){
           ingresa = true;
           break;
         }
     }
     if(!ingresa){
         cout<<"\n\n El usuario y/o contraseña no son correctos."<<endl;
         cout<<"\n Tienes 3 intentos para ingresar al sistema: Total de intentos: "<<contador+1<<endl;
         cin.get();
         contador++;
     }
} 
// termina el login 
while(ingresa == false && contador < 3);
  if(ingresa == false){
      cout<<"Hatas luego se cumplieron tus intentos permitidos. Bye"<<endl;
  }
  else{
     do{
         system("cls");
         cout<<"\n";
         cout<<"\t\t\t Bienvenido al Menu de Usuario: "<<usuario<<endl;
         cout<<"\t\t\t _______________________________"<<endl;
         cout<<"\t\t\t 1.- Suma "<<endl;
         cout<<"\t\t\t 2.- Resta "<<endl;
         cout<<"\t\t\t 1.- Multiplicacion "<<endl;
         cout<<"\n";
         cout<<"\t\t\t Selecciona una opción: ";
         cin>>opc;
            switch (opc){
                case 1:
                system("cls");
                cout<<"\t\t\t Bienvenido al apartado de suma "<<endl;
                cout<<"\t\t\t ______________________________ "<<endl;
                cout<<"\t\t\t Digita los numeros enteros a suamar "<<endl;
                cout<<"\t\t\t Digita el primer Numero: "<<endl;
                cin>>num1;
                cout<<"\t\t\t Digita el segundo Numero: "<<endl;
                cin>>num2;
                cout<<"\t\t\t Digita el Tercer Numero: "<<endl;
                cin>>num3;
                res = num1+num2+num3;
                cout<<"\n";
                cout<<"\t\t\t El resultado de la suma de: "<<num1<<"+"<<num2<<"+"<<num3<<"="<<res<<endl;
                break;
                case 2:
                system("cls");
                cout<<"\t\t\t Bienvenido al apartado de Resta "<<endl;
                cout<<"\t\t\t ______________________________ "<<endl;
                cout<<"\t\t\t Digita los numeros enteros a restar "<<endl;
                cout<<"\t\t\t Digita el primer Numero: "<<endl;
                cin>>num1;
                cout<<"\t\t\t Digita el segundo Numero: "<<endl;
                cin>>num2;
                cout<<"\t\t\t Digita el Tercer Numero: "<<endl;
                cin>>num3;
                res = num1-num2-num3;
                cout<<"\n";
                cout<<"\t\t\t El resultado de la resta es: "<<num1<<"-"<<num2<<"-"<<num3<<"="<<res<<endl;
                break;
                case 3:
                system("cls");
                cout<<"\t\t\t Bienvenido al apartado de la multiplicacion "<<endl;
                cout<<"\t\t\t ______________________________ "<<endl;
                cout<<"\t\t\t Digita los numeros enteros a multiplicar "<<endl;
                cout<<"\t\t\t Digita el primer Numero: "<<endl;
                cin>>num1;
                cout<<"\t\t\t Digita el segundo Numero: "<<endl;
                cin>>num2;
                cout<<"\t\t\t Digita el Tercer Numero: "<<endl;
                cin>>num3;
                res = num1*num2*num3;
                cout<<"\n";
                cout<<"\t\t\t El resultado de la multiplicacción es: "<<num1<<"*"<<num2<<"*"<<num3<<"="<<res<<endl;
                break;
                default:
                  system("cls");
                  cout<<"\t\t\t Selecciona una opción valida";
                  break;
            }  // termina el do
            cout<<"\t\t\t ¿Deceas seguir dentro del sistema?"<<endl;
            cout<<"\t\t\t 1.- SI"<<endl;
            cout<<"\t\t\t 2.- NO"<<endl;
            cout<<"\t\t\t Selecciona una opción: "<<endl;
            cin>>opc1;
     }
     while(opc1 == 1);
  }
  cin.get();
  return 0;
}
