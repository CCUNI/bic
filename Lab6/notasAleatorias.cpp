#include <iostream>
#include <cstdlib> //rand() srand()
#include <ctime> //time()
using namespace std;

int main(){
    //declaramos el arreglo de notas
    int notas[5];

    //inicilizamos notas aleatoriamente
    srand(time(0));
    for(int i = 0; i < 5; i++){
        notas[i] = rand() % 21;
    }

    //motramos el arreglo de notas
    cout << "\nEl arreglo de notas es: " <<endl;
    for(int i = 0; i < 5; i++){
        cout << notas[i]  <<" ";
    }


    return 0; 
}