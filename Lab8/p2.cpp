/*. Escribir una función lógica de dos argumentos enteros, 
que devuelva true si uno divide al otro y false en caso contrario*/

#include <iostream>
using namespace std;

bool divide(int a, int b){
    if((a != 0 && b % a == 0)||(b != 0 && a % b == 0)){
        return true;
    }else{
        return false;
    }

}

int main(){

    int a = 10, b = 2;

    if(divide(a,b)){
        cout << "Un numero es divisor del otro\n";
    }else{
        cout << "No se dividen";
    }

    return 0; 
}