#include <iostream>
#include <stdlib.h>
#include <stdio.h>
/* 
Faça um programa para chamar uma função que receba o salário de um funcionário, 
calcule e retorne por valor o salário a receber, sabendo-se que esse funcionário 
tem gratificação de 5% sobre seu salário base e paga 10% de imposto sobre o salário 
bruto (salário base + gratificação). O programa também deve retornar por referência 
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
