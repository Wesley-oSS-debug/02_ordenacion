/* intercambio directo por DERECHA*/
#include <iostream>
#include <windows.h>
using namespace std;

	struct Producto{
		int id;
		string code;
		string des;
		int pre;
		int cant;
		
	};
void ordenaArt(int,Producto []); //prototipo de la funcion

int main(){
	SetConsoleOutputCP(CP_UTF8);
	int n;
	int cantProductos=0;
	cout<<"Ingrese el tamaño del ARRAY: "; cin>>n;
	cout<<"\n";
	Producto ter[n];
	ter[cantProductos].id++;
	
	for(int i=0;i<n;i++){
		cout<<"Ingrese el CODIGO : "; cin>>ter[cantProductos].code;
		cin.ignore();
		cout<<"Ingrese la DESCRIPCIÓN : "; getline(cin,ter[cantProductos].des);
		cout<<"Ingrese el PRECIO :"; cin>>ter[cantProductos].pre;
		cout<<"Ingrese la CANTIDAD :"; cin>>ter[cantProductos].cant;
		
		cantProductos++;
		cout<<"\n------------------------\n";
	}
	 ordenaArt(n,ter);
	//imprime los terminos ordenados de manera ascendente
	cout<<"\nARTICULOS ORDENADOS DESCENDENTEMENTE POR MONTO DE INVERSION\n\n";
		cout<<"\n------------------LISTA DE ARTÍCULOS---------------\n";
	for(int i=0;i<n;i++){
		cout<<"Artículo ""["<<i+1<<"]"<<endl;
		cout<<"CODIGO :"<<ter[i].code<<endl;
		cout<<"DESCRIPCIÓN :"<<ter[i].des<<endl;
		cout<<"PRECIO :"<<ter[i].pre<<endl;
		cout<<"CANTIDAD :"<<ter[i].cant<<endl;
		cout<<"\n---------------\n";
	}
	
	return 0;
}

void ordenaArt(int n, Producto t[]){
	Producto aux[n];
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i;j++){
			if(t[j].pre*t[j].cant<t[j+1].pre*t[j+1].cant){
				 aux[j]=t[j];
				t[j]=t[j+1];
				t[j+1]=aux[j];
			}
		}
	}
}