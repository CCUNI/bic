/*Escribir una función lógica de dos argumentos enteros, 
que devuelva true si uno divide al otro y false en caso contrario*/
#include <iostream>
using namespace std;

bool divide(int x, int y){
    if((x % y == 0 && y != 0) ||(y % x == 0 && x != 0)){
        return true;
    }else{
        return false;
    } 
}
int main(){

    cout << divide(2, 8);

    return 0; 
}