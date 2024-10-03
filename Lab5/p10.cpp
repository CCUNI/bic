/*
10
*/
#include <iostream>
//#define _USE_MATH_DEFINES 
#include <cmath>//abs(), M_PI
using namespace std;

int main(){
	double pi = 3.14159;
	
	double suma = 0.0;
	
	int i = 0;
	while(fabs(pi - suma) > 0.0005){ //considerar valor absoluto
		if(i%2 == 0){
			suma += 4.0/(2*i + 1); //considerar division no entera y agrupar
		}else{                     // de forma correcta
			suma -= 4.0/(2*i + 1);
		}
		i++; //inclementar el contador
	}
	
	cout << "numero de iteraciones: " <<i <<endl;

	return 0;
}

