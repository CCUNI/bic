/*Escribir un programa que al recibir como dato una cadena 
de caracteres lo escriba en forma inversa.*/

#include <iostream>
#include <cstring> //strlen(), strcpy(), strcmp()
using namespace std;

int longCadena(char c[]){
	int l = 0;
	int i = 0;
	while(c[i] != '\0'){
		l++;
		i++;
	}
	
	return l;
}

int main(){
	
	
	char c[50];  //"Hola\0"
	
	cout << "Ingrese una cadena: ";
	cin.getline(c,50); //>> c;
	

	int tam = longCadena(c); //strlen(c); 
	
	cout << "Cadena leida: " << c <<endl;
	
	for(int i = tam - 1 ; i>=0; i--){
		cout <<c[i];
	}

	return 0;
}

