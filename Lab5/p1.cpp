/*
Escribir un programa que dado un número natural n, muestre los primeros n números
impares y calcule la suma de ellos.
*/

#include <iostream>
using namespace std;

int main(){
	//Datos
	int n, suma = 0;
	cout << "Ingrese un entero: ";
	cin >> n;
	
	/*
	int i = 0;
	//Procesamiento, resutaldo
	while(i < n){
		suma += 2*i + 1; // suma + 2*i + 1;
		cout << 2*i + 1 << endl;
		i++; //i = i +1;
	}
	*/
	
	for(int i = 0; i < n ;i++){
		suma += 2*i + 1; // suma + 2*i + 1;
		cout << 2*i + 1 << endl;
	}
	

	cout << "La suma es: " << suma << endl;
	
	



	return 0;
}

