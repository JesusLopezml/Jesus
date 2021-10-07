#include"iostream"
#include"string"
#include"stdlib.h"
using namespace std;
int main(){
	string password="";
	cout<<"ingresa porfavor tu contraseña\n";
	cin>>password;
	
	if(password=="1234567"){
		cout<<"Tu posswer es correcto:"<<endl;
		
	}
	else{
		cout<<"Tu poswer es incorrecto"<<endl;
	}


	return 0;
    system("PAUSE");
}
