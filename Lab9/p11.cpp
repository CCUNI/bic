#include <iostream>
#include <ctime>
#include <cstdlib> //rand() srand()

using namespace std;


int impar(int);

int par(int n){
    if(n == 0){
        return 1;
    }else{
        return impar(n-1);
    }
}

int impar(int n){
    if(n == 0){
        return  0;

    }else{
        return par(n-1);
    }
}


int main(){

    int n;
    int numero;
    int contPares = 0, contImpares = 0;

    srand(time(0));

    cout << "Ingrese en entero positivo: ";
    cin >> n;

    for(int i = 0; i < n; i++){
        numero = rand() % 41 + 10;
        if(par(numero)){
           contPares++; 
        }

        if(impar(numero)){
            contImpares++;
        }

    }

    if(contPares > contImpares){
        cout << "La mayoria fueron pares" <<endl;
        cout << "Cantidad de pares es: " << contPares <<endl;
        cout << "Cantidad de impares es : " << contImpares <<endl;

    }else{
        cout << "La mayoria fueron impares" <<endl;
        cout << "Cantidad de pares es: " << contPares <<endl;
        cout << "Cantidad de impares es : " << contImpares <<endl;
    }

    return 0; 
}