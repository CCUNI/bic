
#include <iostream>
using namespace std;

int main(){
	int n, suma = 0; //n = 123
	cout << "Ingrese un numero entero: ";
	cin >> n;
	
	do{
		suma = suma + n%10; //extrae ultimo digito
		n = n/10; //elimina ultimo digito
		
	}while(n > 0);

	cout << "la suma de digitos es: " << suma <<endl;
	return 0;
}

