#include <iostream>
#include <stdlib.h>
#include <stdio.h>
/*
Considere que a fun��o troca � uma fun��o que permuta o valor de uma vari�vel 
do tipo double por outra, ambas passadas por refer�ncia. Defina uma fun��o main ]
que leia tr�s valores do tipo double e armazene-os nas vari�veis a, b e c. Ao final, 
a fun��o main dever� mostrar os valores em ordem crescente, de tal forma que a<=b<=c.
A fun��o main deve chamar a fun��o troca.

*/

using namespace std;

void troca(double&,double&,double&);

int main(int argc, char *argv[]) {
	double a, b, c;
	if(argc > 3) {
		a = strtod(argv[1],NULL);
		b = strtod(argv[2],NULL);
		c = strtod(argv[3],NULL);
		printf("Numeros={%.1f, %.1f, %.1f}\n", a, b, c);
		troca(a,b,c);
	}else {
		cout << "Digite um valor para (a): ";
		cin >> a;
		cout << "Digite um valor para (b): ";
		cin >> b;
		cout << "Digite um valor para (c): ";
		cin >> c;
		printf("Numeros={%.1f, %.1f, %.1f}\n", a, b, c);
		troca(a,b,c);
	}
	
	return 0;
}

void troca(double &a,double &b, double &c) {
	double aux;
	double vet[3] = {a,b,c};
	for(int i = 0; i < 2; i++){
		for(int j = i + 1; j < 3; j++){
			if(vet[i] > vet[j]) {
				aux = vet[i];
				vet[i] = vet[j];
				vet[j] = aux;
			}
		}
	}
	printf("Troca={%.1f, %.1f, %.1f}\n",vet[0],vet[1],vet[2]);
}
