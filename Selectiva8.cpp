#include <iostream>

using namespace std;


int main(){
	string respuesta;
	cout<<"Juego de preguntas(si/no)"<<endl;
	cout<<"-------------------------------------"<<endl;
	cout<<"¿Colon descubrio America?"<<endl;
	cin>>respuesta;
	if(respuesta!="si")
		{
		cout<<"La respuesta es incorrecta.Juego terminado.";
		}
	else 
		cout<<"La respuesta correcta.Siguiente pregunta:¿El lago Titicaca es el lago navegable mas alto del mundo?"<<endl;
		cin>>respuesta;
		if(respuesta!="no")
			{
			cout<<"La respuesta es incorrecta.Juego terminado.";
			}
		else
			{
			cout<<"La respuesta correcta .Ultima pregunta: ¿El español es el unico idioma oficial de Peru?"<<endl;
			cin>>respuesta;
			if(respuesta!="no")
				{
				cout<<"La respuesta es incorrecta.Juego terminado.";
				}
			else
				{
				cout<<"Felicidades, usted ha ganado el juego de preguntas.!!!¿¿¿";
				}
			}
				
	return 0;	
	
}
