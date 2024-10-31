#include<iostream>
using namespace std;

int main(){
	
	
	int a[] = {1,9,2,-3,6,6,8,0,11,-6}; //declara e inicializa un arreglo
	
	int n = sizeof(a)/sizeof(a[0]); //n es el tamaño del arreglo
	
	int clave  = 25;
	
	//BÚSQUEDA LINEAL
	int encontrado = -1;
	
	for(int i = 0; i < n; i++){
		if(a[i] == clave){
			encontrado = i;
			break;
		}
	}
	
	if(encontrado != -1){
		cout << "se encontro el elemento en la posicion " << encontrado <<endl;
	}else{
		cout << "No se encontró el elemento";
	}
	
	
	
	
	
	
	
}
