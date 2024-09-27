/* intercambio directo por IZQUIERDA*/
#include <iostream>
#include <windows.h>
using namespace std;

	struct polinomio{
		int id;
		float coef;
		int exp;
		
	};
void ordenaPol(int,polinomio []); //prototipo de la funcion
int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	int cantMonomios=0;
	cout<<"Ingrese el tamaño del ARRAY: "; cin>>n;
	cout<<"\n";
	polinomio ter[n];
	ter[cantMonomios].id++;
	
	for(int i=0;i<n;i++){
		cout<<"Ingrese el coeficiente : "; cin>>ter[i].coef;
		cout<<"Ingres el exponente : "; cin>>ter[i].exp;
		cantMonomios++;
		cout<<"\n------------------------\n";
	}
	 ordenaPol(n,ter);
	//imprime los terminos ordenados de manera ascendente
	cout<<"\nPOLINOMIO ORDENADO ASCENDENTEMENTE\n\n";
	for(int i=0;i<n;i++){
		cout<<"Coef: "<<ter[i].coef<<", Exp: "<<ter[i].exp;
		cout<<"\n---------------\n";
	}
	
	return 0;
}

void ordenaPol(int n, polinomio t[]){
	polinomio aux[n];
	for(int i=1;i<n;i++){
		for(int j=n-1;j>=i;j--){
			if(t[j].exp<t[j-1].exp){
				 aux[j]=t[j];
				t[j]=t[j-1];
				t[j-1]=aux[j];
			}
		}
	}
}