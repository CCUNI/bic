/*
La sucesi�n de Fibonacci, es una secuencia de n�meros en la cual cada t�rmino es la
suma de los dos t�rminos precedentes. La sucesi�n inicia con 0 y 1, utilizando la regla
descrita, algunos de sus valores son:
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, . . .
Realizar un programa que muestre los primeros n t�rminos de la sucesi�n de Fibonacci
y la suma de ellos.
*/

#include <iostream>
using namespace std;

int main(){
	long long int a = 0, b = 1;
	
	int n;
	cout << "ingrese la cantidad de t�rminos que desea mostrar: ";
	cin>>n;
	
	cout << a << " " << b <<" ";
	
	int i =3;
	do{
		long long int temp = b;
		b = a+b;
		a = temp;
		cout << b << " ";
		i++;

		
	}while(i <= n);

	return 0;
}

