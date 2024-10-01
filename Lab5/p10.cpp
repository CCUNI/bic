/*Realice un programa que aproxime el valor de π utilizando la siguiente serie:
La diferencia entre la serie y π debe ser menor a 0,0005. Imprime el número de términos
requerido para obtener esta precisión*/
#include <iostream>
//#define _USE_MATH_DEFINES // para usar M_PI en DevC++
#include <cmath>
using namespace std;

int main(){

    double suma = 0.0;
    int cont = 1;
    while(abs(M_PI - suma) >= 0.0005){
        if(cont % 2 == 0){
            suma -= 4.0/(2*cont - 1);
        }else{
            suma += 4.0/(2*cont - 1);
        }
        cont++;
    }

    cout << cont <<endl;

    return 0; 
}