//Factorial Recursivo
#include <iostream>
using namespace std;

int factRecursivo(int n){
    //Identificar el caso BASE
    if(n <= 0)
        return 1;

    //Identificar el caso RECURSIVO
    return n*factRecursivo(n-1);
}


int main(){

    int resultado = factRecursivo(-5);
    cout << resultado;

    return 0; 
}