/*
Escribir un programa que al recibir como datos
dos variables de tipo entero, obtenga
el resultado de la siguiente función:
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int x, y;

    cout << "Ingrese el valor de x, y respectivamente:  ";
    cin >> x >> y;

    switch(y){
        case 1: cout << 1.0*x/5 <<endl;
        break;
        case 2: cout << pow(x,x) <<endl;
        break;
        case 3: case 4: cout << 6.0*x/2 <<endl;
        break;
        default: cout << 1 <<endl;
    }

    return 0; 
}