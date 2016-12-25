#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
bool estado = 1;

int main(){
	int numero, dato, contador=0;
	
	while(estado){
	srand(time(NULL));
	dato = 1 + rand()%(100);
	
	cout<<"\tN\243mero Random"<<endl;
	cout<<"Adivina el n\243mero aleatorio\n";
	
	do{
		cout<<"\nDigite un n\243mero: "; cin>>numero;
		
		if(numero>dato){
			cout<<"\nDigite un n\243mero menor";
		}
		if(numero<dato){
			cout<<"\nDigite un n\243mero mayor";
		}
		contador++;
	}while(numero != dato);
	
	cout<<"\nFELICIDADES! Has adivinado el n\243mero.\n";
	cout<<"N\243mero de intentos: "<<contador<<endl;
	cout<<"\nIngrese 1 para Reintentar, 0 para Salir: "; cin>>estado;
	cout<<"\n";
	system("cls");
	}
	
	system("pause");
	return 0;
}
