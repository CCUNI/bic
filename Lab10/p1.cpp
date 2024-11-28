/*Escribir un programa que al recibir como dato una cadena de caracteres lo escriba en
forma inversa*/
#include <iostream>
#include <cstring> //para strlen() ...
using namespace std;

void invertirCadena(char c[100], int tamCadena){

    for(int i = tamCadena -1; i>=0; i--){
        cout << c[i];
    }
}

int main(){
    char c[100];

    cout << "Ingrese una cadena: ";
    cin.getline(c,100);//leemos la cadena

    int tamCadena = strlen(c);

    invertirCadena(c,tamCadena);
    

    return 0; 
}