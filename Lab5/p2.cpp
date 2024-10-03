/*
Realizar un programa que, dado un número entero positivo, 
calcule la suma de sus dígitos.
Ejemplo: 
ENTRADA: 123   123456  1
SALIDA : 6     21      1
*/

#include <iostream>
using namespace std;

int main(){
	int n, suma = 0;
	
	cout << "Ingrese un entero positivo: ";
	cin >> n;
	int N = n;
	
	/*
	while(n>0){
		suma = suma + n%10;
		n = n/10;
	}
	*/
	
	for(;n>0 ;n = n/10){
		suma = suma + n%10;
	}
	
	
	cout << "La suma de digitos de " << N << " es: " << suma <<endl;

	return 0;
}

