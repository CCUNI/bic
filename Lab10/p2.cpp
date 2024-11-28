/*Escribir un programa que al recibir como datos una
cadena de caracteres y un carácter, determine
cuántas veces se encuentra el carácter en la cadena.*/
#include <iostream>
#include <cstring>
#include <cctype> //para toupper
using namespace std;


int main(){

    char c[500]= "Escribir un programa que al recibir"
     "como datos una cadena de caracteres y un carácter,"
    "determine cuántas veces se encuentra el carácter en"
    "la cadena";

    char buscar = 'a';

    int cont = 0;

    for(int i = 0; i < strlen(c); i++){
        if(c[i] == buscar || c[i] == toupper(buscar)){
            cont++;
        }
    }


cout << buscar << " se encuentra " << cont  << " veces."; 


    return 0; 
}