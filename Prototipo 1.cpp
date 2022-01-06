#include<iostream>
#include<stdio.h>
using namespace std;
string username,pass,user="Jesus",passw="2005";
char menu,letra,opc1,opc2,opc3,opc4,opc5,opc6,opc7;
int main (){
	
	int a,b,c,d,e,f,resp;
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
		cout<<"d)Vocal o consonatente\n";
		cout<<"e)Programa de division\n";
		cout<<"f)Edad,mes,dias,hrs,minutos,segundos";
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
				cout<<"La respuesta de la suma de:\n"<<a<<"+"<<b<<"+"<<c<<"+"<<d<<"="<<resp<<"\n";
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
				cout<<"La respuesta de la suma de:\n"<<a<<"-"<<b<<"-"<<c<<"-"<<d<<"="<<resp<<"\n";
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
		cout<<"Digita un letra a validar:";
		cin>>letra;
			
			do{
		if(letra =='a'){
		cout<<" la letra seleccionada es"<<letra<<"Es una vocal\n";
	}
	    else if(letra =='e'){
	 	cout<<" la letra seleccionada es:"<<letra<<"Es una vocal\n";
	}
	    else if(letra =='i'){
		cout<<" la letra seleccionada es:"<<letra<<"Es una vocal\n";
	}
	    else if(letra =='0'){
		cout<<" la letra seleccionada es:"<<letra<<"Es una vocal\n";
	}
		}while(opc5 =='n');
	}
	
	    else if(menu =='e'){
	    	 do{
	    	cout<<"Ingresa el primer numero a dividir:";
			cin>>a;
			cout<<"Ingresa el segundo numero a dividir:";
			cin>>b;
			resp=a/b;
			cout<<"La respuesta de la divicion es:\n"<<a<<"/"<<b<<"="<<resp;
			cout<<"¿Quieres dividir de nuevo(s/n)?\n";
			cin>>opc6;
	    	 	
			 }while(opc6 =='n');
	    	
		}
		else if(menu =='f'){
		  int tope = 2021, an, atotales, meses = 12, mes, dia = 31, dias, horas = 24, hrs, min = 60, minutos, seg = 60 , segundos;
		  
		  do{
            cout<<"Ingresa tu año de nacimineto porfavor"<<endl;
            cout<<"Para poder indicarte tus años, meses, dias, horas, minutos y segundos de vida"<<endl;
            cin>>an;
            atotales = tope - an;
            mes = an * meses;
            dias = mes * dia;
            hrs = dias * horas;
            minutos = hrs * min;
            segundos = minutos * seg;	
	        cout<<" Tu edad actual es de: "<<atotales<< " Años"<<endl;
            cout<<" Los meses equivalentes a tus "<<atotales<<" años son: "<<mes<< " meses "<<endl;
            cout<<" Los dias equivalentes a tus "<<mes<<" meses son: "<<dias<< " dias "<<endl;
            cout<<" Las horas equivalentes a tus "<<dias<<" dias son: "<<hrs<< " horas "<<endl;
            cout<<" Los minutos equivalentes a tus "<<hrs<<" horas son: "<<minutos<< " Minutos "<<endl;
            cout<<" Los segundo equivalentes a tus "<<minutos<<" horas son: "<<segundos<< " segundos "<<endl;
            cout<<"¿Quieres salirte(s/n)?";
            cin>>opc7;
		  	
		  }while(opc7 =='n');
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
