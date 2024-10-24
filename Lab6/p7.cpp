/*En un arreglo de tipo real se almacenan las calificaciones de un grupo de N alumnos
que se presentaron a un examen de admisión de una universidad. Escribe un programa
que calcule e imprima lo siguiente:
a) El promedio general del grupo.
b) El porcentaje de los alumnos aprobados (puntaje mayor a 1200 puntos).
c) El número de alumnos cuya calificación sea mayor o igual a 1500.
*/
#include <iostream>
#include <cstdlib> //rand(), srand(), genera un entero aleatorio entre 0 y RAND_MAX
#include <ctime> //time()
using namespace std;

int main(){

    cout << "RAND_MAX es: " << RAND_MAX << endl;

    //arreglo de notas de 50 postulantes
    double notas[50];

    double suma = 0;

    //variables contadores 
    int mayor1500 = 0, mayor1200 = 0;

    //Generamos las notas de forma aleatoria
    srand(time(0));//actualice los aleatorios generados en cada compilación
    for(int i = 0; i < 50; ++i){
        notas[i] = ((double)rand()/RAND_MAX) *2000; //notas entre 0 y 2000
        cout << notas[i] <<endl;
    }

    //Realizamos el cálculo pedido
    for(int i = 0; i < 50; ++i){
        suma += notas[i];//acumulando la suma  de notas
        if(notas[i]> 1200){//contamos notas mayores a 1200
            mayor1200++;
        }
        if (notas[i]>=1500){//contamos notas mayores o iguales a 1500
            mayor1500++;
        }
    }

    cout << "a) Promedio general del grupo: " << suma/50.0 <<endl;
    cout << "b) Porcentaje de alumnos aprobados: " << mayor1200/50.0 * 100 << "%" <<endl;
    cout << "c) Alumnos con notas mayor o igual a 1500: " << mayor1500 <<endl;

    return 0; 
}