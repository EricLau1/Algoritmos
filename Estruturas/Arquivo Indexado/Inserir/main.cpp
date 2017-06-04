#include <iostream>
using namespace std;

int main(){
	
	int Dados[10];
	// Arquivo Dados guarda os valores Desordenados
	Dados[0] = 5;
	Dados[1] = 3;
	Dados[2] = 10;
	Dados[3] = 21;
	Dados[4] = 1;
	Dados[5] = 11;
	
	int fim = 5;
	cout << "Arquivo de Dados" << endl;
	cout << "Valor\tPosicao" << endl;
	for(int i = 0; i <= fim; i++){
		cout << Dados[i] << "\t" << i << endl;
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
	
	int j = 0;
	cout << "\nArquivo de Indice" << endl;
	cout << "Valor\tEndereco Fisico" << endl;
	for(int i = 0; i <= fim; i++){	
	   cout << Indice[i][j];
	   j++;
	   cout << "\t" << Indice[i][j] << endl;
       j = 0;
	}
	

	fim++;
	cout << "\nAdicionar um novo valor: ~~> ";
	cin >> Dados[fim]; // o dados é adicionado ao final do arquivo
	
	// No arquivo de indice o novo valor precisa entrar ordenado
	
	int aux = fim - 1;
	
	while(aux >= 0 && Dados[fim] < Indice[aux][0]){ // Equanto o novo valor for menor que o valor que esta na posicao aux - 1
	    // O valor que esta em aux - 1 precisa deslocar para uma posicao a frente
		Indice[aux + 1][0] = Indice[aux][0];
		Indice[aux + 1][1] = Indice[aux][1];
		aux--;
	} 
	
	Indice[aux + 1][0] = Dados[fim];
	Indice[aux + 1][1] = fim;
	
	cout << "\nArquivo de Indice" << endl;
	cout << "Valor\tEndereco Fisico" << endl;
	for(int i = 0; i <= fim; i++){	
	   cout << Indice[i][j];
	   j++;
	   cout << "\t" << Indice[i][j] << endl;
       j = 0;
	}
	
	return 0;
}
