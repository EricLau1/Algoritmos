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
	
	int j = 0;
	int fim = 5;
	cout << "Arquivo de Dados" << endl;
	cout << "Posicao\tValor\tStatus\t" << endl;
	for(int i = 0; i<= fim; i++){
		cout << i << "\t" << Dados[i][j] << "\t";
		j++;
		if(Dados[i][j] == 1){
			cout << Dados[i][j] << " Excluido logicamente" << endl;
		}else{
			cout << Dados[i][j] << endl;
		}
		
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
	
	cout << "\nArquivo de Indice" << endl;
	cout << "Valor\tEnd. Fisico" << endl;
	for(int i = 0; i <= fim; i++){	
	   cout << Indice[i][j];
	   j++;
	   cout << "\t" << Indice[i][j] << endl;
       j = 0;
	}
	
	//Um novo arquivo de Dados e de Indice precisa ser gerado para que os dados excluidos logicamente
	//agora serão excluidos permanentemente
	
	int NovaLista[10][2];
	int NovoIndice[10][2];
	
	cout << "\nAtualizando Arquivos..." << endl;
	
	int i = 0, k = 0;
	while(i <= fim){
		j = Indice[i][1]; // j recebe o endereço fisico do arquivo de Indice
		if(Dados[j][1] == 0){
			NovaLista[k][0] = Dados[j][0];
			NovaLista[k][1] = Dados[j][1];
			NovoIndice[k][0] = Dados[j][0];
			NovoIndice[k][1] = k;
			k++;
		}
		i++;
	}
	
	fim = k - 1;
	
	cout << "\nNovo Arquivo de Dados" << endl;
	cout << "Posicao\tValor\tStatus" << endl;
	j = 0;
	for(i = 0; i <= fim; i++){
		cout << i << "\t" << NovaLista[i][j] << "\t";
		j++;
		cout << NovaLista[i][j] << endl;
		j = 0;
	}
	
	cout << "\nNovo Arquivo de Dados" << endl;
	cout <<"Valor\tEnd. Fisico" << endl;
	for(i = 0; i <= fim; i++){
		cout << NovoIndice[i][j] << "\t";
		j++;
		cout << NovoIndice[i][j] << endl;
		j = 0;
	}
	
	return 0;
}
