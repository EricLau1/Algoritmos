#include <iostream>
using namespace std;

const double func_PI();
string mensagem(const string);

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercicio VI\n" << endl;
	cout << "6. Em relação à utilização do comando const qual a importância" 
	    << "de utilizar este comando ao definir funções e parâmetros. Dê exemplos.\n" <<endl;
	
	cout << "Resposta:" << endl;
	cout << "const significa que o valor nao poderá ser alterado" << endl;
	cout << "exemplo de uma função usando const: " << endl;
	cout << "func_PI(): " << func_PI() <<endl; 
	//double x = ++func_PI(); // função nao poder ser alterada pois retorna um valor constante
	double x = func_PI() + 1; // ultiliza o valor constante que a funçao retorna e soma a outra valor
	cout << "exemplo de uma função com parametro const:" << endl;
	cout << mensagem("hello word!") << endl;

	return 0;
}

const double func_PI(){
	return 3.14159;
}

string mensagem(const string frase){
	//frase += "chuva"; frase nao pode ser alterada pois é constante
	string chuva = frase + " hoje está chovendo";
	return frase;
}
