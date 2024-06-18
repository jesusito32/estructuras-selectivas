#include <iostream>

using namespace std;


int main(){
    int num1,num2,num3;
    cout<<"El numero mayor de los tres"<<endl;
	cout<<"-------------------------------------"<<endl;
    cout << "Ingrese el primer numero: "<<endl;
    cin >> num1;
    cout << "Ingrese el segundo numero: "<<endl;
    cin >> num2;
    cout << "Ingrese el tercer numero: "<<endl;
    cin >> num3;
    if (num1 > num2) 
		{
        if (num1>num3) 
			{
            cout << "El numero mayor es: "<<num1;
        	} 
		else 
			{
            cout << "El numero mayor es: "<<num3;
       	 	}
		}
	else if(num2>num3)
		{
        cout << "El numero mayor es: "<<num2;
    	}
    else
    	{
    	cout << "El numero mayor es: "<<num3;		
		}
    return 0;
}
