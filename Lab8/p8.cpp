/*scribir una función que decida si un número
 entero positivo es primo*/

#include <iostream>
using namespace std;

//Numero primo: solo tiene como divisor al 1 y al mismo numero (SE excluye el 1)
//Ejemplo 2, 3, 5, .....

bool esPrimo(int n){
    if(n <= 1){
        return false;
    }

    for(int i = 2; i < n; i++){//buscando divisores distintos a 1 y al mismo numero
        if(n % i == 0){
            return false;
        }
    }

    return true;

}

int main(){

    return 0; 
} 