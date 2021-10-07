#include"iostream"
using namespace std;
int main(){
	
	char opc[10];
	int i,numero,numero1;

		cout<<"Ingresa el numero de la tabla a presentar\n";
		cin>>numero;
		
		do{
		
		for(i= 1; i<=10; i++){
			cout<<numero<<"*"<<i<<"="<<numero*i<<endl;
		
		}
		cout<<"quieres realizar una nueva tabla?"<<endl;
		cout<<"si\n";
		cout<<"no\n";
		cin>>opc;
		
		}while(i<=10);
		
		
		cout<<"Porfavor ingresa el segundo  numero de la tabla a presentar\n";
		cin>>numero1;
		
		do{
		
		for(i=1; i<=10; i++){
			cout<<numero1<<"*"<<i<<"="<<numero1*i<<endl;
		}
		
		}while(i<=10);
		
		
	return 0;
	cin.get();
}
