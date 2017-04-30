#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

float peso(float,char*);

int main(){
	float altura;
	char sexo[50];
	cout << "Informe a altura: ";
	cin >> altura;
	cout << "Informe o sexo: ";
	cin >> sexo;
	cout << "Peso ideal: "<< peso(altura,sexo);
	return 0;
}

float peso(float a,char* se){
	if(strcmp(se,"masculino") == 0){
		return 72.7 * a - 58;
	}else{
		return 62.1 * a - 44.7;
	}
}
