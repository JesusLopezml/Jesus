#include"iostream"
#include"cstdlib"
#include"cctype"
#include"string"
using namespace std;
bool Entero(string);
int main(){
	
	string datos;
	int numero;
	bool repetir=true;
	do{
		cout<<"Ingresa un valor entero:";
		getline(cin,datos);
		if(Entero(datos)){
			repetir= false;	
		}
		else{
			cout<<"No has ingresado un valor entero"<<endl;
		}
	}while(repetir);
	numero=atoi(datos.c_str());
	cout<<"El valor que ingresaste fue:"<<numero<<endl;
	cin.get();
	return 0;
}
bool Entero(string datos){
	bool Entero=true;
	int longitud =datos.size();
	if(longitud==0){
		Entero=false;
	}
		else if(longitud == 1 && !isdigit(datos[0])){
			Entero=false;
		}
		else{
		int indice= 0;
		if(datos[0]=='+'|| datos[0]=='-'){
			indice=1;
		}
		
	else{
			indice=0;
		}

	while(indice < longitud){
		if(!isdigit(datos[indice])){
		   Entero=false;
		   break;
		}
		
		indice ++;
	  }
	}
    return Entero;
}
