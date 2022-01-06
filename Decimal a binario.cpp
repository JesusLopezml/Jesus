#include"iostream"
#include"conio.h"
using namespace std;
int main(){
	
	int z,x,numero,n2=0;
	int binario[50];
	
	binario[0]=0;
	cout<<"Bienvenido al conversor del decimal a binario\n";
	cout<<"digita el decimal a convertir\n";
	cin>>numero;
	for(x=0; x<50; x++){
		binario[x]= numero%2;
		numero=numero/2;
		if(numero==0)
		break;
	}
	for(z=x; z>0; z--){
		cout<<binario[z];
	}
	cin.get();
	return 0;
}
