/*Dado un arreglo, escribir un programa que permita determinar
el mayor y menor elemento del arreglo*/
#include <iostream>
using namespace std;

int main(){

    int a[] = {4,7,9,8,1,2,4,0,-3,2,5};


    int  n = sizeof(a)/sizeof(int);

    //menor elemento
    int menor = a[0];
    int mayor = a[0];
    for(int i = 1; i < n; ++i){
        if(a[i] < menor){
            menor = a[i];
        }

        if(a[i] > mayor){
            mayor = a[i];
        }

    }

    
  

    cout << "El menor elemento es: " << menor <<endl;
    cout << "El mayor elemento es: " << mayor <<endl;
    return 0; 
}