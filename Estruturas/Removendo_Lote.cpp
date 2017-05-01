#include <iostream>
using namespace std;

void imprima(int*,int);

int main(){
	
	int lista1[10] = {10,21,37,100,163,187,1000,1001,1083,10000}; //chaves na lista
	int lote[5] = {10,37,163,1083,10000}; // chaves que serão removidas
	int nova_lista[10 - 5]; // o tamanho da nova lista com  as chaves removidas
	
	int i = 0, j = 0, k = 0;
	
	cout << "Lista velha:" << endl;
	imprima(lista1,10);
	cout << "\nValores que serao removidos: " << endl;
	imprima(lote,5);
	
	while(k < 5){
		if(lista1[i] != lote[j]){
			nova_lista[k] = lista1[i];
			i++;
			k++;
		}else{
			i++;
			j++;
		}
	}
	
	cout << "\nNova Lista:" <<endl;
	imprima(nova_lista,5);
	
	
	return 0;
}

void imprima(int* vet,int MAX){
	for(int i = 0; i < MAX; i++){
		cout << vet[i] << endl;
	}
}
