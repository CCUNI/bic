/*
Cargue una matriz M(8,8) con las siguientes características
Los elementos de la diagonal principal son 0.
Los elementos que están por encima de la diagonal principal son 1.
Los elementos que están por debajo de la diagonal principal son 2.
*/
#include <iostream>
using namespace std;

int main(){

    const int n = 8;
    int M[n][n] ={0};

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            if(j>i) M[i][j] = 2;
            if(j<i) M[i][j] = 1;   
        }
    }


    //Mostrando la matriz;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            cout << M[i][j] <<" ";
        }
        cout << endl;
    }

    return 0; 
}