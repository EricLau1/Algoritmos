#include <iostream>
using namespace std;

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	char opcao;
	
	cout << "Exercicio II\n" << endl;
	cout << "Assumindo que pulo1[] é uma matriz de uma dimensão (vetor) tipo int," << endl;
	cout << "quais das seguintes expressões referenciam o valor do terceiro elemento da estrutura apresentada?"
	     << endl << endl;
	cout << "a) *(pulo1 + 2)" << endl;
	cout << "b) *(pulo1 + 4)" << endl;
	cout << "c) pulo1 + 4" << endl;
	cout << "d) pulo1 + 1" << endl;
	cout << "\nEscolha: ";
	cin >> opcao;
	
	
	if(opcao == 'a') {
		int pulo1[5]={1,2,3,4,5};
		
		cout << "Acertou!" << endl;
		cout << "Assumindo que *pulo1 é a posição 0 do vetor" << endl;
		cout << "valor de *pulo1 = " << *pulo1 << endl;
		cout << "*(pulo1 + 2) se refere a 3ª posição do vetor" << endl;
		cout << "valor de *(pulo1 + 2) = " << *(pulo1 + 2) << endl;
	}else{
		cout << "Resposta Errada!" << endl;
		cout << "A letra (a) é a resposta certa." << endl;
	}
	
	
	return 0;
}
