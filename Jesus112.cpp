#define suma(a,b)a+b
#define resta(a,b)a-b
#define divicion(a,b)a*b
#define multiplicacion(a,b)a/b
/* libreria estandar operaciones basicas , entradas y salidas de datos */
#include<iostream>
/* usuar todas las carecteristicas o funciones , palabras reservadas de la libreria sin concatenar*/
int sum,rest,multi,div;
/* declarar la variables*/
using namespace std;
/* funcion principal*/
int main(){
	
	/* declarar la variables*/
	int numero1,numero2;
	 /*imprimimos en pantalla el mensaje*/
	cout<<"ingresa dos numeros enteros para realizar una suma,resta,multiplicacion y division"<<endl;
	 /*imprimimos en pantalla el mensaje*/
	cout<<"ingresa el primer numero"<<endl;
	/* guardamos el valor*/
	cin>>numero1;
	/*imprimimos en pantalla el mensaje*/
	cout<<"ingresa el segundo numero"<<endl;
	/* guardamos el valor*/
	cin>>numero2;
	sum=(numero1+numero2);	
	rest=(numero1-numero2);
	multi=(numero1*numero2);
	div=(numero1/numero2);
	/*imprimimos en pantalla el mensaje*/
	cout<<"el resultado de la suma es:"<<sum<<endl;
	/*imprimimos en pantalla el mensaje*/
	cout<<"el resultado de la resta es:"<<rest<<endl;
	/*imprimimos en pantalla el mensaje*/
	cout<<"el resulatod de la multiplicacion es:"<<multi<<endl;
	/*imprimimos en pantalla el mensaje*/
	cout<<"el resultado de la divicion es:"<<div<<endl;
	
	/*para que no se mande error*/
	return 0;
	/*almacena el caracter leido en las variable*/
	cin.get();
}
