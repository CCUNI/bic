/*Escribir un programa que genere e imprima los números pares que
 se encuentran entre 0 y un número natural n > 0 dado por
  el usuario*/

#include <iostream>
using namespace std;

int main(){
    int n;

    int pares = 0;
    int cont = 0;

    //Validando el numero
    do{
        cout << "Ingrese un entero positivo: ";
        cin >> n;
        if(n <= 0){
            cout << "El numero debe ser positivo, vuelva a ingresarlo: ";
            cin >> n;
        }
    }while(n <= 0);


    do{
        cout << pares + cont <<endl;
        cont +=2;

    }while(cont <= n);

    return 0; 
}
