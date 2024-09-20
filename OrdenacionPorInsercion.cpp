/*metodo de ordenacion por insercion binaria y directa*/
#include <iostream>
#include <windows.h>
using namespace std;
void InsercionBin(int[], int);
void InsercionDir(int[], int);
void imprimir(int[], int);
int main(){
	SetConsoleOutputCP(CP_UTF8);
	int tam;
	cout<<"\n--------MÉTODOS DE ORDENACION---------\n";
	cout<<"\n";
	cout<<"Ingrese el tamaño del ARRAY: "; cin>>tam;
	int array[tam];
	for(int i;i<tam;i++){
		cout<<"Ingrese el elemento ["<<i+1<<"] :"; cin>>array[i];
	}
	cout<<"\n\n";
	int op;
	do{
	
	cout<<"\n\n\t-------MENU-------\n\n";
	cout<<"1.- Por inserción BINARIA\n";
	cout<<"2.- Por inserción DIRECTA\n";
	cout<<"3.- Salir del programa\n\n";
	cout<<"\nIngrese la opción: "; cin>>op;
	
	//copia del array 
	int arrayCopia[tam];
	for(int i=0;i<tam;i++){
		arrayCopia[i]=array[i];
	}
	switch(op){
		case 1:
			InsercionBin(arrayCopia,tam);
			imprimir(arrayCopia,tam);
			break;
		case 2:
			InsercionDir(arrayCopia,tam);
			imprimir(arrayCopia,tam);
			break;
		case 3:
			cout<<"Saliendo del programa....";
			return 0;
			break;
		default	:
			cout<<"\nERROR\n";
		
	}
}while(op<4);
	
	return 0;
}

void imprimir(int A[],int n){
	for(int i=0;i<n;i++){
		cout<<A[i]<<" ";
	}
}


void InsercionBin(int A[],int n) {
	
	for (int i=1;i<n;i++) {
		int aux=A[i];
		int izq=0;
		int der=i-1;
		while (izq<=der) {
			int m=(izq+der)/2;
			if (aux<A[m]) {
				der=m-1;
			} else {
				izq=m+1;
			}
		}
		int j=i-1;
		while (j>=izq) {
			A[j+1]=A[j];
			j--;
		}
		A[izq]=aux; //insercion
	}

}

void InsercionDir(int A[],int n) {

	for (int i=1;i<n;i++) {
	int aux=A[i];
	int k=i-1;
		while (k>=0 && aux<A[k]) {
			A[k+1]=A[k];
			k--;
		}
		A[k+1]=aux;
	}

}
	