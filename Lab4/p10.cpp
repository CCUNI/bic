/*
Escribir un programa que, al recibir como datos la matrícula, la carrera, el semestre que
cursa y el promedio de un alumno de una universidad privada de Lima, determine si el
alumno puede ser asistente de alguna de las carreras que se ofrecen en la universidad.
Si el alumno reúne los requisitos planteados en la siguiente tabla.

*/
#include <iostream>
using namespace std;

int main(){
	int mat;
	cout << "Ingrese su matrícula (1:Industrial, 2:Telematica, 3: computacion, 4 mecamica): ";
	cin >> mat;
	int sem;
	cout << "Ingrese el semestre: ";
	cin >>sem;
	double prom;
	cout << "Ingrese el promedio: ";
	cin >>prom;
	
	switch(mat){
		case 1:
			if(sem >=6 && prom >= 8.5){
				cout << "Califica como asistente "<<endl;
				cout << "Su matricula es: " << 1 <<endl;
				cout << "El semestre cursado es: " << sem <<endl;
				cout << "Su promedio es: " <<prom <<endl;
			}else{
				cout << "No califica como asistente Industrial"<<endl;
			}
		break;
		case 2: 
			if(sem >=5 && prom >= 9.0){
				cout << "Califica como asistente "<<endl;
				cout << "Su matricula es: " << 1 <<endl;
				cout << "El semestre cursado es: " << sem <<endl;
				cout << "Su promedio es: " <<prom <<endl;
			}else{
				cout << "No califica como asistente de Telematica"<<endl;
			}
		break;
		case 3:
			if(sem >=6 && prom >= 8.8){
				cout << "Califica como asistente "<<endl;
				cout << "Su matricula es: " << 1 <<endl;
				cout << "El semestre cursado es: " << sem <<endl;
				cout << "Su promedio es: " <<prom <<endl;
			}else{
				cout << "No califica como asistente de computacion"<<endl;
			}
		break;
		case 4:
			if(sem >=7 && prom >= 9.0){
				cout << "Califica como asistente "<<endl;
				cout << "Su matricula es: " << 1 <<endl;
				cout << "El semestre cursado es: " << sem <<endl;
				cout << "Su promedio es: " <<prom <<endl;
			}else{
				cout << "No califica como asistente de mecanica"<<endl;
			}
		break;
		default: cout << "Matricula invalida" <<endl;
		
	}

	return 0;
}

