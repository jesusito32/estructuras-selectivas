#include <iostream>

using namespace std;


int main(){
	float pago,pagoTotal;
	cout<<"Pago total con descuento de un producto en almacen"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"ingrese el pago por la compra del producto"<<endl;
	cin>>pago;
	if(pago>1000)
		{
		pagoTotal = pago - pago*20/100;
		cout<<"El pago total con descuento es de: "<<pagoTotal;
		}
	else
		{
		cout<<"El pago total sin el descuento es de: "<<pago;
		}
	
	return 0;	
	
}
