#include <iostream>

using namespace std;

int main() {
	int edad;
	char nombre[30];
	
	cin.getline(nombre, 30);
	cin>>edad;
	
	cout<<sizeof(nombre)<<endl;
	cout<<sizeof(edad)<<endl;

    return 0;
}
