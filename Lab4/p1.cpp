/*
Escribir un programa que imprima números de 1 al 100.
Reescriba una versión para imprimir números desde 100 a 1
*/

#include <iostream>
using namespace std;

int main(){
    int n = 100;
    int i = 0;

    do{
        cout << n - i <<endl;
        i++; //i = i + 1;
    }while(i < n);

    return 0; 
}