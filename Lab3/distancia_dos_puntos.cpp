/*
Pide al usuario dos pares de números x1, y1, x2, y2, que representen dos puntos en el
plano. Calcula y muestre la distancia entre ellos.
*/

#include<iostream>
#include<cmath> //sqrt()
using namespace std;

main(){
    //Datos
    float x1, y1, x2, y2, distancia;
    cout << "Ingrese las coordenadas de p1=(x1,y1)";
    cin >> x1 >> y1;

    cout << "Ingrese las coordenadas de p2=(x2,y2)";
    cin >> x2 >> y2;

    //Procesamiento
    distancia = sqrt((x1-x2)*(x1-x2) + (y1-y2)*(y1-y2) );

    //Salida
    cout << "la disntancia entre los puntos es: " << distancia <<endl;

    return 0;

}