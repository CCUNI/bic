/*Escribir un programa que calcule los valores máximo y mínimo y sus respectivas 
posiciones dentro de una matriz dada por el usuario*/

#include <iostream>
#include <cstdlib> // rand(), srand()
#include <ctime> //time()
using namespace std;

int main(){
    const int  m = 2;
    const int n = 3;
    int matriz[m][n];// = {2,6,3,9,7,5}; //matriz inicial

    srand(time(0));
    //Generando una matriz con elementos aleatorios entre 1 y 20
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n ; j++){
            matriz[i][j] = rand() % 20 + 1;
        }
    }

    //mostramos la matriz
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n ; j++){
            cout << matriz[i][j] <<" ";
        }
        cout << endl;
    }


   
    int indFilmin = 0;
    int indColmin = 0;

    int indFilmax = 0;
    int indColmax = 0;

    for(int i = 0; i < m; i++){//recorre las filas
        for(int j = 0; j < n; j++){//recorre las columnas
            if(matriz[indFilmin][indColmin] > matriz[i][j]){
                indFilmin = i;
                indColmin = j;
            }

            if(matriz[indFilmax][indColmax] <matriz[i][j]){
                indFilmax = i;
                indColmax = j;
            }
        }
    }

    cout << "\nEl menor elemento es: " << matriz[indFilmin][indColmin] << " Posiciones: " << indFilmin << " , " <<indColmin<<endl;
    cout << "\nEl mayor elemento es: " << matriz[indFilmax][indColmax] << " Posiciones: " << indFilmax << " , " <<indColmax<<endl;

    return 0; 
}