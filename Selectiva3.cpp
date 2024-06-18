#include <iostream>

using namespace std;


int main(){
	float cantidad,precio,precioTotal;
	cout<<"Pago total con descuento de una camisa"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"ingrese el precio de la camisa"<<endl;
	cin>>precio;
	cout<<"ingrese la cantiadad de camisas a comprar"<<endl;
	cin>>cantidad;
	if(cantidad>=3)
		{
		precioTotal = precio*cantidad - precio*cantidad*20/100;
		cout<<"El pago total con descuento 20% es de: "<<precioTotal;
		}
	else
		{
		precioTotal = precio*cantidad - precio*cantidad*10/100;
		cout<<"El pago total con descuento de 10% es de: "<<precioTotal;
		}
	
	return 0;	
	
}
