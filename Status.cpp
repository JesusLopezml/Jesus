#include"iostream"
using namespace std;
struct humano{
	char nombre[15];
	char apellidos[25];
	int edad;
	char genero[15];
	int telefono;
	char status[25];
};
int main(){
	humano persona[5];
	for(int i=0; i<5; i++){
		cout<<"Escriba el nombre del Humano"<<i+1<<":\n";
		cin>>persona[i].nombre;
		cout<<"Escribe los apellidos del humano"<<i+1<<":\n";
		cin>>persona[i].apellidos;
		cout<<"Digita la edad que tendra en humano"<<i+1<<":\n";
		cin>>persona[1].edad;
		cout<<"Escribe el genero que tendra el humano"<<i+1<<":\n";
		cin>>persona[i].genero;
		cout<<"Digita el numero telefonico que tendra el humano"<<i+1<<":\n";
		cin>>persona[i].telefono;
		cout<<"Digita el estatus que tendra el humano"<<i+1<":\n";
		cin>>persona[i].status;
		cout<<endl;
	}
	cout<<"El registro de los humanos son:"<<endl;
		for(int i=0; i<5; i++){
			cout<<"\t\t"<<persona[i].nombre;
			cout<<"\t\t"<<persona[i].apellidos;
			cout<<"\t\t"<<persona[i].edad;
			cout<<"\t\t"<<persona[i].genero;
			cout<<"\t\t"<<persona[i].telefono;
			cout<<"\t\t"<<persona[i].status;
		}
		return 0;
		cin.get();
}
