/*
Escribir un programa que coloque un 1 en las diagonales de una matriz cuadrada. El
resto se debe completar con 0. Ejemplo
*/
#include<iostream>
using namespace std;

int main(){
	
	const int N = 10;
	
	int a[N][N]= {0};
	
	
	
	for (int i = 0; i < N; i++){
		for (int j = 0 ; j < N; j++){
			if(i == j || i + j == N -1)
				a[i][j] = 1;
		}
		cout << endl;
	}
	
	cout << "La matriz generada es:\n";
	for (int i = 0; i < N; i++){
		for (int j = 0 ; j < N; j++){
			cout  <<a[i][j]  << " ";
		}
		cout << endl;
	}
	
	
	
}
