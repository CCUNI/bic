/*Escribir una función para calcular las coordenadas x e y de la trayectoria de un proyectil
de acuerdo a los parámetros ángulo de inclinación α y velocidad inicial v a intervalos
de 0.1 s*/

#include <iostream>
#include<cmath>
#include<iomanip> //setw(4)    
using namespace std;

void trayectoriaParabolico(float vi, float angulo){
    float  g = 9.81;
    float ang_rad = angulo * 3.14/180;

    float t = 0.0;

    float x, y;

    cout << "Tiempo " << "   " << " X" << "  " << " Y" <<endl; 

    do{
        x = vi*cos(ang_rad)*t;
        y = vi*sin(ang_rad)* t - 0.5*g*t*t;

        cout << setw(10) << t << setw(10) << x << setw(10) << y << endl;

        t = t + 0.1;

    }while(y >= 0);


}

int main(){

    trayectoriaParabolico(5, 30);


    return 0; 
}