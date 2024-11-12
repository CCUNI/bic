/*Un número entero n se dice que es perfecto si la suma de sus divisores incluyendo 1 y
excluyéndose él coincide consigo mismo. Escribir una función que decida si un número
es perfecto. Por ejemplo 6 es un número perfecto 1 + 2 + 3 = 6*/

#include <iostream>
using namespace std;

bool esPerfecto(int n){
    int sumaDivisores = 0; //variable para acumular la suma de divisores
    for(int i = 1; i < n; i++){ //buscamos los divisores
        if(n % i == 0){
            sumaDivisores += i; //sumaDivisores = sumaDivisores + i;
        }
    }

    //verificando la condicion
    if(n == sumaDivisores){
        return true;
    }else{
        return false;
    }
}

int main(){

    if(esPerfecto(7)){
        cout << "Es perfecto ";
    }else{
        cout << "No es perfecto";
    }

    return 0; 
}