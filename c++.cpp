/* estructura basica de una rutina en C++*/
/* Primero son las Librerias*/
#include<iostream>
/* libreria estandar operaciones basicas , entradas y salidas de datos */
using namespace std;
/* usuar todas las carecteristicas o funciones , palabras reservadas de la libreria sin concatenar*/
/* funcion principal*/
int main(){
  /* declarar la variables*/
  int numero, resultado;
  /*imprimimos en pantalla el mensaje*/
  cout<<"Bienvenido a la rutina del doble de tu numero"<<endl;
  cout<<"Por favor digita el valor a duplicar";
  /* guerdamos el valor*/
  cin>>numero;
  /* realizar la operación*/
  resultado = numero*2;
  /* imprimir resultado*/
  cout<<" El resultado del doble del numero: "<<numero<< "Es: "<<resultado;
  system(Pause);
  return 0;  
}
