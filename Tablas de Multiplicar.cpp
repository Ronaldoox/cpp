#include<iostream>
#include<conio.h>

using namespace std;

int main(){
	int numero;
	
	cout<<"\tTablas de multiplicar"<<endl;
	do{
		cout<<"\nDigite un n\243mero: "; cin>>numero;
	}while((numero<1) || (numero>12));
	
	cout<<"\n";
	
	for(int i=1; i<=12; i++){
		cout<<numero<<" * "<<i<<" = "<<numero*i<<endl;
	}
	
	cout<<"\n";
	
	getch();
	return 0;
}


