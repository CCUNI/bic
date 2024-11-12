/*Escribe una función que tome como argumento un arreglo
y calcule la suma de todos sus elementos. 
*/

#include <iostream>
using namespace std;

const int tam = 5;

int sumarElementos(int z[], int tam, int &suma){
    for(int i = 0; i < tam; i++){
        suma += z[i];//suma = suma + z[i];
    }
    return suma;
}






int main(){
    int a[] = {1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);

    int suma = 0;

    

    cout << "La suma de sus elementos es: " << sumarElementos(a,n,suma);

    return 0; 
}