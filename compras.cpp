/* libreria estandar operaciones basicas , entradas y salidas de datos */
#include"iostream"
/* usuar todas las carecteristicas o funciones , palabras reservadas de la libreria sin concatenar*/
using namespace std;
/* funcion principal*/
int main(){
	
	/* declarar la variables*/
	int compra,pago=0;
	
	/*imprimimos en pantalla el mensaje*/
	cout<<"Ingresa los datos de la compra¿Cuantas prendas se llevan?"<<endl;
	/*imprimimos en pantalla el mensaje*/
	cin>>compra;
	pago=compra*250;
	if(compra<=10){
		/*imprimimos en pantalla el mensaje*/
		cout<<"No se cumplio con la promocion el monton a pagar es de:"<<pago<<endl;
		
	}
	else if(compra<10){
		/*imprimimos en pantalla el mensaje*/
		cout<<"Se cumple la promocion el monton a pagar aplicando 15% es:"<<pago-(pago*0.15);
	}
	
	else if(compra<25){
		/*imprimimos en pantalla el mensaje*/
		cout<<"Se cumple la promocion el monton a pagar aplicando 25% es:"<<pago-(pago*0.25);
	}

	
	else if(compra<35){
		/*imprimimos en pantalla el mensaje*/
		cout<<"Se cumple la promocion el monton a pagar aplicando 40% es:"<<pago-(pago*0.40);
	}
	
	
	/*para que no se mande error*/
	return 0;
	/*almacena el caracter leido en las variable*/
	cin.get();
}

	
	
