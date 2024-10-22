#include <iostream>
using namespace std;

int main(){
    //DECLARAMOS UN ARREGLO
    double d[5];

    //INGRESAR DATOS
    for(int i = 0; i < 5; i++){
        cout << "Ingrese el eelmento " << i+1 << ": ";
        cin >> d[i];
    }



    //MOSTRAR EL ARREGLO
    for(int i = 0; i < 5; i++){
        cout << d[4 - i]  <<" ";
    }

    return 0; 
}