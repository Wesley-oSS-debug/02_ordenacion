/*métode de ordenamienti por ShellSort*/

#include <iostream>
#include <windows.h>
using namespace std;

void ShellSort(int[],int);
void imprimirArray(int[],int);

int main() {
	SetConsoleOutputCP(CP_UTF8	);
	int tam;
	cout<<"\t-------METODO SHELL-------\n"<<endl;
	cout<<"Ingrese el tamaño del arreglo: "; cin>>tam;
	int array[tam];
	for (int i=0;i<tam;i++) {
		cout<<"Ingrese el elemento  ["<<i+1<<"] : "; cin>>array[i];
	}
	cout<<endl;
	ShellSort(array,tam-1);
	imprimirArray(array,tam);
}
//Metodo shell
void ShellSort(int A[],int n) {
	int k=n+1;
	while (k>1) {
		k/=2;
		int cen=1;
		while (cen==1) {
			cen=0;        
			int i=0;
			while (i+k<=n) {
				if (A[i+k]<A[i]) {
					int aux=A[i];
					A[i]=A[i+k];
					A[i+k]=aux;
					cen=1;
				}
				i++;
			}
		}
	}
}
//imprimir arreglo
void imprimirArray(int array[],int n) {
	cout<<"ARRAY ORDENADO: ";
	for (int i=0;i<n;i++) {
		cout<<array[i]<<" ";
	}
	cout<<endl;
}