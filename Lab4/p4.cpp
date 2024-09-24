/*
 Escriba un programa que pida al usuario 3 números y muestre la suma
  de ellos
*/

#include <iostream>
using namespace std;

int main(){
    double r;
    int i = 1;
    double suma = 0.; 

    double promedio;
    do{
        cout << "Ingrese un numero: ";
        cin >> r;
        suma += r;
        i++;
    }while(i <= 3);

    promedio = suma/3;

    cout << "La suma es: " << suma <<endl;

    cout << "El promedio es: " << promedio <<endl;
    return 0; 
}