#include <iostream>

using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercicio IV\n" << endl;
	cout << "4. Sabe-se que x é igual a 5, vet é do tipo inteiro e tem 10 elementos."
	     <<"Como referenciar o conteúdo de vet [x] utilizando a notação de ponteiro?" << endl;
    cout <<"\nResposta: "<< endl;
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};
    int x = 5;
    cout << "valor de vet[x] = " << vet[x] << endl;
    cout << "valor de vet na posição x referenciado por ponteiro *(vet + x) = " << *(vet + x) << endl;
	return 0;
}
