/*Escribir una función para calcular las coordenadas x e y de la trayectoria de un proyectil
de acuerdo a los parámetros ángulo de inclinación α y velocidad inicial v0 a intervalos
de 0,1 s*/

#include <iostream>
#include<cmath>
using namespace std;

void trayectoriaProyectil(float v0, float angulo){
    const float g = 8.81;
    float ang_rad = angulo*3.1416/180;

    
    float t = 0;
    float x = 0, y = 0;

    while(true){
        x = v0*cos(ang_rad)*t;
        y = v0*sin(ang_rad)*t - 0.5*g*pow(t,2);
        if( y < 0){
            break;
        } 

        cout << t << "\t" << x <<"\t" <<  y << endl;
        

        t += 0.1;

    }
}

int main(){

    trayectoriaProyectil(10, 45);

    return 0; 
}