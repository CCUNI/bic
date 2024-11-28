/*Escribir un programa que al recibir como dato una cadena de caracteres formada por
números y letras, en ese orden, imprima de forma sucesiva cada letra tantas veces
como indica el número que lo precede. Ejemplo si la cadena es 4p6c2f, el programa
debe imprimir ppppccccccff*/

#include <iostream>
#include <cstring>
#include <cctype> //para isdigit()
using namespace std;

int main(){

    char c[] = "4p6c2f"; // ENTRADA

    int dig;

    for(int i = 0; i < strlen(c); i++){
        if(isdigit(c[i])){
            dig = c[i] - '0';
            for(int j = 0; j < dig; j++){
                cout << c[i+1];
            }
        }

        
    }



    //SALIDA: ppppccccccff

    return 0; 
}