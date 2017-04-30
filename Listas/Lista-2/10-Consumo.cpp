#include <iostream>

using namespace std;

float consumo(float,float);

int main(){
	float litros, km;
	
	cout << "Informe a quantidade de litros: ";
	cin >> litros;
	cout << "Informe a quantidade de kilometros: ";
	cin >> km;
	
	cout << "Consumo total de gasolina: "<< consumo(km,litros);
	return 0;
}

float consumo(float d, float l){
	return d/l;
}
