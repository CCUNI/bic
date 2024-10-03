/*
9. Realice un programa que, al recibir como dato un entero positivo n, obtenga e imprima
la sucesión, que tiene la siguiente descripción
Inicia con cualquier entero positivo
Si el número es par, dividir entre 2. Si es impar, multiplicar por 3 y sumar 1.
Repitiendo este proceso obtendremos sucesivamente números enteros. Al final
obtendremos el número 1.
Ejemplo, si n = 45 los términos de la sucesión son:
45, 136, 68, 34, 17, 52, 26, 13, 40, 20, 10, 5, 16, 8, 4, 2, 1.
*/
#include <iostream>
using namespace std;

int main(){
	
	int n;
	
	cout << "Ingrese un entero positivo: ";
	cin >> n;
	
	while (n > 1){
		if(n%2 == 0){
			n /= 2;
			cout << n <<" ";
		}else{
			n = 3*n + 1;
			cout << n << " ";
		}
	}
	
	
	

	return 0;
}

