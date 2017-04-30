#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	cout << "Exercicio VII\n" << endl;
	
	cout << "Sabe-se que um ponteiro pode ser acessado como um vetor. Supondo um ponteiro com o nome y e o\n"
	     << "seguinte comando na notação de ponteiro: *(y+4) = *(y+2) - 3;. Qual seria o comando equivalente em\n"
	     << "notação de vetor (subscrito) para a expressão dada?\n"<< endl;

    cout << "Resposta: " << endl;
    cout << "y[4] = y[2] - 3;" <<endl;

    cout << "\nExemplo:\n" <<endl;
    int vet[5] = {10,20,30,40,50};
    int *y = vet;
    cout << "valor de y[0] = "<< y[0] <<endl;
    cout << "valor de y[4] = " << *(y + 4) << endl;
    cout << "valor de y[2] = " << *(y + 2) << endl;
    //*(y + 4) = *(y + 2) - 3; //notação de ponteiro faz o mesmo que a expressão abaixo
	y[4] = y[2] - 3; // notação de vetor
    cout << "valor de *(y + 4) = (y + 2) - 3 é igual à: " << y[4] << endl; 
    
    return 0;
}
