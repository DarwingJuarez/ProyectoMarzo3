#include<iostream>
#include"marzo_3.hpp"
using namespace std;

int suma(int a, int b){
	return a+b;
}

int multiplicacion(int a, int b){
	return a*b;
}

int resta(int a, int b){
	if(a >= b)
	{
		return a-b;
	}
	else if(b > a)
	{
		cout<<"DEBE CONSIDERAR QUE SIEMPRE SE RESTARA EL MENOR AL MAYOR";
		cout<<"\nPOR LO TANTO EL RESULTADO SIEMPRE SERA POSITIVO\n";
		cout<<"\n";
		return b-a;
	}
}

char divid(float a, float b); 
int division(int a, int b)
{	
	if(a > b){
		if(b == 0){
			cout<<"!ERROR NO SE PUEDE DIVIDIER ENTRE 0!";
		}
	}
	
		int residuo = a % b;
		if(residuo > 0){
			cout<<"!ALERTA! El resultado contiene decimales\n";
			cout<<"Los cuales no mostrara el programa"<<endl;
			cout<<endl;
			return a/b;
		}
		return a/b;
}


