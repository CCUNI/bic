/*Multiplicacion recursiva*/
#include <iostream>
using namespace std;

int multRec(int p, int q){
    if(q == 0){
        return 0;
    }

    if (q == 1){
        return p;
    }

    if(q % 2 == 0){
        return multRec(2*p, q/2);
    }else{
        return multRec(2*p, q/2) + p;
    }
}

int main(){

    int p;

    cout << "Ingrese un entero entre 1 y 12: ";
    cin >> p;

    while(p < 1 || p > 12){
        cout << "El numero debe estar entre 1 y 12: ";
        cin >> p; 
    }

    for(int q = 0 ; q <= 12; q++){
        cout << p << " x " << q << " = " << multRec(p,q) <<endl;

    }

    return 0; 
}