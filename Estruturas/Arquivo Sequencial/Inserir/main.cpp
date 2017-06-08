#include <iostream>
using namespace std;

int main(){
	
	int listaVelha[7] = {1,5,25,65,98,101,220};
	int lote[4] = {2,60,79,80};
	
	int novaLista[11];
	
	int i = 0, j = 0, k = 0;
	
	while(i < 7 && j < 4){
		if(listaVelha[i] < lote[j]){
			novaLista[k] = listaVelha[i];
			i++;
		}else{
			novaLista[k] = lote[j];
			j++;
		}
		k++;
	}
	
	while(i < 7){
		novaLista[k] = listaVelha[i];
		i++;
		k++;
	}
	
	while(j < 4){
		novaLista[k] = lote[j];
		j++;
		k++;
	}
	
	cout << "\nNova Lista Ordenada: ";
	for(int i = 0; i < 11; i++){
		cout << i << "~~> " << novaLista[i] << endl;
	}
	return 0;
}
