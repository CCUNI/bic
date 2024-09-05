//Circulo

#include <iostream>
#include <cmath> // pi, pow(b,e)
using namespace std;

int main(){
    int n;
    cout << "Ingrese un entero: ";
    cin >> n;

    if(n % 2 == 0){
        cout << "El numero es par" <<endl;
    }else{
        cout << "El numero es impar" << endl;
    }


    float radio, area, perimetro;
    cout << "Ingrese el radio: ";
    cin >> radio;

    area = M_PI * pow(radio,2);
    perimetro = 2*M_PI*radio;

    cout << "El area es: " << area << "\n\n";
    cout << "El perimetro es;" << perimetro <<endl;
    

    return 0; 
}