/*
Escribir un programa que imprima n�meros de 1 al 100. Reescriba una versi�n para
imprimir n�meros desde 100 a 1.
*/
#include <iostream>
using namespace std;

int main(){
	int n = 100;
	
	int i = 0;
	
	
	do{
		cout << n - i <<endl;
		i++; //i = i + 1;
		
	}while(i < n);

	return 0;
}

