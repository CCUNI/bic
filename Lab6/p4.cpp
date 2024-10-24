/*Escribir un programa que permita decidir si dos arreglos
son iguales o no*/

#include <iostream>
using namespace std;

int main(){
    //Declara e inicializa 2 arreglos
    int a[] = {0,4,5,6};
    int b[] = {1,4,5,6};

    //variable bandera, indica cuándo son iguales
    bool iguales = true;

    int na = sizeof(a)/sizeof(a[0]);
    int nb = sizeof(b)/sizeof(b[0]);

    if(na != nb){ // si las dimensiones son diferentes no son iguales
        iguales = false; 
    }else{
        for(int i = 0; i < na; i++){
                if(a[i] != b[i]){ // basta encontrar un par de elementos direfentes
                    iguales = false;
                    break; //termina las iteraciones del for
                }
        }
    }

    if(iguales){ // iguales == true
        cout << "Los arreglos son iguales\n";
    }else{
        cout << "Los arreglo no son iguales";
    }

    return 0; 
}