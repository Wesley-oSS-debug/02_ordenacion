/* ejercicio de intercambio directo*/

#include <iostream>
#include <windows.h>
using namespace std;

void interDerecha (int[],int);
void  imprimir(int[],int);
int main(){
	
	SetConsoleOutputCP(CP_UTF8);
	
	int array[100];
	int tam;
	int op;
	cout<<"Ingrese el tamaño del arreglo(0-100): "; cin>>tam;
	for(int i=0;i<tam;i++){
		cout<<"Ingrese el elemento ["<<i+1<<"] :";
		cin>>array[i];
	}
	
	do{
		cout<<"\n\n------MÉTODOS DE ORDENAMIENTO-------\n\n";
		cout<<"1. Intercambio directo por DERECHA\n";
		cout<<"2. Intercambio directo por IZQUIERDA\n";
		cout<<"3. Intercambio directo por SEÑAL\n";
		cout<<"4. Intercambio directo por BIDIRECCIONAL \n";
		cout<<"5. Salir del PROGRAMA\n\n";
		cout<<"Ingrese la OPCION: "; cin>>op;
		
		switch(op){
			
		case 1: 
				interDerecha(array,tam-1);
				imprimir(array,tam);
		break;
		
		case 2: 
				//interIzquierda();
		break;
		
		case 3: 
				//interCen();
		break;
		
		case 4: 
				//interBi();
		break;
		
		default :
		
		cout<<"\nSALIENDO DEL PROGRAMA....\n";		
					
					
		}
		
		
	}while(op<5);

	return 0;
}

void interDerecha (int array[],int tam){
	int aux;
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam-1;i++){
			if(array[j]>array[j+1]){
				aux=array[j];
				array[j]=array[j+1];
				array[j+1]=aux;
				
			}
		}
	}
	
	
	
}

void imprimir(int array[], int tam){
	
	for(int i=0;i<tam;i++){
		cout<<"ARREGLO ORDENADO: "<<array[i]<<" ";
	}
	
	
}

