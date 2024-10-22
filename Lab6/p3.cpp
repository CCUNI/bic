/*Escribir un programa que almacene en un arreglo los primeros 50 números
de Fibonacci y los muestre por pantalla en orden inverso */
#include <iostream>
using namespace std;

int main(){

    long long int fibonacci[50];
    fibonacci[0] = 0;
    fibonacci[1] = 1;

    for(int i = 2; i < 50; i++){
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }

     for(int i = 0; i < 50; i++){
        cout << fibonacci[49 - i] <<endl;
    }



    return 0; 
}