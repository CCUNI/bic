/*En un arreglo de tipo real se almacenan las calificaciones de un grupo de N alumnos
que se presentaron a un examen de admisión de una universidad. Escribe un programa
que calcule e imprima lo siguiente:
a) El promedio general del grupo.
b) El porcentaje de los alumnos aprobados (puntaje mayor a 1200 puntos).
c) El número de alumnos cuya calificación sea mayor o igual a 1500.
*/
#include <iostream>
#include <cstdlib> //rand(), genera un entero aleatorio entre 0 y RAND_MAX, srand()
#include <ctime> //time()
using namespace std;

int main(){

    cout <<rand()*1.0/RAND_MAX <<endl;



    int notas[50];

    int suma = 0;

    int mayor1500 = 0, mayor1200 = 0;

    for(int i = 0; i < 50; ++i){
        notas[i] = rand() % 2001;
    }

    for(int i = 0; i < 50; ++i){
        suma += notas[i];
        if(notas[i]> 1200){
            mayor1200++;
        }
        if (notas[i]>=1500){
            mayor1500++;
        }
    }

    cout << "a) Promedio genral del grupo: " << suma/50 <<endl;
    cout << "b) Porcentaje de alumnos aprobados: " << 50/mayor1200 * 100 << "%" <<endl;
    cout << "c) Alumnos con notas mayor o igual a 1500: " << mayor1500 <<endl;

    return 0; 
}