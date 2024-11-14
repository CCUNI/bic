/*Escribir una función que convierta una temperatura dada en grados Celsius a grados
Fahrenheit. La fórmula de conversión es: F = 9
5C + 32*/

#include <iostream>
using namespace std;

double celsius_Farenheit(double c){
    return 9.0/5*c + 32;   // c tiene doble precisión 
}

int main(){

    cout << celsius_Farenheit(37.32);

    return 0; 
}