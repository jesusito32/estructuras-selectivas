#include <iostream>

using namespace std;


int main(){
	float PagoTotal,edad,pension,IGV;
	int nota;
	cout<<"Cobro a estudiantes a traves de sus promedios."<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"Ingrese la nota del alumno"<<endl;
	cin>>nota;
	cout<<"ingrese la pension educativa de la escuela"<<endl;
	cin>>pension;
	IGV=pension*18/100;
	if(nota>=18)
		{
		PagoTotal = pension-pension*30/100;
		cout<<"El pago total de la pension educativa es de: "<<PagoTotal;
		}
	else if(nota<18)
		{
		PagoTotal = pension+pension*IGV;
		cout<<"El pago total de la pension educativa es de: "<<PagoTotal;
		}
	
	return 0;	
	
}
