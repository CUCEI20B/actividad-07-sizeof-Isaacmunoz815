#include <iostream>

using namespace std;

int main() {
	int edad;
	char nombre[30];
	
	cout<<"Escribe tu nombre: \n";
	cin.getline(nombre, 30);
	cout<<"Escribe tu edad: \n";
	cin>>edad;
	
	cout<<"la cantidad de bytes (nombre) es de: "<<sizeof(nombre)<<endl;
	cout<<"la cantidad de bytes (edad) es de: "<<sizeof(edad)<<endl;

    return 0;
}
