#include<iostream>
#include<fstream>
using namespace std;
string nombre, apellido1, apellido2;
int main(){
cout<<"\t\t\t Ingresa tu Nombre:";
getline(cin,nombre);
cout<<"\t\t\t Ingresa tu Apellido Paterno:";
getline(cin,apellido1);
cout<<"\t\t\t Ingresa tu Apellido Materno:";
getline(cin,apellido2);
cout<<"\t\t\t Gracias por registarte dentro del programa se esta creando un archivo de texto";
ofstream file;
file.open("archivo.txt");
file<<"Tu Nombre es:"<<nombre<<endl;
file<<"Tu Apellido Paterno es:"<<apellido1<<endl;
file<<"Tu Apellido materno es:"<<apellido2<<endl;
file.close();
return 0;
}
