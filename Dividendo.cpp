#include"iostream"
using namespace std;
void division(int dividendo,int divisor);
int main(){
	
	int dividendo,divisor;
	cout<<"\t\t\t Ingresar por el favort el dividendo:";cin>>dividendo;
	cout<<"\t\t\t Ingresa el Divisor";cin>>divisor;
	division(dividendo,divisor);
	return 0;
}
void divison(int dividendo,int divisor){
	int cociente;
	while(dividendo>=divisor){
	dividendo-=divisor;
	cociente ++;	
	}
	cout<<"El resultado es:"<<dividendo<<endl;
	cout<<"El cociente es:"<<cociente<<endl;
}
