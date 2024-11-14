/*Escribir una función lógica Vocal que determine si
un carácter es una vocal*/

#include <iostream>
using namespace std;

bool esVocal(char c){
    if(c == 'a' || c == 'e' || c=='i' || c == 'o' || c== 'u')
        return true;
    
    return false;
}


int main(){
 //llamando a la función
 char d = 'A';
 d = tolower(d);
    cout << esVocal(d);

    return 0; 
}

