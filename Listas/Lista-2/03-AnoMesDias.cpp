#include <iostream>
#include <conio.h>

using namespace std;

int idade(int,int,int);

int main(){
	
	int a,m,d;
	
	cout << "Informe a quantidade de anos: ";
	cin >> a;
	cout << "Informe a quantidade de meses: ";
	cin >> m;
	cout << "Informe a quantidade de dias: ";
	cin >> d;
	
	cout << "Total de dias: " << idade(a,m,d) << endl;
	return 0;
}

int idade(int ano,int mes, int dia){
	int s = (ano*365);
	s += (mes*30);
	s += dia;
	return s;
}


