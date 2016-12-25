#include<iostream>
#include<cmath>
#include<cstdlib>

using namespace std;
bool estado = 1;

int main(){
	while(estado){
	int opc;
	float n1, n2, suma, resta, mult,div,potencia, raiz_cuadrada;
	
	cout<<"\tCalculadora b\240sica\n";
	cout<<"\nBienvenido a la Calculadora b\240sica, por favor elija una opci\242n:\n";
	cout<<"\n1. Suma"<<endl;
	cout<<"2. Resta"<<endl;
	cout<<"3. Multiplicaci\242n"<<endl;
	cout<<"4. Divisi\242n"<<endl;
	cout<<"5. Potencia"<<endl;
	cout<<"6. Ra\241z cuadrada"<<endl;
	cout<<"7. Tablas de multiplicar"<<endl;
	cout<<"8. Salir"<<endl;
	cout<<"\nOpci\242n: "; cin>>opc;
	
	switch(opc){
		case 1:
		cout<<"\n\tSuma"<<endl;
		cout<<"\nIngrese el primer n\243mero: "; cin>>n1;
		cout<<"\nIngrese el segundo n\243mero: "; cin>>n2;
		suma = n1 + n2;
		cout<<"\nEl resultado es: "<<suma<<endl;
		cout<<"\nIngrese 1 para volver al men\243, 0 para Salir: "; cin>>estado;
		cout<<"\n\n";
		system("cls"); break;
		
		case 2:
		cout<<"\n\tResta"<<endl; 
		cout<<"\nIngrese el primer n\243mero: "; cin>>n1;
		cout<<"\nIngrese el segundo n\243mero: "; cin>>n2;
		resta = n1 - n2;
		cout<<"\nEl resultado es: "<<resta<<endl;
		cout<<"\nIngrese 1 para volver al men\243, 0 para Salir: "; cin>>estado;
		cout<<"\n\n";
		system("cls"); break;
		
		case 3:
		cout<<"\n\tMultiplicaci\242n"<<endl;
		cout<<"\nIngrese el primer n\243mero: "; cin>>n1;
		cout<<"\nIngrese el primer n\243mero: "; cin>>n2;
		mult = n1 * n2;
		cout<<"\nEl resultado es: "<<mult<<endl;
		cout<<"\nIngrese 1 para volver al men\243, 0 para Salir: "; cin>>estado;
		cout<<"\n\n";
		system("cls"); break;
			
		case 4:
		cout<<"\n\tDivisi\242n"<<endl;
		cout<<"\nIngrese el primer n\243mero: "; cin>>n1;
		cout<<"\nIngrese el primer n\243mero: "; cin>>n2;
		div = n1 / n2;
		cout<<"\nEl resultado es: "<<div<<endl;
		cout<<"\nIngrese 1 para volver al men\243, 0 para Salir: "; cin>>estado;
		cout<<"\n\n";
		system("cls"); break;
		
		case 5:
		cout<<"\n\tPotencia"<<endl;
		cout<<"\nIngrese la base: "; cin>>n1;
		cout<<"\nIngrese el exponente: "; cin>>n2;
		potencia = pow(n1,n2);
		cout<<"\nEl resultado es: "<<potencia<<endl;
		cout<<"\nIngrese 1 para volver al men\243, 0 para Salir: "; cin>>estado;
		cout<<"\n\n";
		system("cls"); break;
		
		case 6:
		cout<<"\n\tRa\241z cuadrada"<<endl;
		cout<<"\nIngrese n\243mero: "; cin>>n1;
		raiz_cuadrada = sqrt(n1);
		cout<<"\nLa ra\241z cuadrada es: "<<raiz_cuadrada<<endl;
		cout<<"\nIngrese 1 para volver al men\243, 0 para Salir: "; cin>>estado;
		cout<<"\n\n";
		system("cls"); break;
		
		case 7:
		cout<<"\n\tTablas de Multiplicar"<<endl;
		do{
			cout<<"\nIngrese n\243mero: "; cin>>n1;
		}while((n1<1) || (n1>12));
		cout<<"\n";
		for(int i=1; i<=12; i++){
			cout<<n1<<" * "<<i<<" = "<<n1 * i<<endl;
		}
		cout<<"\n";
		cout<<"\nIngrese 1 para volver al men\243, 0 para Salir: "; cin>>estado;
		cout<<"\n\n";
		system("cls"); break;
		
		default:
		exit(0); break;
	}
	}
	
	system("pause");
	return 0;
	}
