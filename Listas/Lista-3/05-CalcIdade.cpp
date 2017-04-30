#include <iostream>
#include <cstdlib>
#include <locale.h>

/*
Elabore um programa que chama uma função calcIdade, que recebe um parâmetro que
indica a quantidade de idade de pessoas que devem ser lidas, calcular e retornar:

a. A soma de idade das pessoas com mais de 70 kg (retorno de valor);
b. A quantidade de pessoas com mais de 50 anos (referência);
c. O percentual de pessoas com mais de 65 anos e menos de 75 kg (referência).
 
*/

using namespace std;

struct pessoa {
	int idade;
	float peso;
};

int calcIdade(int,int&,float&);

int main(int argc, char *argv[]) {
	
	setlocale(LC_ALL,"");
    int x;
	int soma70kg = 0;
	int qtd50 = 0;
	float perc = 0;
		
	if(argc > 1) {
		x = atoi(argv[1]);
		soma70kg = calcIdade(x, qtd50, perc);
		cout << x << " pessoas foram lidas" << endl;
		cout << "Soma da idade das pessoas com mais de 70kg: " << soma70kg << endl;
		cout << "Quantidade de pessoas com mais de 50 anos: " << qtd50 << endl;
		cout << "Percentual de pessoas com mais 65 anos e menos de 75kg: " << perc << "%" << endl; 
	}else {
		cout << "Digite a quantidade de pessoas que irão ser lidas: ";
		cin >> x;
		soma70kg = calcIdade(x, qtd50, perc);
		printf("Soma da idade das pessoas com mais de 70kg: %d\n", soma70kg);
		printf("%d com mais de 50 anos\n",qtd50);
		printf("%.2f porcento das pessoas tem mais de 65 anos e menos de 75kg\n", perc);
	}
	return 0;
}

int calcIdade(int x, int &qtd, float &perc) {
	pessoa vet[x];
	int count = 0;
	int soma = 0;
	
	for(int i = 0; i < x; i++){
		count++; // soma todas as pessoas 
		
		cout << "Informe a idade: ";
		cin >> vet[i].idade;
		cout << "Informe o peso: ";
		cin >> vet[i].peso;
		
		if(vet[i].peso > 70) {
			soma += vet[i].idade; // soma das idades das pessoas com mais de 70kg
		}
		
		if(vet[i].idade > 50) {
			qtd++; // quantidade de pessoas com mais de 50 anos
		}
		
		if(vet[i].idade > 65 && vet[i].peso < 75) {
			perc++; // pessoas com mais de 65 anos e com menos de 75kg
		}
	}//end for
	
	perc /= count;
	perc *= 100;
	
	return soma;
}//end func


