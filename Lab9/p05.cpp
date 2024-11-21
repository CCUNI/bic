#include <iostream>
using namespace std;

void binarioRecursivo(int n){
    if(n == 0){
        return;
    }
    cout << n%2 <<endl;

    binarioRecursivo(n/2);
    cout <<"\n" <<n%2  << endl;
}

int main(){

    int n = 13;

    if(n == 0){
        cout << 0 <<endl;
    }else{
        binarioRecursivo(n);
    }


    return 0; 
}