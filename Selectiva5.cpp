#include <iostream>

using namespace std;


int main(){
	float NumPulsaciones,edad;
	bool genero;
	cout<<"Numero de pulsaciones por ejercicio aerobico por 10 segundos"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"ingrese el genero de la persona(masculino=1,femenino=0)"<<endl;
	cin>>genero;
	cout<<"ingrese la edad de la persona"<<endl;
	cin>>edad;
	if(genero==0)
		{
		NumPulsaciones = (210 - edad)/10;
		cout<<"El numero de pulsaciones de la mujer es de: "<<NumPulsaciones;
		}
	else if(genero==1)
		{
		NumPulsaciones = (220 - edad)/10;
		cout<<"El numero de pulsaciones del hombre es de: "<<NumPulsaciones;
		}
	
	return 0;	
	
}
