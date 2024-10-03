/*
8. Realice un programa que imprima números reales y su raíz cuadrada
. Icicialice la variable con 16, en cada iteración decremente
su valor en 2.5, terminar cuando la variable es menor que 1

*/

#include <iostream>
#include <iomanip> //setw()
#include <cmath>// sqrt()
using namespace std;

int main(){
	
	for(double r = 16; r >= 1; r -= 2.5){
		cout <<setw(4)<< r << " tiene como raiz: " << sqrt(r) <<endl;
	}

	return 0;
}

