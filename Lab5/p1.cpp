/*
1. Escribir un programa que dado un número natural
n, muestre los primeros n números
impares y calcule la suma de ellos.
*/

#include <iostream>
using namespace std;

int main(){
    int n, suma = 0;
    cout << "Ingrese un entero positivo: ";
    cin >> n;

    /*
    int cont_impar = 0;
    while(cont_impar < n){
        suma = suma + 2*cont_impar + 1; //acumula la suma de impares
        cout << 2*cont_impar +1 <<endl; //muestra la lista de impares
        cont_impar++; // actualiza el contador

    }
    */

    for(int i = 0; i < n; i++){
        suma += 2*i + 1; //suma = suma + 2*i + 1;
        cout << 2*i + 1 <<endl;
    }

    cout << "La suma es: " << suma <<endl; 

    return 0; 
}