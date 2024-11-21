#include <iostream>
using namespace std;
int  cuentaDigitosRecursivo(int n){
    if(n < 10){
        return 1;
    }
    return 1 + cuentaDigitosRecursivo(n/10);
}

int main(){

    cout << cuentaDigitosRecursivo(324013);

    return 0; 
}