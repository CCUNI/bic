#include <iostream>
#include <string>
using namespace std;

int main(){
    char c[100];
    //string c;
    cout << "Ingrese una cadena: ";
    //getline(cin,c);
    cin.getline(c,100);//cin >> c;

    cout << "La cadena leida es: " << c << endl;


    return 0; 
}