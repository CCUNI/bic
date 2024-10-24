/*Dado las edades de 15 personas, escribir un programa que nos permita calcular
La moda: es el dato que aparece con mayor frecuencia
La mediana: es la dato que aparece en la posición central de un conjunto de datos
ordenados.*/

#include <iostream>
#include <cstdlib> //rand() srand()
using namespace std;

int main(){

    const int N = 20;
    double mediana;

    int edades[N];

    //Generamos edades aleatorias entre 18 y 60 años
    for(int i = 0; i < N; i++){
        edades[i] = rand()%43 + 18;
        cout << edades[i] <<endl;
    }

    //Aplicamos ordenamiento Burbuja
    for(int i = 0; i < N - 1; i++ ){ //recorridos
        for(int j = 0; j < N - 1 - i; j++){//comparaciones
            if(edades[j]>edades[j+1]){
                int temp = edades[j];
                edades[j] = edades[j+1];
                edades[j+1] = temp;
            }
        }
    }

    cout << "Edades ordenados en forma creciente:\n";
    for(int i = 0; i < N; ++i){
        cout << edades[i] <<" ";
    }


    if(N%2 == 0){ //cantidad de datos pares
        mediana = (edades[N/2 - 1] + edades[N/2])/2.0;
    }else{//cantidad de datos impares
        mediana = edades[N/2];
    }

    cout << "\nLa mediana es: " << mediana <<endl;






    return 0; 
}