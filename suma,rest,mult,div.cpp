#define sumar(a,b) a+b
#define restar(a,b) a-b
#define divicion(a,b) a/b
#define multiplicacion(a,b) a*b
#include "iostream"
using namespace std;
int sum, rest, multi, divi;
int main(){

 int numero1, numero2;
cout<<"digita el primer numero"<<endl;
cin>>numero1;
cout<<"digita el segundo numero"<<endl;
cin>>numero2;
sum=(numero1+numero2);
rest=(numero1-numero2);
multi=(numero1*numero2);
divi=(numero1/numero2);
cout<<"El resultado de la suma es:"<<sum<<endl;
cout<<"El resultado de la resta es:"<<rest<<endl;
cout<<"El resultado de la multiplicacion es:"<<multi<<endl;
cout<<"El resultado de la divicion es:"<<divi<<endl;

return 0;
cin.get();


}
