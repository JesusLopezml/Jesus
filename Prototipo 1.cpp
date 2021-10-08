#include<iostream>
#include<stdio.h>
using namespace std;
string username,pass,user="Jesus",passw="2005";
char menu,opc1,opc2,opc3,opc4,opc5;
int main (){
	
	int a,b,c,d,resp;
	cout<<"Bienvenido a nuestro aplicativo porfavor identificate\n";
	cout<<"Ingresa tu usuario:";
	cin>>username;
	cout<<"Ingresa tu password:";
	cin>>pass;
	
	if(username==user && pass==passw){
		
		do{
			
		cout<<"Porfavor selecciona alguna opcion del menu"<<username<<"\n";
		cout<<"a)Programa de sumas\n";
		cout<<"b)Programa de resta\n";
		cout<<"c)Estudia las tablas de multiplicar\n";
		cout<<"d)Vocal o consonatente";
		cin>>menu;
		
		if(menu== 'a'){
			do{
				cout<<"Bienvenido al programa de sumas:\n";
				cout<<"Ingresa el primer numero a sumar:";
				cin>>a;
				cout<<"Ingresa el segundo numero a sumar:";
				cin>>b;
				cout<<"Ingresa el tercero numero a sumar:";
				cin>>c;
				cout<<"Ingresa el cuarto numero a sumar:";
				cin>>d;
				resp=a+b+c+d;
				cout<<"La respuesta de la suma de:\n"<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"="<<resp;
				cout<<"¿Quieres sumar de nuevo(s/n)?\n";
				cin>>opc2;
		
			}while(opc2 !='n');
		
	}
		else if(menu == 'b'){
			do{
				cout<<"Bienvenido al programa de las restaaaaaaaaaaaaaaa:\n";
				cout<<"Ingresa el primer numero a restar:";
				cin>>a;
				cout<<"Ingresa el segundo numero a restar:";
				cin>>b;
				cout<<"Ingresa el tercero numero a restar:";
				cin>>c;
				cout<<"Ingresa el cuarto numero a restarr:";
				cin>>d;
				resp=a+b+c+d;
				cout<<"La respuesta de la suma de:\n"<<a<<"-"<<b<<"-"<<c<<"-"<<d<<"="<<resp;
				cout<<"¿Quieres restar de nuevo(s/n)?\n";
				cin>>opc3;
				
			}while(opc3 !='n');
			
		}
		
		else if(menu == 'c'){
			int multiplica,numero,i;
			do{
				cout<<"Bienvenido a las tablas de multiplicar\n";
				cout<<"Por davor ingresa el numero de la tbala a generar:";
				cin>>numero;
				for(int i=1; i<=10; i++){
			    multiplica =i* numero;
			    cout<<numero<<"x"<<i<<"="<<multiplica<<endl;    
		}	
		        cout<<"¿quieres generrar otra tabla multiplica (s/n)?\n";
		        fflush(stdin);
		         cin>>opc4;
		
			}while(opc4!= 'n');
				
		}
		
		else if(menu == 'd'){
			
		}
		
		else{
			cout<<"Opcion Invalidad ¿Quieres regresar al menu(s/n)\n";
			cin>>opc1;
		}
	
}while(opc1 != 's');

}
	else{
		cout<<"Usuario no identificado porfavor contacta a soporte"<<endl;
	}
	

    return 0;
	cin.get();	
}
