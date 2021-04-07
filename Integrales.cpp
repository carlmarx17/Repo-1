#include<iostream>
#include<cmath>

double trapecio(double a,double b,int npart);
double f(double x);


int main(int argc, char *argv[]) {
	std::cout << trapecio(0, 2*M_PI,10) << "\n";
	std::cout << trapecio(0, 2*M_PI,100) << "\n";
	
	return 0;
}

double f(double x){
	return std::1.0/(sinx+1.0);
}

double trapecio(double a, double b, int npart) {
 		double h=(b-a)/npart;
 		double sum = 0.0;
 		double x=0.0;
		for ( int ii = 1; ii < npart; ++ii){
			x = a + ii*h;
			sum += f(x);
		}
	
		sum += 0.5*(f(a) + f(b));
		sum *= h;
		return sum;
}	
