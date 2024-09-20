/*metodo por ordenacion de SELECION DIRECTA*/
#include <iostream>
using namespace std;

void SeleccionDir(int[],int);

int main() {
	int tam;
		cout<<"Ingrese el tamaño del ARRAY: "; cin>>tam;
	int array[tam];
	for(int i;i<tam;i++){
		cout<<"Ingrese el elemento ["<<i+1<<"] :"; cin>>array[i];
	}
	SeleccionDir(array,tam);
	cout<<"\n ARRAY ORDENADO\n";
	for(int i=0;i<tam;i++){
		cout<<array[i]<<" ";
	}
	return 0;
}

void SeleccionDir(int A[],int n) {
	for (int i=0;i<n-1;i++) {
		int menor=A[i];
		int k=i;
		for (int j=i+1;j<n;j++) {
			if (A[j]<menor) {
				menor=A[j];
				k=j;
			}
		}
		A[k]=A[i];
		A[i]=menor;
	}
}