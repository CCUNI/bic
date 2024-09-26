/*
Escribir un programa que lea 10 números enteros y calcule la suma 
y el promedio de ellos.

*/

#include <iostream>
using namespace std;

int main(){
	int n, i=0;
	double suma = 0.0;
	
	cout << "Ingrese 10 numeros:\n ";
	
	do{
		cout << "ingrese numero: ";
		cin >>n;
		suma +=n;
		i++;
		
	}while(i < 10);
	
	cout << "La suma es: " <<suma <<endl;
	
	//ATENCION con el promedio
	cout << "El promedio es: " << suma/10 <<endl; // int1 /int2 resultado COCIENTE  ENTERO
	
	
	
	return 0;
}

