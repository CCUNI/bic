#include <iostream>
using namespace std;

int main(){

    char c[5] = {72,'o',108,'a'};//Hola\0

    cout << c<<endl;
    /*
    for(int i = 0; i < 255; i++){
        cout << "A " << i << " le corresponde:  " << (char)i << endl;
    }
   */

    unsigned char ch1 = 125, ch2 = 10;

    unsigned char ch3 = ch1 + ch2;

    cout << (int)ch3 <<endl;

    cout << 'c' - 'a' <<endl;

    return 0; 
}