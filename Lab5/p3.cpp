/*
Escriba un programa que, al recibir como datos n números enteros,
obtenga la suma de los números pares y el promedio de los impares.
*/

#include <iostream>
using namespace std;

int main(){
	int n, num, suma_p = 0, suma_i = 0, cont_i = 0;
	cout << "Cuántos enteros ingresará?: ";
	cin >> n;
	
	int i  = 0;
	
	cout << "Ingrese los " << n << " numeros: "<<endl;
	while(i < n){
		cout << "ingrese el numero " << i+1 << ": ";
		cin >> num;
		if(num % 2 == 0){
			suma_p += num;
		}else{
			suma_i += num;
			cont_i++;
		}
		i++;
	}
	
	cout << "La suma de pares es: " <<suma_p <<endl;
	cout << "El promedio de impares es: " << 1.0*suma_i/cont_i << endl;
	
	

	return 0;
}

