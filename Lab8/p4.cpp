/*Escribir una función lógica Vocal que determine 
si un carácter es una vocal*/

#include <iostream>
using namespace std;

bool esVocal(char c){
    if(c == 'a' || c == 'e'|| c == 'i'|| c == 'o' || c == 'u'){
        return true;
    }else{
        return false;
    }
}

int main(){
    char c;
    cout << "Ingrese un caracter: ";
    cin >> c;
    char minusc = tolower(c); //convierte un caracter en mayúscula a munúscula
    
    if(esVocal(minusc)){
        cout << "Es vocal\n";
    }else{
        cout << "No es vocal";
    }

    return 0; 
}