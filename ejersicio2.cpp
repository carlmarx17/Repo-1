/* este programa me transforma me da el precio de un producto mas iva */

#include<iostream> 

using namespace std;

int main(){
	float precio,iva, iba=0, total=0;
	
	cout<<"Digite el precio del producto: "; cin>>precio;
	cout<<"Digite el iva del producto: "; cin>>iva;
	
	iba = precio * iva/100;
	total = iba + precio;
	
	cout<<"El precio del producto es: "<< total;
	
	return 0;

}
	

