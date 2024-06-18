#include <iostream>

using namespace std;

int main(){
    int numero,respuesta1,respuesta2,respuesta3;
    cout<<"Evaludacion de una funcion:"<<endl;
    cout<<". 	(2x	, si x > 8)"<<endl;
    cout<<"g(x)  = (x-5 , si 0 < x <= 8)"<<endl;
    cout<<".	(x^2, si x <= 0)"<<endl;
	cout<<"-------------------------------------"<<endl;
    cout << "Ingrese el un numero: "<<endl;
    cin >> numero;
    if (numero > 8) 
    	{
    	respuesta1=2*numero;
		cout << "La respuesta es: "<<respuesta1;
		}
	else if(numero>0 && numero<8)
		{
		respuesta2=numero-5;	
   		cout << "La respuesta es: "<<respuesta2;
    	}
	else
		{
		respuesta3=numero^2;
		cout << "La respuesta es: "<<respuesta3;	
		}
    return 0;
}
