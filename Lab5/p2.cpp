/*
p2. Realizar un programa que, dado un número entero positivo, calcule
la suma de sus dígitos
Ejemplo 
entrada: 123 ... 3 == 123%10  ..... 123/10 == 12
salida la suma es 6;
*/

#include <iostream>
using namespace std;

int main(){
    int n, suma = 0;
    cout << "ingrese un entero positivo: " <<endl;
    cin >> n;
    int N = n;
    /*
    while(n > 0){
        suma +=  n % 10;
        n /= 10;
    }
    */
    
    //utilice estructura for()
    for( ; n > 0 ; n /= 10){
        suma += n % 10;
    }

    cout << "La suma de digitos de " << N << " es:  " << suma <<endl;

    

    return 0; 
}