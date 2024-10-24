/*Escribir un programa que reciba como dato un arreglo de números
enteros, determine cuántos de ellos son positivos, cuántos negativos
y cuántos nulo*/

#include <iostream>
using namespace std;

int main(){

    //declaramos e inicializamos variables contadores
    int negativos = 0, ceros = 0, positivos = 0;

    //declaramos e inicializamos el arreglo
    int a[] = {-3,8,9,12,0,3,6,0,-4,6};

    //Recuperamos el tamaño del arreglo
    int n = sizeof(a)/sizeof(a[0]);

    //imprimir los elementos del arreglo
    cout << "Arreglo inicial " << endl;
    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }

    //Determinamos la cantidad de positivos negativos y nulos
    for(int i = 0; i < n; i++){
        if(a[i] < 0){
            negativos++;
        }else if(a[i] == 0){
            ceros++;
        }else{
            positivos++;
        }
    }

    //Inprime los resultados
    cout << "\ncantidad de negativos: " << negativos <<endl;
    cout << "Cantidad de ceros: " << ceros <<endl;
    cout << "Cantidad de positivos: " << positivos <<endl;

    return 0; 
}