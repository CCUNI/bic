/*Escribir una función recursiva que permita calcular la suma
de los elementos de un arreglo.*/

#include <iostream>
using namespace std;

//Implementación Recursiva
int sumaElementosRecursivo(int a[], int n){
    if( n== 0){//Caso Base
        return 0;
    }else{    //Caso Recursivo
        return a[n-1] + sumaElementosRecursivo(a, n-1);
    }
}

//Implementación Iterativa
int sumaElementos(int a[], int n){
    int suma = 0;
    for(int i = 0; i < n; i++){
        suma += a[i];
    }
    return suma;

}

int main(){

    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a)/sizeof(a[0]);

    //Llamar a la función
    cout << sumaElementosRecursivo(a,n);


    return 0; 
}