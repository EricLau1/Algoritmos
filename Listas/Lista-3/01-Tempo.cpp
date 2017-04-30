/* 
Escreva uma função que receba por parâmetro o tempo de duração de um produto expresso em segundos e 
retorne por referência esse tempo em horas, minutos e segundos.
*/

#include <iostream>
#include <cstdlib>

using namespace std;

void tempo(int&,int&,int&);
void showTime(int&,int&,int&);

int main(int argc, char *argv[]){
	int sec = 0, min = 0, hora = 0;
	if(argc > 1) {
		try {	
		sec = atoi(argv[1]);
	/*	min = atoi(argv[2]);
		hora = atoi(argv[3]);*/
		tempo(sec,min,hora);
		showTime(sec, min, hora);
	    }catch(const char* ex) {
	    	cerr << "Erro: " << ex << endl;
		}
	}else{
		cout << "Infome quantidade de segundos: ";
		cin >> sec;
	/*	cout << "Informe quantidade de minutos: ";
		cin >> min;
		cout << "Informe a quantidade de horas: ";
		cin >> hora;*/
		tempo(sec, min, hora);
		showTime(sec,min,hora);
	}
	return 0;
}

void tempo(int &seg,int &minute,int &hour) {
	if(seg > 59) { // se segundos for 60  = 1 minuto
		for(int i = seg; i > 59; i -= 60) {
			seg -= 60; // retira 60 segundos da variavel 
			minute += 1 ; // adiciona 1 a variavel minuto
		}
	} 
	if(minute > 59){ // se minutos for 60 = 1hora
		for(int i = minute; i > 59; i -= 60) {
			minute -= 60; // retira 60 minutos
			hour += 1; // adiciona 1 a hora
		}
	}
}

void showTime(int &sec, int &min, int &hora) {
	cout <<"Segundos: " << sec << endl;
	cout << "Minutos: " << min << endl;
	cout << "Hora: " << hora << endl;
}
