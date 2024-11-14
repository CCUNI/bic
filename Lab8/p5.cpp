/*Un número entero n se dice que es perfecto si la suma de sus divisores incluyendo 1 y
excluyéndose él coincide consigo mismo. Escribir una función que decida si un número
es perfecto. Por ejemplo 6 es un número perfecto 1 + 2 + 3 = 6.*/

#include <iostream>
using namespace std;

//Prototipos 
bool divide(int, int);
bool esPerfecto(int);



int main(){

    if(esPerfecto(28)){
        cout << "El numero es perfecto";
    }else{
        cout << "El numero no es perfecto";
    }

    return 0; 
}


bool divide(int x, int y){
    if((x % y == 0 && y != 0) ||(y % x == 0 && x != 0)){
        return true;
    }else{
        return false;
    } 
}

bool esPerfecto(int n){
    int sumaDivisores = 0;
    for(int i = 1; i < n; i++){ //identificando los divisores menores a n

        if(divide(n,i)){//equivalente n % i == 0
            sumaDivisores += i; //sumaDivisores = sumaDivisores + i;
        }

    }
    if(n == sumaDivisores){
        return true;
    }else{
        return false;
    }

}

