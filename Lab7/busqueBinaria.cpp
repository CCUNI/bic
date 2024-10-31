#include<iostream>
using namespace std;

int main(){
	
	
	int a[] = {0, 3, 5, 6 ,8, 9, 13, 17}; //declara e inicializa un arreglo
	
	int n = sizeof(a)/sizeof(a[0]); //n es el tamaño del arreglo
	
	int clave  = 17;
	
	//BÚSQUEDA BINARIA (ARREGLOS ORDENADOS)
	int encontrado = -1;
	
	int izq = 0;
	int der = n-1;
	
	while(izq <= der){
		int medio = (izq + der)/2;
		if(a[medio] == clave){
			encontrado = medio;
			break;
		}else if(a[medio] < clave){
			izq = medio +1;
		}else{
			der = medio -1;
		}
		
	}
	
	if(encontrado != -1){
		cout << "se encontro el elemento en la posicion " << encontrado <<endl;
	}else{
		cout << "No se encontró el elemento";
	}
	
}
