#include <iostream>

using namespace std;

struct Cliente{
	int cod;
	string nome;
};

int main(){
	Cliente matriz[12][1] = {{2, "dois"},
	                         {4 , "quatro"},
							 {6 , "seis"},
							 {8 , "oito"},
						     {10, "dez"},
						     {12, "doze"},
						     {14, "quatorze"},
						     {16, "dezesseis"},
						     {18, "dezoito"},
						     {20, "vinte"},
						     {23, "vinte-tres"},
						     {31, "trita-um"} };
    
    cout << "Lista:" << endl;
	for(int i = 0; i < 12; i++){
		cout << "Cod: " << matriz[i][0].cod << endl;
	}						     
   
    Cliente lote[4][1] = { {3, "tres"},
                           {9, "nove"},
                           {11, "onze"},
                           {15, "quinze"} };
                           
    cout << "\nLote:" << endl;
	for(int i = 0; i < 4; i++){
		cout << "Cod: " << lote[i][0].cod << endl;
	}                       

    Cliente att[16][1];
                           
	int i = 0, j = 0, k = 0;
	while(i < 12 && j < 4){
		if(matriz[i][0].cod < lote[j][0].cod){
			att[k][0].cod = matriz[i][0].cod;
			i++;
		}else{
			att[k][0].cod = lote[j][0].cod;
			j++;
		}
		k++;
	}
	
	while(j < 4){
		att[k][0].cod = lote[j][0].cod;
		j++;
		k++;
	}
	
	while(i < 12){
		att[k][0].cod = matriz[i][0].cod;
		i++;
		k++;
	}
	
	cout << "\nNova lista: " << endl;
	for(int i = 0; i < 16; i++){
		cout << "Cod: " << att[i][0].cod << endl;
	}

}
