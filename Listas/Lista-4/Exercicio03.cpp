#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercicio III\n" << endl;
	cout << "3. Suponha que um vetor foi declarado como int vet[3], por que podemos usar a expressão vet++?" << endl
	     <<endl;
	
	int vet[3] = {1,2,3};
	cout << "Resposta:\n";
	cout << "vet guarda o endereço de memoria da primeira posição do vetor, ou seja vet[0]" << endl;
	cout << "valor de vet[0] = " << vet[0] << endl;
	cout << "endereço de memoria de vet[0] = " << &vet[0] << endl;
	cout << "endereço de memoria de vet = " << vet << endl;
	cout << "Considerando que um int possui 4 bytes" << endl;
	cout << "Ao usar a operação vet++ o endereço de memoria assume os quatro bytes mais proximos" << endl
	    << "ou seja, a proxima posição de vet" << endl;
	cout << "O problema é que quando um vetor é declarado cada posição possui um endereço de memoria Constante" <<endl;
	cout <<"Isso não permite que o endereço do vetor seja alterado ou incrementado e o codigo nao será compilado" << endl;
	
	cout << "\nPara resolver isso irei criar um ponteiro simples" << endl;
	
	int* pvet = vet;
	cout << "int* pvet = vet" << endl;
	cout << "pvet recebeu o endereço da primeira posição do vetor " << endl;
	cout << "endereço que pvet aponta = " << pvet << endl;
	cout << "endereço da primeira posiçao do vetor = " << vet << endl;
	cout << "Agora irei incrementar o ponteiro simples: pvet++" << endl;
	pvet++;
	cout << "Endereço atualizado de pvet = " << pvet << endl;
	cout << "Endereço da segunda posiçao do vetor = " << &vet[1] << endl;
	return 0;
}
