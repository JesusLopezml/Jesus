#include"iostream"
#include"stdlib.h"
using namespace std;
int main(){
	
	char dato[10];
	int numero;
	do{
		cout<<"Escribe un numero:";
		cin>>dato;
		numero=atoi(dato);
	}while(numero==0);
	cout<<"numero"<<numero;
	return 0;
	
}
