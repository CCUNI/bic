/*Escribir un programa que mediante una función recursiva calcule 
la suma de los n primeros números impares, siendo n un número positivo*/

#include <iostream>
using namespace std;

int sumaImparesRecursivo(int n){
  if (n == 1){
    return 1;
  }else{
    return 2*n - 1 + sumaImparesRecursivo(n-1);
  }
}

int main(){
    cout << sumaImparesRecursivo(3);

    return 0; 
}