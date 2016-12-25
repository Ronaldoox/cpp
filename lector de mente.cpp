#include<iostream>
#include<cstdlib>

using namespace std;
bool estado = 1;

int main(){
	int dato, resultado;
	
	while(estado){
	cout<<"\tLector de mente"<<endl;
	cout<<"\nEste programa esta hecho para adivinar un n\243mero."<<endl<<endl;
	system("pause");
	cout<<"\nPiensa un n\243mero par entre 1 y 20."<<endl<<endl; 
	system("pause");
	cout<<"\nA ese n\243mero pensado s\243male 5."<<endl<<endl;
	system("pause");
	cout<<"\nAl resultado m\243ltiplicalo por 3."<<endl<<endl;
	system("pause");
	cout<<"\nLuego al resultado r\202stale 15."<<endl<<endl;
	system("pause");
	cout<<"\nIngresa el resultado final de la operaci\242n completa: "; cin>>dato;
	resultado = dato / 3;
	cout<<"\nEl n\243mero en el cual pensaste al principio es: "<<resultado<<endl;
	cout<<"\nEl programa ha averiguado el n\243mero con \202xito . . . "<<endl;
	cout<<"\nIngrese 1 para Reiniciar el programa, 0 para Salir: "; cin>>estado;
	system("cls");
	}
	
	
	system("pause");
	return 0;
}
