#include <iostream>

using namespace std;

double somatorio(int);

int main(){
	int n;
	cout << "Informe um numero: ";
	cin >> n;
	
	cout << "Somatorio: " << somatorio(n) << endl;
	return 0;
}

double somatorio(int n){
	double s = 1;
	const int um = 1;
	for(int i = 2; i <= n; i++){
		s += (double) um/i;
	}
	return s;
}
