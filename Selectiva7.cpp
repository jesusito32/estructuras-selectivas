#include <iostream>

using namespace std;


int main(){
	int PagoTotal,cantidad,precio1=300,precio2=250,precio3=200;
	cout<<"Venta de llantas en promocion(Ponchadas)"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"Ingrese el numero de llantas a comprar"<<endl;
	cin>>cantidad;
	if(cantidad<5)
		{
		PagoTotal = precio1*cantidad;
		cout<<"El precio de cada llanta es: "<<precio1<<endl;
		cout<<"El total del pago es de: "<<PagoTotal;
		}
	else if(cantidad>5 && cantidad<10)
		{
		PagoTotal = precio2*cantidad;
		cout<<"El precio de cada llanta es: "<<precio2<<endl;
		cout<<"El total del pago es de: "<<PagoTotal;
		}
	else
		{
		PagoTotal = precio3*cantidad;
		cout<<"El precio de cada llanta es: "<<precio3<<endl;
		cout<<"El total del pago es de: "<<PagoTotal;		
		}
	return 0;	
	
}
