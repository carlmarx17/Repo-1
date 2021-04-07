#include<iostream>

int main(){
	int numero, dato = 5;
	
	std::cout<<"Digite un numero: ";
	std::cin>>numero;
	
	if(numero == dato){
		std::cout<<"el numero es  igual a 5";
	
	}
	else{
		
		if(numero < dato){
			std::cout<<"El numero es menor que 5";
		}
	
		else{
		std::cout<<"El numero es mayor que 5";
		}
	}
	
	
	return 0;
	
}
		
