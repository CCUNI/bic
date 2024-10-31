#include <iostream>
#include <cstring>

using namespace std;

struct Corredor {
    char nombre[100];
    double tiempo;
};

int main() {
    
    Corredor corredores[30]; 
    int n;
    char nombreabuscar[100];

    cout << "Ingrese el numero de corredores (maximo 30): ";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cout << "Ingrese el nombre del corredor " << i + 1 << ": ";
        cin >> corredores[i].nombre;
        cout << "Ingrese el tiempo de " << corredores[i].nombre << ": ";
        cin >> corredores[i].tiempo;
    }
    
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (corredores[j].tiempo > corredores[j + 1].tiempo) {
                
                Corredor temp = corredores[j];
                corredores[j] = corredores[j + 1];
                corredores[j + 1] = temp;
                
            }
        }
    }

    cout << "Ranking de los corredores:" << endl;
    for (int i = 0; i < n; i++) {
        cout << i + 1 << ". " << corredores[i].nombre << ": " << corredores[i].tiempo << " segundos" << endl;
    }

   
    
    cout << "Ingrese el nombre del corredor que desea buscar: ";
    cin >> nombreabuscar;

    bool encontrado = false;
    for (int i = 0; i < n; i++) {
        if (strcmp(corredores[i].nombre, nombreabuscar) == 0) {
            cout << nombreabuscar << " está en la posición: " << (i + 1) << " del ranking." << endl;
            encontrado = true;
            break;
        }
    }

    if (!encontrado) {
        cout << "Corredor no encontrado." << endl;
    }
    //se utilizo estructuras porq no encontraba otra manera posible de hacerlo

    return 0;
}
