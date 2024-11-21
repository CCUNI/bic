/*Escribir una función recursiva que permita calcular el promedio 
aritmético de n números*/

#include <iostream>
using namespace std;

float promedioRecursivo(int a[], int n){
    if( n== 1){//Caso Base
        return a[0];
    }else{    //Caso Recursivo
        return a[n-1] + promedioRecursivo(a, n-1);
    }
}

int main(){
    int  a[] = {1,2,3,4,5,7};
    int n = sizeof(a)/sizeof(a[0]);
    cout << "El promedio es:  " << promedioRecursivo(a, n)/n <<endl;

    return 0; 
}