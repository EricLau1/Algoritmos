#include <iostream>

using namespace std;

 
  //ALGORITMO DE BUSCA BINÁRIA
 // Esse algoritmo so funciona caso a lista esteja ordenada 

struct Pessoa {
	int codigo;
	string nome;
};


int main(int argc, char *argv[]){
	
	Pessoa p1[10] = { {2,"Anna"}, {3,"Harry"}, {5,"Dipper"}, {7,"Sam"}, {11,"Hermione"},
	                  {13,"Morgan"}, {17,"Ronny"}, {19,"Jake"}, {21,"Finn"}, {23, "Laura"} };
    
    int cod;
    cout << "Codigo de busca: ";
    cin >> cod;
    
    int inicio,fim, meio;
    inicio = 0; // primeiro indice do vetor
    fim = 9; // ultimo indice do vetor
    meio = (fim + inicio) / 2; // media dos indices do vetor
    
    if(cod == p1[meio].codigo) {
    	cout << p1[meio].nome << " possui o codigo: " << cod << endl;
	}else{
		
		while(inicio < fim){
			if(cod > p1[meio].codigo){ // se o valor do codigo procurado for maior que o codigo calculado pelo meio
			                           // significa que o valor procurado está a frente do meio atual
			   inicio = meio + 1;  // o indice da variavel inicio é atualizada 
			}else{
				// se cod for menor, significa que o valor está antes do meio calculado
				fim = meio - 1; // o indice da variavel fim é atualizada
			}
			meio = (fim + inicio) / 2;
		}//fim while
		
		   if(cod == p1[meio].codigo){
	          cout << p1[meio].nome << " possui o codigo: " << cod << endl;	
		   }else{
		   	  cout << cod << " nao existe na lista!" << endl;
		   }
		   
	} //fim else
	       	   
	 return 0;
}
