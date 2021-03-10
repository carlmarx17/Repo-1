/* Este programa suma el inverso de los cuadrados desde a hasta 

Incluir las librerias*/ 

#include<iostream>
#include<cmath>
//Para no Poner std  varias veces
using namespace std;
// Funcion Main


int main()
{
//Declaracion de operaciones y variables
	int a,b ; double suma=0,cuadrado=0, icuadrado=0;
	
//Introducir numero donde empieza y termina a sumar
	cout<<"Este programa suma los inversos de los cuadrados de los numeros en el intervalo dado "<<endl;
	cout<<"Digite inicio de la suma: "; cin>>a;
	cout<<"Digite final: "; cin>>b;
	
	
	for(int ii = a; ii<=b; ii = ii+1){
		cuadrado = ii*ii;
		icuadrado = 1/cuadrado;
//suma iterativa, a cada vuelta del bucle me va guardando el resultado en memoria
		suma = suma + icuadrado;
	}
	cout.precision(4)<<"\nEl resultado de la suma es: "<<suma;
	
	return 0;
}
