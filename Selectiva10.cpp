#include <iostream>

using namespace std;


int main(){
    int ano_bisiesto;
    cout<<"Saber si el an/o es bisiesto o no"<<endl;
	cout<<"-------------------------------------"<<endl;
    cout << "Ingrese un an/o: ";
    cin >> ano_bisiesto;
    if (ano_bisiesto % 4 == 0) 
		{
        if (ano_bisiesto % 100 != 0 || ano_bisiesto % 400 == 0) 
			{
            cout << "El an/o es bisiesto." << endl;
        	} 
		else 
			{
            cout << "El an/o no es bisiesto." << endl;
        	}
   	 	} 
	else 
		{
        cout << "El an/o no es bisiesto." << endl;
    	}

    return 0;
}
