/*
Escribir una función recursiva que permita calcular
la suma de los elementos de un arreglo.
*/


//PROMEDIO RECURSIVO
#include <iostream>
using namespace std;

int sumaElementosRecursivo(int a[], int n){
    if(n == 1){
        return a[0];
    }
    return a[n-1] + sumaElementosRecursivo(a, n-1);
}

int main(){
    int a[] = {1,2,3,4,6};
    int n = sizeof(a)/sizeof(a[0]);

    cout << sumaElementosRecursivo(a,n) <<endl;

    cout << "Promedio Recursivo: " << 1.0*sumaElementosRecursivo(a,n)/n <<endl;

    return 0; 
}