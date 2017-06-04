#include <iostream>
using namespace std;

int main(){
	
	int Dados[10][2]; // a primeira coluna guarda o valor/chave e a segunda guarda o estado logico  1 == Excluido, 0 == Não Excluido
		// Arquivo Dados guarda os valores Desordenados
	Dados[0][0] = 5; //valor
	Dados[0][1] = 1; //excluido
	
	Dados[1][0] = 3; //valor
	Dados[1][1] = 0; //não excluido
	
	Dados[2][0] = 10; //valor
	Dados[2][1] = 0; //não excluido
	
	Dados[3][0] = 21; //valor
	Dados[3][1] = 1;  //excluido
	
	Dados[4][0] = 1; //valor
	Dados[4][1] = 1; //excluido
	
	Dados[5][0] = 11; //valor
	Dados[5][1] = 0; //não excluido
	
	int fim = 5;
	
	for(int i = 0; i <= fim; i++){
		if(Dados[i][1] == 0) // imprime apenas se o valor não foi excluido logicamente
		  cout << Dados[i][0] << endl;
	}
	
	return 0;
}
