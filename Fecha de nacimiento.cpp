#include"iostream"
using namespace std;
struct FechaNacimiento{
	int multiplicacion,dia,mes,an;
	char nombre[15];
	
};
int main(){
	FechaNacimiento hoy,festeja;
	cout<<"Digita tu nombre:"<<endl;
	cin>>hoy.nombre;
	cout<<"Ingresa la fecha de de hoy"<<endl;
	cout<<"El dia de hoy es:";
	cin>>hoy.dia;
	cout<<"El mes actual es:";
	cin>>hoy.mes;
	cout<<"El año actual es:";
	cin>>hoy.an;
	cout<<"Ingresa la fecha de tu cumpleaños"<<endl;
	cout<<"El dia es:";
	cin>>festeja.dia;
	cout<<"El mes es:";
	cin>>festeja.mes;
	cout<<"El año es:";
	cin>>festeja.an;
	cout<<"Cuanto falta para su cumpleaños"<<endl;
	
	if(festeja.dia == hoy.dia){
		if(festeja.mes== hoy.mes){
			cout<<"Felcidades es tu cumpleaños!!"<<endl;
		}else{
			cout<<"talvez hoy es el mismo diapero no el mes de tu cumpleaños"<<endl;
			cout<<"Pero tu cumpleaños llegara pronto"<<endl;
		   }
		}else{
		   	cout<<"Lo siento hoy no es tu cumpleaños"<<endl;
		   }
		   
		   return 0;
		   cin.get();
		  
		}
