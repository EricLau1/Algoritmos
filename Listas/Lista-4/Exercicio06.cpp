#include <iostream>
using namespace std;

const double func_PI();
string mensagem(const string);

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercicio VI\n" << endl;
	cout << "6. Em rela��o � utiliza��o do comando const qual a import�ncia" 
	    << "de utilizar este comando ao definir fun��es e par�metros. D� exemplos.\n" <<endl;
	
	cout << "Resposta:" << endl;
	cout << "const significa que o valor nao poder� ser alterado" << endl;
	cout << "exemplo de uma fun��o usando const: " << endl;
	cout << "func_PI(): " << func_PI() <<endl; 
	//double x = ++func_PI(); // fun��o nao poder ser alterada pois retorna um valor constante
	double x = func_PI() + 1; // ultiliza o valor constante que a fun�ao retorna e soma a outra valor
	cout << "exemplo de uma fun��o com parametro const:" << endl;
	cout << mensagem("hello word!") << endl;

	return 0;
}

const double func_PI(){
	return 3.14159;
}

string mensagem(const string frase){
	//frase += "chuva"; frase nao pode ser alterada pois � constante
	string chuva = frase + " hoje est� chovendo";
	return frase;
}
