#include<cstdlib>
#include<iostream>
#include<conio.h>
#include<string.h>
#include<vector>
#include<fstream>

#define ENTER 13
#define BACKESPACE 8
int bien=0,mal=0;
using namespace std;

int main(){
 
int opc, opc1,opc2;
string nombre ="Jesus";
float cal1,cal2,cal3,prom;

vector<string>usuarios;
vector<string>pass;

usuarios.push_back("Jesus");
 
pass.push_back("124578");

string usuario, password;

int contador = 0;
bool ingresa = false;
 

 do{
     system("cls");
     cout<<" Bienvenido a Ingenius Documents "<<endl;
     cout<<"\t\t\t _____________________________"<<endl;
     cout<<"\n\t Registrate: ";
     getline(cin,usuario);
     char caracter;
     cout<<"\t Contrase�a:";
     caracter = getch();
     password = "";
     while (caracter != ENTER){
          if(caracter != BACKESPACE){
             password.push_back(caracter);
             cout<<"*";
          }
          else{
              if(password.length()>0){
                  cout<<"\b\b";
                  password = password.substr(0, password.length()-1);
              }
          }
          caracter = getch();
     }
     for(int i = 0; i< pass.size(); i++){
     	 if(usuarios[i] == usuario && pass[i] == password){
           ingresa = true;
           break;
         }
 }

     if(!ingresa){
     	 cout<<"\n\n El usuario y/o nip no son correctos."<<endl;
         cout<<"\n Solo tiene 3 intentos para ingresar al sistema: Total de intentos: "<<contador+1<<endl;
         cin.get();
         contador++;
     }
}

while(ingresa == false && contador < 3);
  if(ingresa == false){
      cout<<"Hasta luego se cumplieron tus intentos permitidos. Bye"<<endl;
  }
 else{
 	        system("cls");
 	        cout<<"\t\t �Como quieres tu examen en;"<<endl;
            cout<<"\t\t 1.- Ingles"<<endl;
            cout<<"\t\t 2.- Espa�ol"<<endl;
            cout<<"\t\t Selecciona una opci�n: "<<endl;
            cin>>opc2;
 
     do{
         system("cls");
         cout<<"\n";
         cout<<"\t\t\t Bienvenido al cajero automatico "<<endl;
         cout<<"\t\t\t __________________________________"<<endl;
         cout<<"\t\t\t 1.-Word "<<endl;
         cout<<"\t\t\t 2.-Power point"<<endl;
         cout<<"\t\t\t 3.-Excel"<<endl;
         cout<<"\n";
         cout<<"\t\t\t Selecciona una opci�n: ";
         cin>>opc;
            switch (opc){
                case 1:
                system("cls");
				char r1,r2,r3;
				cout<<"\t\t\t Seleccionaste el tema tipo de datos:"<<endl;
			    cout<<"\t\t\t Porfavor selecciona la respuesta correcta:\n";
			    cout<<"\t\t\t �Que es Word\n";
				cout<<"\t\t\t a) Un programa informatico orientado al procesamiento de textos\n";	
				cout<<"\t\t\t b) Es un software de ofimatica para realizar presentacion de diapositivas\n";
				cout<<"\t\t\t c) Es una hoja de calculo desarrollada por micrososft para Windows\n";
				cin>>r1;
				if(r1 == 'a'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es a\n";
					mal=mal+1;
				
				}
				system("cls");
				cout<<"\t\t\t �A que nos ayuda Word\n";
				cout<<"\t\t\t a) Diapositivas,Animaciones,Transiciones\n";
				cout<<"\t\t\t b) Hojas de calculo,formulas,Graficas\n";
				cout<<"\t\t\t c) Elalobrar,leer,editar y guardar\n";
				cin>>r2;
				if(r2 == 'c'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es b\n";
					mal=mal+1;
					
				}
				
				system("cls");
			    cout<<"\t\t\t �Cuales son las funciones de Word\n";
		 		cout<<"\t\t\t a) Archivos,Inicio,Insertar,Dise�o,Animaciones,Tranciones,,Referencias,Vista\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t b) Archivos,Inicio,Insertar,Dibujar,Dise�o,Disposicion,Referencia,correspondencia,Resivar,Vista y ayuda\n";/*imprimimos en pantalla el mensaje*/
				cout<<"\t\t\t c) Incio,Insertar,Disposicion de pagina,Formulas,Datos,Revisar,Vista,Programador,Ayuda\n";/*imprimimos en pantalla el mensaje*/
				cin>>r3;
				if(r3 == 'b'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es b\n";
					mal=mal+1;
					
				}
				cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
				cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
				if(bien>=2){
					cout<<"\t\t\t Felicidades estas aprobado:\n";
				}
				else{
					cout<<"\t\t\t Lo siento sigue estudiando:";
				}
			
				break;
               
                case 2:
                system("cls");
                cout<<"\t\t\t�Que es PowerPoint\n";
				cout<<"\t\t\t a)  Es una hoja de calculo desarrollada por micrososft para Windows\n";	
				cout<<"\t\t\t b)  Es un software de ofimatica para realizar presentacion de diapositivas\n";
				cout<<"\t\t\t c)  Un programa informatico orientado al procesamiento de textos\n";
				cin>>r1;
				if(r1 == 'b'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es b\n";
					mal=mal+1;
				
				}
				system("cls");
				cout<<"\t\t\t �Como agrego una diapositiva?\n";
				cout<<"\t\t\t a) Menu archivo,Nueva diapositiva\n";
				cout<<"\t\t\t b) Insertar,Portada\n";
				cout<<"\t\t\t c) Archvo,Dise�o\n";
				cin>>r2;
				if(r2 == 'c'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es c\n";
					mal=mal+1;
					
				}
				system("cls");
				cout<<"\t\t\t �Cuales son las Funciones de Powepoint?\n";
				cout<<"\t\t\t a) Archivos,Inicio,Insertar,Dise�o,Animaciones,Tranciones,,Referencias,Vista\n";
				cout<<"\t\t\t b) Archivos,Inicio,Insertar,Dibujar,Dise�o,Disposicion,Referencia,correspondencia,Resivar,Vista y ayuda\n";
				cout<<"\t\t\t c) Incio,Insertar,Disposicion de pagina,Formulas,Datos,Revisar,Vista,Programador,Ayuda\n";
				cin>>r3;
				if(r3 == 'a'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es a\n";
					mal=mal+1;
				
				}
				cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
				cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
				if(bien>=2){
					cout<<"\t\t\t Felicidades estas aprobado:\n";
				}
				else{
					cout<<"\t\t\t Lo siento sigue estudiando:";
				}
                break;
                case 3:
                system("cls");
                cout<<"\t\t\t�Que es Excel\n";
                cout<<"\t\t\t a) Un programa informatico orientado al procesamiento de textos\n";
				cout<<"\t\t\t b) Es una hoja de calculo desarrollada por micrososft para Windows\n";
				cout<<"\t\t\t c)  Un programa informatico orientado al procesamiento de textos\n";
				cin>>r1;//almacena
				if(r1 == 'b'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es b\n";
					mal=mal+1;
			}
				system("cls");
				cout<<"\t\t\t �Como se maneja la informacion en Excel?\n";
				cout<<"\t\t\t a) Paginas de texto\n";
				cout<<"\t\t\t b) Diapositivas\n";
				cout<<"\t\t\t c) La maneja en celdas\n";
				cin>>r2;
				if(r2 == 'c'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es c\n";
					mal=mal+1;
					
				}
				system("cls");
				cout<<"\t\t\t �Porque es importante en el Formato de los documentos en Excel?\n";
				cout<<"\t\t\t a) Para darle claridad sobre el tipo de informacion que se esta manejando\n";
				cout<<"\t\t\t b) Para dar un mejor color\n";
				cout<<"\t\t\t c) Para dar un mejor margen\n";
				cin>>r3;
				if(r3 == 'a'){
					cout<<"\t\t\t Correcto muy bien sigue asi\n";
					bien=bien+1;
				}
				else{
					cout<<"\t\t\t Incorrecto la respuesta es a\n";
					mal=mal+1;
					
				}
				system("cls");
				cout<<"Tu promedio es:"<<endl;
				cout<<"Por favor ingresa la primera calificacion"<<endl;
                cin>>cal1;
                cout<<"Por favor ingresa la segunda calificacion"<<endl;
                cin>>cal2;
                cout<<"Por favor ingresa la tercera calificacion"<<endl;
                cin>>cal3;

                prom = (cal1+ cal2+ cal3) /3;

                cout<<"El promedio final es "<<prom<<endl;
                if(prom >= 7){
                cout<<"Tu calificacion es aprobatoria"<<endl;
                }
                else{
                cout<<"Tu calificacion no es aprobatoria"<<endl;
                }
				cout<<"\t\t\t Respuestas correctas:"<<bien<<endl;
				cout<<"\t\t\t Respuestas Incorrectas"<<mal<<endl;
				if(bien>=2){
					cout<<"\t\t\t Felicidades estas aprobado:\n";
				}
				else{
					cout<<"\t\t\t Lo siento sigue estudiando:\n";
				}
                  break;
        }

            
            cout<<"\t\t �Deceas seguir dentro del sistema?"<<endl;
            cout<<"\t\t 1.- SI"<<endl;
            cout<<"\t\t 2.- NO"<<endl;
            cout<<"\t\t Selecciona una opci�n: "<<endl;
            cin>>opc1;
            
            
            
            ofstream file;
            file.open("Alumno.txt");
            file<<"Tu Nombre es:"<<nombre<<endl;
            file<<"Respuetas Correctas:"<<bien<<endl;
            file<<"Respuestas Incorrectas:"<<mal<<endl;
            file<<"Promedio Final:"<<prom<<endl;
            if(bien>=2){
					file<<" Felicidades estas aprobado\n";
				}
			else{
					file<<" Lo siento sigue estudiando\n";
				}
                file.close();
        
  } 
 while(opc1 == 1);
}

  cin.get();
  return 0;
  }
