#include"stdio.h"
#include"windows.h"
#include"iostream"
using namespace std;
int main(){
	
	int segundos=10;

	for(int i=0; i<=21; i++)
	cout<<"\n";
	cout<<"\t\t\t\tcargando....\n";
	for(int i= 0; i<=90; i++)
	cout<<"";
	for(int i= 0; i<=100; i++){
		cout<<char(219);
		Sleep(segundos*1000/80);
	}
	
	cout<<"completado";
	return 0;
}
