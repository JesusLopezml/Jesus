#include"iostream"
using namespace std;
void division(int dividiendo,int divisor);
int main(){
	
	int dividiendo,divisor;
	cout<<"\t\t\t Ingresar por el favort el dividendo:";cin>>dividiendo;
	cout<<"\t\t\t Ingresa el Divisor";cin>>divisor;
	division(dividiendo,divisor);
	return 0;
}
void divison(int dividiendo,int divisor){
	int cociente;
	while(dividiendo>=divisor){
	dividiendo-=divisor;
	cociente ++;	
	}
	cout<<"El resultado es:"<<dividiendo<<endl;
	cout<<"El cociente es:"<<cociente<<endl;
}
