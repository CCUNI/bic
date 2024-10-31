/*
Escribir un programa en C++ que al recibir como dato un arreglo bidimensional de
tipo entero, recorra este arreglo en forma de espiral y de columna a columna, como se
muestra en las siguientes figuras.
*/
#include <iostream>
using namespace std;

int main(){

    const int F = 3;
    const int C = 4;

    int M[F][C];

    int val = 1;
    for(int j = 0; j < C; j++){
        if(j % 2 == 0){
            for(int i = 0; i < F; i++){
                M[i][j] = val;
                val++;
            }
        }else{
            for(int i = F-1; i >=0; i--){
                M[i][j] = val;
                val++;
            }
        }
    }

    for(int i = 0; i < F; i++){
        for(int j = 0; j < C ; j++){
            cout << M[i][j] <<" ";
        }
        cout << endl;
    }


    return 0; 
}