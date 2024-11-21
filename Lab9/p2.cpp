#include <iostream>
using namespace std;

int potenciaRecursiva(int b, int e){
    if(e == 0){
        return 1;
    }
    return b * potenciaRecursiva(b, e-1);
}

int main(){
    int b = 2;
    int e  =10;
    cout << potenciaRecursiva(2,10);

    return 0; 
}