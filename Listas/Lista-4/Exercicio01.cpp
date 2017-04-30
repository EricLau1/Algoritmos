#include <iostream>

using namespace std;

/* 
Escreva um programa em C++ para:

- função principal: ler um vetor de inteiros com 10 elementos e 
  chamar duas funções e imprimir os seus respectivos resultados conforme definições abaixo;

- função menval: recebe o vetor por parâmetro, o parâmetro recebido é um ponteiro para inteiro.
  A função deve executar o vetor como se fosse um ponteiro (notação de ponteiros v++ e *v) e 
  retornar o menor valor presente no vetor (o valor pode ser retornado por ponteiro ou 
  simplesmente por meio de retorno de valores);

- a função media: recebe o vetor por meio de ponteiro e manipula o mesmo como sendo um vetor (v[0], etc.). 
  O resultado da média pode ser retornado por retorno de função ou por meio de ponteiro
*/

void ler(int*);
int menval(int*);
void calc_media(int*,float*);

int main(){
	int vetor[10];
	float media;
	ler(vetor);
	
	cout << "Menor valor: " << menval(vetor) << endl;
	 calc_media(vetor,&media);
	cout << "Media: " <<media<< endl;
	return 0;
}

int menval(int* vetor){
    int	menor = *vetor;
    for(int i = 1; i < 10; i++){
    	if(*vetor < menor)
    	  menor = *vetor;
    	  vetor++;
	}
	return menor;
}

void calc_media(int* vetor,float *m){
	*m = 0;
	for(int i = 0; i < 10; i++){
		*m += vetor[i];
	}
	*m /= 10;
}

void ler(int *vetor){
	for(int i = 0; i < 10; i++){
		cout << "Informe vetor[" << i << "]: ";
		cin >> vetor[i];
	}
}
