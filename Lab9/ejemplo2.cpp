//Fibonacci Recursivo
#include <iostream>
using namespace std;

int fibRecursivo(int n){
    if(n == 0 || n == 1)
        return n;

    return  fibRecursivo(n-1) + fibRecursivo(n-2);
}

int main(){

    cout << fibRecursivo(5);

    return 0; 
}