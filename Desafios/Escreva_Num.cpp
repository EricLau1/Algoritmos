#include <iostream>

/* 
  Algoritmo - Digite um valor em R$ 
  Ex: 25,56
  E faça o computador escreve-lo por extenso 
  Ex: vinte e cinco reais e cinquenta e seis centavos
*/

using namespace std;

void escreva(int,const char*,const char*);
int digitos(const char*);
void ignore_pontos(char*,char*,char*);
bool zeros(const char*);
string func1(const char*);
string func2(const char*);
string func3(const char*);
string func4(const char*);
string func5(const char*);
string func6(const char*);
string func7(const char*);
string autor();

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	char valor[100]; // valor máximo a ser digitado $ 9.999.999,99
	char aux[100];
	char centavos[3];
		
	//É necessario colocar a virgula para separar os centavos, para que funcione
	//começar numeros com zeros pode causar inconcistencias!
	cout << "Informe um valor em R$: ";
    cin >> aux;
	while(digitos(aux) < 20){	
       ignore_pontos(aux,valor,centavos);
       escreva(digitos(valor),valor,centavos);
       cout << endl;
	   cout << "Informe um valor em R$: ";
       cin >> aux;  
    }
    system("cls");
    cout << autor() << endl;
	return 0;
}//fim main

string func7(const char* vetor){
	string value = func1(vetor);
	char a1[3],a2[2];
	
	a1[0] = vetor[1];
	a1[1] = vetor[2];
	a1[2] = vetor[3];
	
	a2[0] = vetor[4];
	a2[1] = vetor[5];
	a2[2] = vetor[6];
	
	value += "milhões ";
	if(zeros(a1)){
		value += "e ";
		value += func3(a1);
		value += "mil ";
	}
	
	if(zeros(a2)){
		value += "e ";
		value += func3(a2);
	}
	
	if(!zeros(a1) && !zeros(a2)){
		value = func1(vetor);
		value += "milhão ";
	}
	
	return value;
}

string func6(const char* vetor){
	string value = func3(vetor);
	char aux[3];
	aux[0] = vetor[3];
	aux[1] = vetor[4];
	aux[2] = vetor[5];
	value += "mil ";
	if(aux[0] != '0' || aux[1] != '0' || aux[2] != '0'){
		value += "e ";
		value += func3(aux);
	}
	return value;
}//fim func6

string func5(const char* vetor){
	string value = func2(vetor);
	char aux[3];
	aux[0] = vetor[2];
	aux[1] = vetor[3];
	aux[2] = vetor[4];
	value += "mil ";
	if(aux[0] != '0' || aux[1] != '0' || aux[2] != '0'){
		value += "e ";
		value += func3(aux);
	}
	return value;
}//fim func5

string func4(const char* vetor){
	string value = func1(vetor);
	char aux[3];
	aux[0] = vetor[1];
	aux[1] = vetor[2];
	aux[2] = vetor[3];
    value += "mil ";
	if(vetor[1] != '0' || vetor[2] != '0' || vetor[3] != '0'){
		value += "e ";
		value += func3(aux);
	}
	return value;
}

string func3(const char* vetor){
	string value;
	char aux[3];
	aux[0] = vetor[1];
	aux[1] = vetor[2];

	switch(vetor[0]){
		case '0':{
			value += func2(aux);
			break;
		}//fim case '0'
		case '1':{
			value = "cem ";
			if(vetor[1] != '0' || vetor[2] != '0'){
				value = "cento e ";
				value += func2(aux);
			}
			break;
		}//fim case '1'
		case '2':{
			value = "duzentos ";
			if(vetor[1] != '0' || vetor[2] != '0'){
				value += "e ";
				value += func2(aux);
			}
			break;
		}//fim case '2'
		case '3':{
			value = "trezentos ";
			if(vetor[1] != '0' || vetor[2] != '0'){
				value += "e ";
				value += func2(aux);
			}
			break;
		}//fim case '3'
		case '4':{
			value = "quatrocentos ";
			if(vetor[1] != '0' || vetor[2] != '0'){
				value += "e ";
				value += func2(aux);
			}
			break;
		}//fim case '4'
		case '5':{
			value = "quinhentos ";
			if(vetor[1] != '0' || vetor[2] != '0'){
				value += "e ";
				value += func2(aux);
			}
			break;
		}//fim case '5'
		case '6':{
			value = "seiscentos ";
			if(vetor[1] != '0' || vetor[2] != '0'){
				value += "e ";
				value += func2(aux);
			}
			break;
		}//fim case '6'
		case '7':{
			value = "setecentos ";
			if(vetor[1] != '0' || vetor[2] != '0'){
				value += "e ";
				value += func2(aux);
			}
			break;
		}//fim case '7'
		case '8':{
			value ="oitocentos ";
			if(vetor[1] != '0' || vetor[2] != '0'){
				value += "e ";
				value += func2(aux);
			}
			break;
		}//fim case '7'
		case '9':{
			value = "novecentos ";
			if(vetor[1] != '0' || vetor[2] != '0'){
				value += "e ";
				value += func2(aux);
			}
			break;
		}//fim case '9'
	}//fim switch
	return value;
}//fim func3

