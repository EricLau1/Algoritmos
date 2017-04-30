#include <iostream>
#include <math.h>

using namespace std;

double raio(double);

int main(){
	int r;
	cout << "Informe o raio : ";
	cin >> r;
	
	cout << "Volume = " << raio(r);
	return 0;
}

double raio(double r){
	const double PI = 3.14159;
	return (4/3) *(PI)*(pow(r,3));
}


