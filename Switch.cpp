#include"iostream"
using namespace std;
int main(){
	
	char vocal;
	
	cout<<"Ingresa una letra para saber si es una vocal o consonate\n";
	cin>>vocal;
	switch(vocal){
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
		cout<<"La letra digitada es:vocal \n";
		break;
		default:
		cout<<"La letra digitada es:consonante \n";
}
	
	cin.get();
	return 0;
	
}
