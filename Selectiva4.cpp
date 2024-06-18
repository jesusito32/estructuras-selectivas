#include <iostream>

using namespace std;


int main(){
	float number,precio,precioTotal;
	cout<<"Promocion de un supermercado"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"ingrese el numero escogido del cliente"<<endl;
	cin>>number;
	cout<<"ingrese el precio del producto"<<endl;
	cin>>precio;
	if(number>=74)
		{
		precioTotal = precio*cantidad - precio*cantidad*20/100;
		cout<<"El precio de su producto es de: "<<precioTotal;
		}
	else
		{
		precioTotal = precio*cantidad - precio*cantidad*15/100;
		cout<<"El precio de su producto es de: "<<precioTotal;
		}
	
	return 0;	
	
}
