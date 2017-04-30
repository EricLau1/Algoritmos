#include <iostream>

using namespace std;

float nota(float,float,float,char);
int soma(int*);
void huebr(){
	setlocale(LC_ALL,"Portuguese");
}

int main(){
	huebr();
    float n[3];
	char op;	
	for(int i = 0; i < 3; i++){
		cout << "Informe a " << i+1 << "ª nota : ";
		cin >> n[i];
	}
		cout << "\nDigite:\n\nA - Para media Aritimetica";
		cout << "\nP - Para media Ponderada\n";
		cout << "\nEscolha: ";
		cin >> op;
		switch(op){
			case 'A':{
				printf("Media Aritimetica: %.2f\n", nota(n[0],n[1],n[2],op));
				break;
			}
			case 'P':{
				printf("Media Ponderada: %.2f\n",nota(n[0],n[1],n[2],op));
				break;
			}
			default : {
				cout << "Valor invalido" << endl;
				break;
			}
		}
	
	return 0;
}

float nota(float a, float b, float c, char e) {
	if(e == 'A') {
		return  (a+b+c)/3;
	}else {
		int p[3];
		p[0] = 5;
		p[1] = 3;
		p[2] = 2;
		return ((a*p[0]) + (b * p[1]) + (c * p[2])) / soma(p);
	}
}

int soma(int *v){
	int s = 0;
	for(int i=0; i<3; i++){
		s += v[i];
	}
	return s;
}

