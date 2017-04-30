#include <iostream>

using namespace std;

double celsius(double);

int main(){
	double fah;
	
	cout << "Informe a temperatura em Fahrenheit: ";
	cin >> fah;
	
	cout << fah << " Fahrenheit eh: " << celsius(fah) << " celsius " << endl;
	
	return 0;
}

double celsius(double f){
	return (f - 32) * ((double)5/9);
}
