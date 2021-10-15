#include"iostream"
using namespace std;
int main(){
	
	int dia;
	
	cout<<"Ingresa un numero del 1 al 7 para determinar del dia de la semana\n";
	cin>> dia;
	switch(dia){//evaluo la variable
	case 1://evaualr el caso
	cout<<"El numero 1 pertenece al dia domingo"<<endl;
	break;
	case 2://evaualr el caso
	cout<<"El numero 2 pertenece al dia Lune"<<endl;
	break;
	case 3://evaualr el caso
	cout<<"El numero 3 pertenece al dia Martes"<<endl;
	break;
	case 4://evaualr el caso
	cout<<"El numero 4 pertenece al dia Miercoles"<<endl;
	break;
	case 5://evaualr el caso
	cout<<"El numero 5 pertenece al dia Jueves"<<endl;
	break;
	case 6://evaualr el caso
	cout<<"El numero 6 pertenece al dia Viernes"<<endl;
	break;
	case 7://evaualr el caso
	cout<<"El numero 7 pertenece al dia Sabado"<<endl;
	break;
	default:
	cout<<"Opcion no valida saldremos del sistema\n";
		

}
return 0;
cin.get();	
}