string func2(const char* vetor){
	string value;
	char aux[2];
	aux[0] = vetor[0];
	aux[1] = vetor[1];
	
	switch(vetor[0]){
		case '0':{
			aux[0] = aux[1];
			return func1(aux);
		}
		case '1':{
		    switch(vetor[1]){
		        case '0': return "dez ";
				case '1': return "onze ";
				case '2': return "doze ";
				case '3': return "treze ";
				case '4': return "quatorze ";
				case '5': return "quinze ";
				case '6': return "dezesseis ";
				case '7': return "dezessete ";
				case '8': return "dezoito ";
				case '9': return "dezenove"; 	
			}//fim switch
		}//fim case '1'
		case '2':{
			value = "vinte ";
			if(vetor[1] != '0'){
			  value += "e ";
			  aux[0] = aux[1];
			  value += func1(aux);	
			}
			break;
		}//fim case '2'
		case '3':{
			value = "trinta ";
			if(vetor[1] != '0'){
				value += "e ";
				aux[0] = aux[1];
				value += func1(aux);
			}
			break;
		}//fim case '3'
		case '4':{
			value = "quarenta ";
			if(vetor[1] != '0'){
				value += "e ";
				aux[0] = aux[1];
				value += func1(aux);
			}
			break;
		}//fim case '4'
		case '5':{
			value = "cinquenta ";
			if(vetor[1] != '0'){
				value += "e ";
				aux[0] = aux[1];
				value += func1(aux);
			}
			break;
		}//fim case '5'
		case '6':{
			value = "sessenta ";
			if(vetor[1] != '0'){
				value += "e ";
				aux[0] = aux[1];
				value += func1(aux);
			}
			break;
		}//fim case '6'
		case '7':{
			value = "setenta ";
			if(vetor[1] != '0'){
				value += "e ";
				aux[0] = aux[1];
				value += func1(aux);
			}
			break;
		}//fim case '7'
		case '8':{
			value = "oitenta ";
			if(vetor[1] != '0'){
				value += "e ";
				aux[0] = aux[1];
				value += func1(aux);
			}
			break;
		}//fim case '8'
		case '9':{
			value = "noventa ";
			if(vetor[1] != '0'){
				value += "e ";
				aux[0] = aux[1];
				value += func1(aux);
			}
			break;
		}// fim case '9'
	}//fim swtich
	return value;
}//fim func2

string func1(const char* vetor){
	switch(vetor[0]){
		case '0': return "";
		case '1': return "um ";
		case '2': return "dois ";
		case '3': return "três ";
		case '4': return "quatro ";
		case '5': return "cinco ";
		case '6': return "seis ";
		case '7': return "sete ";
		case '8': return "oito ";
		case '9': return "nove "; 
	}//fim swtich
	return "zero ";
}//fim func 1

void ignore_pontos(char* aux, char* vetor, char* centavos){
	int j = 0;
	int i;
	for(i = 0; aux[i] != '\0'; i++) {
		if(aux[i] != '.'){
			vetor[j] = aux[i];
			j++;
		}
		if(aux[i] == ',') break;  
	}
	centavos[0] = aux[i + 1];
	centavos[1] = aux[i + 2];
	centavos[2] = ',';
}

int digitos(const char* vetor){ // função retorna a quantidade de numeros existentes antes da virgula
	int dig = 0;
	for(int i = 0; vetor[i] != ','; i++){
		if(vetor[i] != '.')
		  dig++;
	}
	return dig;
}

bool zeros(const char* vetor){
	for(int i = 0; i < 3; i++){
		if(vetor[i] == ',') break;
		if(vetor[i] != '0')
		  return true;
	}
	return false;
}


void escreva(int digitos,const char* valor,const char* cent){
		
	if(digitos == 1){
		cout << func1(valor) << "reais e ";
		if(zeros(cent))
		  cout << func2(cent);
		else
		  cout << "zero ";
	    cout << "centavos " << endl;
		
	}else if(digitos == 2){
		cout << func2(valor) << "reais e ";
		if(zeros(cent))
		  cout << func2(cent);
		else
		  cout << "zero ";  
	    cout << "centavos " << endl;
	    
	}else if(digitos == 3){
		cout << func3(valor) << "reais e ";
		if(zeros(cent))
		  cout << func2(cent);
		else
		  cout << "zero ";
	    cout << "centavos " << endl;
	}else if(digitos == 4){ 
	    cout << func4(valor) << "reais e ";
		if(zeros(cent))
		  cout << func2(cent);
		else
		  cout << "zero ";
	    cout << "centavos " << endl;
		 
	}else if(digitos == 5){
		cout << func5(valor) << "reais e ";
		if(zeros(cent))
		  cout << func2(cent);
		else
		  cout << "zero ";
	    cout << "centavos " << endl;
	    
	}else if(digitos == 6){
		cout << func6(valor) << "reais e ";
		if(zeros(cent))
		  cout << func2(cent);
		else
		  cout << "zero ";
	    cout << "centavos " << endl;
	    
	}else if(digitos == 7){
		cout << func7(valor) << "reais e ";
		if(zeros(cent))
		  cout << func2(cent);
		else
		  cout << "zero ";
	    cout << "centavos " << endl;
	}else {
		cout << "Excedeu o limite de digitos!" << endl;
	}
}

string autor(){
	return "\nAlgoritmo escrito por : Eric Lau de Oliveira\n";
}
