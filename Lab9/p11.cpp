#include <iostream>
using namespace std;

//EJEMPLO DE RECURSIVIDAD INDIRECTA
int impar(int);

int par(int n){
    if(n == 0){
        return 1;
    }

    return impar(n-1);
}


int impar(int n){
    if(n == 0){
        return 0;
    }
    return par(n-1);
    
}

int main(){

    int n = 10;
    int valor;
    int contpares = 0, contimpares = 0;
    for(int i = 0; i < 10; i++){
        valor = rand() % 41 + 10;
        if(par(valor)){
            contpares++;
        }

        if(impar(valor)){
            contimpares++;
        }
    }

    //completar

    return 0; 
}