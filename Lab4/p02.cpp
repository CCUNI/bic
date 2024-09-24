/*
Escribir un programa que sume los 20 primeros
números pares
*/

#include <iostream>
using namespace std;

int main(){
    int n = 20;
    int i = 0; // variable contador
    int suma = 0;

    do{
        suma += 2*i; //acumular las sumas de los pares
        i++; //actualizar el contador
    }while(i < n);

    cout << "La suma de los 20 primeros pares es: " << suma <<endl;

  return 0; 
}