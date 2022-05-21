#include <iostream>

using namespace std;

int main(int argc, char** argv) {
	
	int notas[10];
	int cantidad, sumanotas;
	double prom;
	
	sumanotas=0;
	
	cout<<"***********************************************"<<endl;
	cout<<"|       Calculadora de Promedio de Notas      |"<<endl;
	cout<<"***********************************************"<<endl<<endl;
	
		
	cout<<"Ingrese el numero de notas que desea agregar"<<endl;
	cin>>cantidad;
	cout<<endl;
	
	for (int i=0; i < cantidad; i++){
		cout<<"Ingrese la nota No."<<i+1<<endl;
		cin>>notas[i];	
		sumanotas=sumanotas+notas[i];		
	}
	
	prom=sumanotas/cantidad;
	
	cout<<endl;
	cout<<"******************************************"<<endl;
	cout<<"   El promedio de sus notas es de: "<<prom<<endl;
	cout<<"******************************************"<<endl;
	system("pause");
	return 0;
}
