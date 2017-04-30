#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercicio III\n" << endl;
	cout << "3. Suponha que um vetor foi declarado como int vet[3], por que podemos usar a express�o vet++?" << endl
	     <<endl;
	
	int vet[3] = {1,2,3};
	cout << "Resposta:\n";
	cout << "vet guarda o endere�o de memoria da primeira posi��o do vetor, ou seja vet[0]" << endl;
	cout << "valor de vet[0] = " << vet[0] << endl;
	cout << "endere�o de memoria de vet[0] = " << &vet[0] << endl;
	cout << "endere�o de memoria de vet = " << vet << endl;
	cout << "Considerando que um int possui 4 bytes" << endl;
	cout << "Ao usar a opera��o vet++ o endere�o de memoria assume os quatro bytes mais proximos" << endl
	    << "ou seja, a proxima posi��o de vet" << endl;
	cout << "O problema � que quando um vetor � declarado cada posi��o possui um endere�o de memoria Constante" <<endl;
	cout <<"Isso n�o permite que o endere�o do vetor seja alterado ou incrementado e o codigo nao ser� compilado" << endl;
	
	cout << "\nPara resolver isso irei criar um ponteiro simples" << endl;
	
	int* pvet = vet;
	cout << "int* pvet = vet" << endl;
	cout << "pvet recebeu o endere�o da primeira posi��o do vetor " << endl;
	cout << "endere�o que pvet aponta = " << pvet << endl;
	cout << "endere�o da primeira posi�ao do vetor = " << vet << endl;
	cout << "Agora irei incrementar o ponteiro simples: pvet++" << endl;
	pvet++;
	cout << "Endere�o atualizado de pvet = " << pvet << endl;
	cout << "Endere�o da segunda posi�ao do vetor = " << &vet[1] << endl;
	return 0;
}
