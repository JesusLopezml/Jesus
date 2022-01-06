#include"iostream"
using namespace std;
string usuario="",pass="",user="Julio",password="940895";
int numero1,numero2,numero3,resultado;
int main(){
	
	int opc;
	cout<<"Bienvenido por favor ingresa tus credenciales"<<endl;
	cout<<"Porfavor ingresa tu usuario:"<<endl;
	cin>>usuario;
	cout<<"Digita tu password:"<<endl;
	cin>>pass;
	
	if(usuario==user && pass==password){
		cout<<"Bienvenido:"<<usuario<<" al sistema por favor selecciona una opcion"<<endl;
		cout<<"1.-suma"<<endl;
		cout<<"2.-resta"<<endl;
		cout<<"3.-multiplicacion"<<endl;
		cin>>opc;
	
	
	if(opc == '1')
		cout<<"Bienvendio a la suma";
		cout<<"Por favor ingresa 3 numeros enteros a sumar"<<endl;
		cout<<"ingresa primer numero"<<endl;
		cin>>numero1;
		cout<<"ingresa  segundo numero"<<endl;
		cin>>numero2;
		cout<<"ingresa e tercer numero"<<endl;
		cin>>numero3;
		resultado= numero1+numero2+numero3;
		cout<<"El resultado de tu suma es:"<<resultado;
	}
	
	else if(opc =='2'){
		cout<<" resta";
		cout<<"Por favor ingresa 3 numeros para a resta"<<endl;
		cout<<"ingresa el primer numero"<<endl;
		cin>>numero1;
		cout<<"ingresa el segundo numero"<<endl;
		cin>>numero2;
		cout<<"ingresa el tercer numero"<<endl;
		cin>>numero3;
		resultado= numero1 -numero2 -numero3;
		cout<<"El resultado de la  resta es:"<<resultado;
	}
	
	else if(opc =='3'){
		cout<<"Bienvendio a la multiplicacion";
		cout<<"Por favor ingresa 2 numeros para a multiplicar"<<endl;
		cout<<"ingresa primer numero"<<endl;
		cin>>numero1;
		cout<<"ingresa segundo numero"<<endl;
		cin>>numero2;
		cout<<"ingresa tercer numero"<<endl;
		cin>>numero3;
		resultado= (numero1*numero2)*numero3;
		cout<<"El resultado la multiplicacion:"<<resultado;
	}
	
	else{
		
		cout<<"No es una funcion permitida";	
	}
	 

	
	return 0;
	cin.get();
}
