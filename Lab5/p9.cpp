/*
9. Realice un programa que, al recibir como dato un entero positivo n, obtenga e imprima
la sucesi�n, que tiene la siguiente descripci�n
Inicia con cualquier entero positivo
Si el n�mero es par, dividir entre 2. Si es impar, multiplicar por 3 y sumar 1.
Repitiendo este proceso obtendremos sucesivamente n�meros enteros. Al final
obtendremos el n�mero 1.
Ejemplo, si n = 45 los t�rminos de la sucesi�n son:
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

