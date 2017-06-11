// AlgoritmosII : Arquivo Indexado
// Estrutura feita com Menu e Structs
// Autor: Eric Lau de Oliveira
// Análise e Desenvolvimento de Sistemas 2º Ano - FEMA
#include <iostream>
using namespace std;

#define SIZE 10

struct Usuario{
	int codigo;
	string nome;
	char status;
};

struct Index {
	int chave;
	int endereco;
};

Usuario Lista[SIZE];
Index Indice[SIZE];
int fim = -1;

void Inserir();
void Remover();
void Buscar();
void Atualizar();
void Imprima(Usuario*);
void Imprima(Index*);

void MENU();
void Arquivos(char);
int BuscaBinaria(int);

int main(){
	
	MENU();
	
	return 0;
}

void MENU(){
	char opcao = ' ';
	while(opcao != 'S'){
		
		cout << "Arquivo Indexado\n" << endl;
		
		cout << "1~> Inserir()" << endl;
		cout << "2~> Mostrar Arquivos*" << endl;
		cout << "3~> Remover()" << endl;
		cout << "4~> Buscar()" << endl;
		cout << "5~> Atualizar()" << endl;
		
		cout << "\nEscolha: ~~> ";
		cin >> opcao;
		
		system("cls");
		Arquivos(opcao);
		system("cls");
	}
}

void Arquivos(char opcao){
	switch(opcao){
		case '1':{
			Inserir();
			break;
		}
		case '2':{
			if(fim != -1){
				Imprima(Lista);
				Imprima(Indice);
			}else{
				cout << "Arquivos vazios" << endl;
			}
			break;
		}
		case '3':{
			Remover();
			break;
		}
		case '4':{
			Buscar();
			break;
		}
		case '5':{
			Atualizar();
			break;
		}
		default:{
			cout << "S = Sair" << endl;
			break;
		}
	}
	system("pause");
}

void Inserir(){
	if(fim < SIZE - 1){
		fim++;
		cout << "Informe o codigo: ~~> ";
		cin >> Lista[fim].codigo;
		setbuf(stdin,NULL);
		cout << "Informe o nome: ~~> ";
		getline(cin, Lista[fim].nome);
		Lista[fim].status = '0';
		cout << "Novo Usuario adicionado a Lista." << endl;
		
		if(fim == 0){
			Indice[fim].chave = Lista[fim].codigo;
			Indice[fim].endereco = fim; 
		}else{
			int aux = fim - 1;
			while(aux >= 0 && Indice[aux].chave > Lista[fim].codigo){
				Indice[aux + 1] = Indice[aux];
				aux--;
			}
			
			Indice[aux + 1].chave = Lista[fim].codigo;
			Indice[aux + 1].endereco = fim;
		}
		
	}else{
		cout << "Overflow" << endl;
	}
}

void Remover(){
	if(fim != -1){
		int chave;
		cout << "Informe a chave: ~~> ";
		cin >> chave;
		
		int posicao = BuscaBinaria(chave);
		
		if(chave == Lista[posicao].codigo){
			Lista[posicao].status = '1';
			cout << Lista[posicao].nome << " foi removido logicamente" << endl;
		}else{
			cout << "Usuario nao encontrado" << endl;
		}
	}else{
		cout << "Arquivos vazios" << endl;
	}
}

void Buscar(){
	if(fim != -1){
		int chave;
		cout << "Informe a chave: ~~> ";
		cin >> chave;
		
		int posicao = BuscaBinaria(chave);
		
		if(chave == Lista[posicao].codigo && Lista[posicao].status != '1'){
			cout << "*****************************" << endl;
			cout << "Codigo:\t" << Lista[posicao].codigo << endl;
			cout << "Nome:\t" << Lista[posicao].nome << endl;
			cout << "Status:\t" << Lista[posicao].status << endl;
			cout << "*****************************" << endl; 
 		}else{
 			cout << "Usuario nao encontrado" << endl;
		 }
	}else{
		cout << "Arquivos vazios" << endl;
	}
}

void Atualizar(){
	if(fim != -1){
		Usuario newList[SIZE];
		int count = 0;
		int i = 0, j = 0, k = -1;
		while(i <= fim){
			j = Indice[i].endereco;
			if(Lista[j].status != '1'){
				k++;
				newList[k] = Lista[j];
			}else{
				count++;
			}
			i++;
		}
		fim = k;
		cout << count << " usuarios foram removidos permanentemente" << endl;
		if(fim != -1){
			for(int i = 0; i <= fim; i++){
				Lista[i] = newList[i];
				Indice[i].chave = Lista[i].codigo;
				Indice[i].endereco = i;
			}
		}
	}else{
		cout << "Arquivos vazios" << endl;
	}
}

int BuscaBinaria(int chave){
	int inicio = 0;
	int final = fim;
	int meio = (final + inicio) / 2;
	while(inicio < fim && chave != Indice[meio].chave){
		if(chave > Indice[meio].chave){
			inicio = meio + 1;
		}else{
			final = meio - 1;
		}
		meio = (final + inicio) / 2;
	}
	return Indice[meio].endereco;
}

void Imprima(Usuario* u){
	cout << "Usuarios = ";
	cout << "[";
	for(int i = 0; i <= fim; i++){
		if(i < fim){
		   cout << "{"; 
		   cout << Lista[i].codigo << ", ";
		   cout << Lista[i].nome << ", ";
		   cout << Lista[i].status <<"},";
	    }else{
	       cout << "{"; 
		   cout << Lista[i].codigo << ", ";
		   cout << Lista[i].nome << ", ";
		   cout << Lista[i].status <<"}";
		}
	}
	cout << "]" << endl;
}

void Imprima(Index* i){
	cout << "Index = ";
	cout << "[";
	for(int i = 0; i <= fim; i++){
		if(i < fim){
			cout << "{";
			cout << Indice[i].chave << ", ";
			cout << Indice[i].endereco << "},";
		}else{
			cout << "{";
			cout << Indice[i].chave << ", ";
			cout << Indice[i].endereco << "}";			
		}
	}
	cout << "]" << endl;
}
