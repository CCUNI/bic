/*Escribir una función recursiva que permita contar los dígitos de
 un número dado.*/

 #include <iostream>
 using namespace std;

 int cuentaDigitosRecursivo(int n){
    if(n < 10){
        return 1;
    }else{
        return 1 + cuentaDigitosRecursivo(n/10);
    }
 }
 
 int main(){
    cout << cuentaDigitosRecursivo(102309);
 
    return 0; 
 }