#include <iostream>
using namespace std;

int main(){
	int listaVelha[7] = {1,5,25,65,98,101,220};
	int lote[4] = {1, 65, 101, 220};
	
	int novaLista[7 - 4];
	
	int i = 0, j = 0, k = 0;
	
	while(j < 4){
		if(listaVelha[i] != lote[j]){
		   novaLista[k] = listaVelha[i];
		   k++;
		}
		cout << lote[j] << " <~~ removido" << endl;
		i++;
		j++;
	}
	
	while(i < 7){
		novaLista[k] = listaVelha[i];
		i++;
		k++;
	}
	
	cout << "\nLista Atualizada" << endl;
	for(int i = 0; i <= 7 - 4; i++){
		cout << i << " ~~> " << novaLista[i] << endl;
	}
	return 0;
}
