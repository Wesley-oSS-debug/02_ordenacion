/*método de ordenamiento de Quicksort*/
#include <iostream>
#include <windows.h>
using namespace std;
void QuickSort(int[],int);
void Reduce(int[],int,int);
void imprimirArreglo(int[],int);

int main() {
	SetConsoleOutputCP(CP_UTF8);
	int tam;
	cout<<"\tMETODO QUICKSORT\n"<<endl;
	cout<<"Ingrese el tamaño del arreglo: "; cin>>tam;
	int array[tam];
	for (int i=0;i<tam;i++) {
		cout<<"Ingrese el elemento ""["<<i+1<<"]"" : "; cin>>array[i];
	}
	cout<<endl;
	QuickSort(array,tam-1);
	imprimirArreglo(array,tam);
}
//Metodo quicksort
void QuickSort(int A[],int n) {
	Reduce(A,0,n);
}
void Reduce(int A[],int inicio,int final) {
	int izq=inicio;
	int der=final;
	int pos=izq;
	int cen=1;
	while (cen==1) {
		cen=0;
		//recorrido de derecha a izquierda
		while (A[pos]<=A[der] && pos!=der) {
			der--;
		}
		if (pos!=der) {
			int aux=A[pos];
			A[pos]=A[der];
			A[der]=aux;
			pos=der;
			//recorrido de izquierda a derecha
			while (A[pos]>=A[izq] && pos!=izq) {
				izq++;
			}
			if (pos!=izq) {
				aux=A[pos];
				A[pos]=A[izq];
				A[izq]=aux;
				pos=izq;
				cen=1;
			}
		}
		if (pos-1>inicio) {
			/*llamado recursivo a QuiqSort
			para el subarreglo derecho*/
			Reduce(A,inicio,pos-1);
		}
		if (pos+1<final) {
			/*llamado recursivo a quicksort para el
			subarreglo derecho*/
			Reduce(A,pos+1,final);
		}
	}
}
//imprimir arreglo
void imprimirArreglo(int arr[],int n) {
	cout<<"ARRAY ORDENADO: ";
	for (int i=0;i<n;i++) {
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}