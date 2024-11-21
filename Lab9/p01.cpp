#include <iostream>
using namespace std;

int sumaRecursiva(int n){
    //Identificar el caso BASE
    if(n <= 1)
        return 1;

    //Identificar el caso RECURSIVO
    return n + sumaRecursiva(n-1);
}


int main(){

    int resultado = sumaRecursiva(4);
    cout << resultado;

    return 0; 
}