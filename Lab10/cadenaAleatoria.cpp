/*Escribir un programa que genere 20 caracteres (letras)
 de forma aleatoria y cuente el número de ocurrencias
 de cada carácter generado.*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
	srand(time(0));
	
	int rep[26] ={0};
	
	for(int i = 0; i < 20; i++){
		char c = 'A' + rand() % 26; //gnera entero aleatorio entre 0 y 25
		cout << c;
		
		rep[c - 'A']++; 
	}
	
	//contando las ocurrencias
	for(int i = 0;  i < 26; i++){
		if(rep[i] > 0){
			cout << (char)('A' + i) << " se repite " << rep[i] << " veces" <<endl;
		}	
	}

	return 0;
}

