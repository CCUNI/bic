/*
Escribir un programa que genere e imprima los números pares que se encuentran entre
0 y un número natural n > 0 dado por el usuario.
*/

#include <iostream>
using namespace std;

int main(){
	int n, i= 0;
	
	
	//Validar n>0
	do{
		cout << "Ingrese un numero: ";
		cin >>n;
		if(n<=0){
			cout<< "El numero debe ser mayor que cero: ";
			cin>>n;
		}
		
	}while(n <= 0);
	
	cout << "\nLos numeros pares entre: " << 0 << " y " << n << " son:\n ";
	do{
		cout << i << " ";	
		i+=2; //i=i+2;
	}while(i <= n);
	
	

	return 0;
}

