#include <iostream>
using namespace std;

int main(){
	
	int Dados[10][2]; // a primeira coluna guarda o valor/chave e a segunda guarda o estado logico  1 == Excluido, 0 == Não Excluido
		// Arquivo Dados guarda os valores Desordenados
	Dados[0][0] = 5; //valor
	Dados[0][1] = 0; //não excluido
	
	Dados[1][0] = 3; //valor
	Dados[1][1] = 0; //não excluido
	
	Dados[2][0] = 10; //valor
	Dados[2][1] = 0; //não excluido
	
	Dados[3][0] = 21; //valor
	Dados[3][1] = 0;  //não excluido
	
	Dados[4][0] = 1; //valor
	Dados[4][1] = 0; //não excluido
	
	Dados[5][0] = 11; //valor
	Dados[5][1] = 0; //não excluido
	
	int j = 0;
	int fim = 5;
	cout << "Arquivo de Dados" << endl;
	cout << "Posicao\tValor\tStatus\t" << endl;
	for(int i = 0; i<= fim; i++){
		cout << i << "\t" << Dados[i][j] << "\t";
		j++;
		cout << Dados[i][j] << endl;		
		j = 0;
	}
	
	int Indice[10][2]; // Indice guarda o valor na coluna 0 e o endereço na coluna 1 
	// Arquivo Indice guarda os valores Ordenados
	Indice[0][0] = 1; //valor
	Indice[0][1] = 4; //endereço fisico
	
	Indice[1][0] = 3; //valor
	Indice[1][1] = 1; // endereço
	
	Indice[2][0] = 5; //valor
	Indice[2][1] = 0; //endereço
	
	Indice[3][0] = 10; //valor
	Indice[3][1] = 2;  //endereço
	
	Indice[4][0] = 11; //valor
	Indice[4][1] = 5;  //endereço
	
	Indice[5][0] = 21; //valor
	Indice[5][1] = 3; // endereço
	
	int cod;
	cout << "Informe a chave que sera encontrada: ~~> ";
	cin >> cod;
	
	// Encontrar a chave usando o Arquivo de Indice, utilizando a Busca Binaria
	int inicio = 0;
	int final = fim;
	int meio = (inicio + fim) / 2;
	while(inicio < final && cod != Indice[meio][0]){
		if(cod > Indice[meio][0]){
			inicio = meio + 1;
		}else{
			final = meio - 1;
		}
		meio = (final + inicio) / 2;
	}
	
	j = Indice[meio][1];
	
	if(cod == Dados[j][0]){
		cout << Dados[j][0] << " encontrado na posicao " << Indice[meio][1];
	}else{
		cout << "Nao encontrado..." << endl;
	}
	
	return 0;
}
