#include <iostream>
#include <stdlib.h>
#include <stdio.h>
/* 
Fa�a um programa para chamar uma fun��o que receba o sal�rio de um funcion�rio, 
calcule e retorne por valor o sal�rio a receber, sabendo-se que esse funcion�rio 
tem gratifica��o de 5% sobre seu sal�rio base e paga 10% de imposto sobre o sal�rio 
bruto (sal�rio base + gratifica��o). O programa tamb�m deve retornar por refer�ncia 
o valor do imposto devido.
*/

using namespace std;

float calcSalario(float&);

int main(int argc, char *argv[]) {
	float salario;
	if(argc > 1) {
		salario = atof(argv[1]);
		salario = calcSalario(salario);
	    cout << "Salario +5% Bonus -10% Imposto: " << salario <<" R$"<< endl;
	}else{
		cout << "Informe salario: ";
		cin >> salario;
		salario = calcSalario(salario);
		printf("Salario (+5 porcento bonus)(-10 porcento Imposto): %.2f R$",salario);
	}
	return 0;
}

float calcSalario(float &sal) {
	sal -= sal * 0.1;
	sal += sal * 0.05;
	return sal;
}
