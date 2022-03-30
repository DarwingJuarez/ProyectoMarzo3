#include <iostream>
#include <conio.h>
#include "marzo_3.hpp"

using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num1, num2, resultado;
	char simbolo;
	
	cout<<"Ingrese el primer valor: "; 
	cin>>num1; cout<<"\n";
	cout<<"Ingrese el simbolo de la ecuacion que desea realizar(+,-,*,/): ";
	cin>>simbolo; cout<<"\n";
	cout<<"Ingrese el segundo valor: ";
	cin>>num2; cout<<"\n";
	
	switch(simbolo){
		case '+': 
			cout<<"SUMA:\n";
			resultado = suma(num1, num2);
			cout<<"El resultado de la suma es: "<<resultado; 
		break;
		
		case '-': 
			cout<<"RESTA:\n";
			resultado = resta(num1, num2);
			cout<<"El resultado de la resta es: "<<resultado<<"\n"; 
		break;
		
		case '*': 
			cout<<"MULTIPLICACION:\n";
			resultado = multiplicacion(num1, num2);
			cout<<"El resultado de la multiplicacion es: "<<resultado; 
		break;
		
		case '/': 
			cout<<"DIVISION:\n";
			resultado = division(num1, num2);
			cout<<"El resultado de la division es: "<<resultado; 
		break;
		
		default: 
		cout<<"El signo no coincide con ninguno (+,-,/,*) Vuleva a intentarlo";
	}

	
	getch();
	return 0;
}

