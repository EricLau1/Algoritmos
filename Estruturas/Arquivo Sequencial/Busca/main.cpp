#include <iostream>
using namespace std;

int main(){
	
	int vetor[10] = {0,11,14,17,26,34,42,53,69,90};
	
	// imprimindo vetor
	cout << "{";
	for(int i = 0; i < 10; i++){
		if(i < 9){
		  cout << vetor[i] << ", ";
	    }else{
	      cout << vetor[i];	
		}
	}
	cout << "}";
	
	int codigo;
	cout << "\n\nBusca Binaria: ~~> ";
	cin >> codigo;
	
	int inicio = 0;
	int final = 9;
	int meio = (inicio + final) / 2;
	while(inicio < final && codigo != vetor[meio]){
		if(codigo > vetor[meio]){
			inicio = meio + 1;
		}else{
			final = meio -1;
		}
		meio = (inicio + final) / 2;
	}
	
	if(codigo == vetor[meio]){
		cout << codigo << " encontrado na posicao ~~> " << meio << endl;
	}else{
		cout << codigo << " nao encontrado." << endl;
	}
	
}
