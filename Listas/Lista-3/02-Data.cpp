/* 
Elabore uma fun��o que receba por par�metro uma data (dia, m�s e ano) e um valor 
referente a quantidade de dias que dever�o ser somados a data recebida. 
A fun��o deve retornar (por refer�ncia) a nova data.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void modifyData(int,int&,int&,int&);
void showData(int&,int&,int&);

int main(int argc, char *argv[]) {
	
	int dia = 0, mes = 0, ano = 0;
	int dias;
    if(argc > 3) {
    	try {
    		dias = atoi(argv[1]);
    		dia = atoi(argv[2]);
    		mes = atoi(argv[3]);
    		ano = atoi(argv[4]);
    		modifyData(dias,dia,mes,ano);
    		showData(dia,mes,ano);
		}catch(const char* ex){
			cerr << "Erro: " << ex << endl;
		}
	}else{
	    printf("Informe o dia: ");
	    scanf("%d",&dia);
	    printf("Informe o mes: ");
	    scanf("%d",&mes);
	    printf("Informe o ano: ");
	    scanf("%d",&ano);
	    printf("Informe uma quantidade de dias para ser adicionado a data informada: ");
	    scanf("%d",&dias);
	    modifyData(dias,dia,mes,ano);
	    showData(dia,mes,ano);
	}
	
	return 0;
}

void modifyData(int dias, int &day, int &month, int &year) {
	day += dias;
	if(day > 364) {
		for(int i = day; i > 364; i -= 365){
			day -= 365;
			year++;
		}
	}
	
	if(day > 29) {
		for(int i = day; i > 29; i -= 30){
			day -= 30;
			month++;
		}
	}
	
}

void showData(int &day, int &mon, int &year){
	printf("**********************\nData=[%d/ %d/ %d]\n**********************\n", day, mon, year);
}

