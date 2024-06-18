#include <iostream>

using namespace std;


int main(){
    int num1,num2,num3;
    cout<<"Saber si el primer numero es multiplo de los otros dos numeros"<<endl;
	cout<<"-------------------------------------"<<endl;
    cout << "Ingrese el primer numero: "<<endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: "<<endl;
    cin >> num2;
    cout << "Ingrese el tercer numero: "<<endl;
    cin >> num3;
    if (num1 %num2==0 && num1 %num3==0) 
    	{
    	cout << "El numero "<<num1<<" es el multiplo de "<<num2<<" y "<<num3;
		}
	else 
		{
        cout << "El numero "<<num1<<" no es el multiplo de "<<num2<<" y "<<num3;
    	}

    return 0;
}
