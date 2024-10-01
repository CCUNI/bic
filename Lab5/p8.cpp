/*Realice un programa que imprima números reales y su raíz cuadrada. Icicialice la
variable con 16, en cada iteración decremente su valor en 2.5, terminar cuando la
variable es menor que 1*/

#include <iostream>
#include <cmath> //sqrt()
using namespace std;

int main(){

    for(float r = 16; r >= 1; r -= 2.5){
        cout << "La raiz de " << r << " es " << sqrt(r) <<endl; 
    }

    return 0; 
}