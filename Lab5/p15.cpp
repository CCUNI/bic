/*Realizar un programa que permita calcular todos los números de exactamente tres
cifras tales que la suma de los cuadrados de sus dígitos es igual al cociente de la
división entera del número entre 3.*/
#include <iostream>
#include <cmath>// pow(x,y)
using namespace std;

int main(){

    int n = 100;

    while(n <= 999){
        int N = n;
        int suma = 0;
        while(N> 0){
            suma +=  pow(N % 10,2);
            N /= 10;
        }

        if(suma == n/3){
            cout << n << endl;
        }
        n++;

    }

    return 0; 
}