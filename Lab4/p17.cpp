/*
Realice un programa que reciba como dato un número entero n y calcule el factorial
de dicho número. Recuerda que 0! = 1, 1! = 1 y n! = n ×(n −1)!
*/

#include <iostream>
using namespace std;

int main(){

    int n;
    int fact = 1, i = 1;
    cout << "Ingrese un entero no negativo: ";
    cin >> n;

    if(n == 0){
        cout << "El factorial de " << n << " es: " << 1 <<endl;
    }else{
        do{
            fact = fact*i;
            i++;
        }while(i <= n);
        cout << "El factorial de " << n << " es:  " << fact <<endl;
    }

    

    return 0; 
}