#include"iostream"
using namespace std;
string usuario,password,user="Jesus", pass="1234.",saludo="Hola Buenos dias";
int main(){
	
	char opc,letra;
	int tope = 2021, an, atotales, meses = 12, mes, dia = 31, dias, horas = 24, hrs, min = 60, minutos, seg = 60 , segundos;
	cout<<"bienvenido ingresa tu credenciales para seguir"<<endl;
	cout<<"ingresa tu usuraio:";
	cin>>usuario;
	cout<<"ingresa tu password:";
	cin>>password;
	if(usuario == user && password ==pass){
		cout<<"Bienvenido al sistema"<<usuario<<"\n";
		cout<<"porfavor seleciona una opcion  para interactuar conmigo\n";
		cout<<"1-Te saludara el programa\n";
		cout<<"2-Te dara tu edad,meses,hora y munutos de vida\n ";
		cout<<"3-Eligue letra y te va decir si es cocal o consonante \n";
		cin>>opc;
	}
          
	if(opc =='1'){

		cout<<saludo<<" "<<usuario<<"\n";
		
}
	
	else if(opc =='2'){
	cout<<"Hola Bienvenido porfavor Ingresa tu usuario"<<endl;
    cin>>usuario;
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

	}
	
	
	else if(opc =='3'){
		cout<<"Digita un letra a validar:";
		cin>>letra;
		
		 if(letra =='a'){
		cout<<" la letra seleccionada es"<<letra<<"Cual es una vocal\n";
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
	
	else if(letra =='u'){
		cout<<" la letra seleccionada es:"<<letra<<"Es una vocal\n";
	}
	
	else{
		cout<<" la letra seleccionada es:"<<letra<<"Es una vocal\n";
	}
	
}
	else{
		cout<<"No es una opcion valida\n";
	}
	
	
	return 0;
	cin.get();
}
