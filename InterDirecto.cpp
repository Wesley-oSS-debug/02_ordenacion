/* ejercicio de intercambio directo*/

#include <iostream>
#include <windows.h>
using namespace std;

void interDerecha (int[],int);
void  imprimir(int[],int);
void interIzquierda(int[], int );
void interSenal(int[],int);
void interBi(int[],int);
int main(){
	
	SetConsoleOutputCP(CP_UTF8);
	
	int array[100];
	int tam;
	int op;
	cout<<"Ingrese el tamaño del arreglo(0-100): "; cin>>tam;
		int copia[tam];
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
		
		//copia del array
	 
		for(int i=0;i<tam;i++){
			copia[i]=array[i];
		}

		switch(op){
			
		case 1: 
				interDerecha(copia,tam);
				imprimir(copia,tam);
		break;
		
		case 2: 
				interIzquierda(copia,tam);
				imprimir(copia,tam);
		break;
		
		case 3: 
				interSenal( copia, tam);
				imprimir(copia,tam);
		break;
		
		case 4: 
				interBi(copia,tam);
				imprimir(copia,tam);
		break;
		
		default :
		
		cout<<"\nSALIENDO DEL PROGRAMA....\n";		
					
		}
		
	}while(op<5);

	return 0;
}

void imprimir(int array[], int tam){
	
	
		cout<<"ARREGLO ORDENADO: ";
		cout<<"\n";
	for(int i=0;i<tam;i++){
		cout<<array[i]<<" ";
	}
	

}

void interDerecha (int array[],int tam){
		
	int aux;
	for(int i=0;i<tam;i++){
		for(int j=0;j<tam-i-1;j++){
			if(array[j]>array[j+1]){
				aux=array[j];
				array[j]=array[j+1];
				array[j+1]=aux;
				
			}
		}
	}
	

	
	
	
}


void interIzquierda (int array[],int tam){
		
	int aux;
	for(int i=1;i<tam;i++){
		for(int j=tam-1;j>=i;j--){
			if(array[j]<array[j-1]){
				aux=array[j-1];
				array[j-1]=array[j];
				array[j]=aux;
				
			}
		}
	}
	
	
}

void interSenal(int array[],int tam){
		
	int aux;
	int cen=1;
	int i=0;
	while(i<tam && cen==1){
		cen=0;
		for(int j=0;j<tam-1;j++){
			if(array[j]>array[j+1]){
				aux=array[j];
				array[j]=array[j+1];
				array[j+1]=aux;
				cen=1;
			}
		}
		i++;
	}

}

void interBi(int array[], int tam){
		
	int izq=1;
	int aux;
	int der=tam-1;
	int k=tam-1;
	while(izq<der){
		//primera etapa
		for(int i=der;i>=izq;i--){
			if(array[i-1]>array[i]){
				aux=array[i-1];
				array[i-1]=array[i];
				array[i]=aux;
				k=i;
				
			}
			
		}
		izq=k+1;
		
		//segunda etapa
		
		for(int i=izq;i<=der;i++){
			if(array[i-1]>array[i]){
				aux=array[i-1];
				array[i-1]=array[i];
				array[i]=aux;
				k=i;
				
			}
			
		}
		der=k-1;
	}
	
	
}
