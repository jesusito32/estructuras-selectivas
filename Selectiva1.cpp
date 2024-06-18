#include <iostream>

using namespace std;


int main(){
	float nota1,nota2,nota3,promedioT;
	cout<<"Aprobacion del promedio de notas de un alumno en un curso"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"ingrese la primera nota"<<endl;
	cin>>nota1;
	cout<<"ingrese la segunda nota"<<endl;
	cin>>nota2;
	cout<<"ingrese la tercera nota"<<endl;
	cin>>nota3;
	promedioT=(nota1+nota2+nota3)/3; 
	if(promedioT>=7)
		{
		cout<<"El estudiantecon aprueba el curso ";
		}	
	else
		{
		cout<<"El estudiante reprueba el curso";
		}
	
	return 0;	
	
}
