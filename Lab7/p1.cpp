/*
Escribir un programa que, al recibir como dato un arreglo bidimensional cuadrado de
tipo entero y dimensión 10, imprima la diagonal de dicho arreglo y a continuación
ordene los elementos de dicha diagonal en forma ascendente.
*/

//TAREAS:
//1. Declarar una matriz cuadrada de dimensión 10

//2. Inicializar sus elemetos con numeros aleatorios entre 1 y 12

//3. mostrar la matriz

//4. imprimir los elementos de la diagonal principal

//5. Ordenar los elementos de la diagonal principal en forma creciente
#include<iostream>
#include<iomanip> //setw() para dar formato a la salida
#include <cstdlib> //rand(), srand()
using namespace std;

int main(){
	//1. Declarar una matriz cuadrada de dimensión 10
	int m[10][10];
	
	//2. Inicializar sus elemetos con numeros aleatorios entre 1 y 12
	for (int i = 0; i < 10; i++){
		for (int j = 0 ; j < 10; j++){
			m[i][j] = rand() % 12 + 1;
		}
	}
	
	//3. Mostrar la matriz
	cout << "La matriz generada es:\n";
	for (int i = 0; i < 10; i++){
		for (int j = 0 ; j < 10; j++){
			cout <<setw(4) <<m[i][j]  << " ";
		}
		cout << endl;
	}
	
	//4. imprimir los elementos de la diagonal principal
	cout << "\nLos elementos de la diagonal principal son:\n";
	for(int i = 0; i < 10; i++){
		cout << m[i][i] << " ";
	}
	//5. Ordenar los elementos de la diagonal principal en forma creciente
	
	for(int i = 0; i < 10 - 1; i++){
		for(int j = 0; j < 9 - i; j++){
			if(m[j][j] > m[j+1][j+1] ){
				int temp = m[j][j];
				m[j][j] = m[j+1][j+1];
				m[j+1][j+1] = temp;
			}
		}		
	}
	
	//6. Imprimir la diagonal ordenada
	cout << "\nElementos de la diagonal principal ordenada:\n";
	for(int i = 0; i < 10; i++){
		cout << m[i][i] << " ";
	}
	
	//TAREA: ORDENAR LA MATRIZ ORIGINAL
	
	
	return 0;
	
}

