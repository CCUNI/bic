#include <iostream>
using namespace std;

int main(){
    char cadena[50];

    for(int i = 0; i < 26; i++){
        char a = rand() % 26 + 'A';
        cadena[i] = a;
    }

    for(int i = 0; i < 26; i++){
        cout << cadena[i] <<" ";
    }

    //Tarea, completar el código para contar
    //el numero de ocurrencias de los caracteres generados


    return 0; 
}