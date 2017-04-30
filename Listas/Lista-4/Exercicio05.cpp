#include <iostream>
using namespace std;

int main(){
	setlocale(LC_ALL, "Portuguese");
	cout << "Exercicio V\n" << endl;
	cout << "5. Dado o trecho de programa abaixo:\n" << endl;
	cout << "int i=3, j=5;\n"
	     << "int *p, *q, *r;\n"
	     << "p = &i;\n"
	     << "q = &j\n"
	     << "r = p;\n" <<endl;
	 int i = 3, j = 5;
	 int *p, *q, *r;
	 p = &i; // p recebe o endere�o de memoria de i
	 q = &j; // q recebe o endere�o de memoria de j
	 r = p;  // r recebe o endere�o de memoria de p  
	     
	cout << "Qual o valor das seguintes express�es:\n" << endl;
	cout << "a) p == &i" << endl;
	cout << "letra (a) causa um erro pois == � um operador de igualdade\n" << endl;
	
	cout << "b) *p - *q" << endl;
	cout << "conteudo do endere�o que *p aponta: " << *p << endl;
	cout << "conteudo do endere�o que *q aponta: " << *q << endl;
	cout << "opera��o usando conteudo dos endere�os dos ponteiros *p - *q = " << (*p - *q) << endl << endl;
	
	cout << "c) 8 -*p / *q+5" << endl;
	cout << "� o mesmo que 8 - " << *p << " / " << *q << " + 5" << endl;
	cout << "resultado da opera��o: " << (8 - *p / *q + 5) << endl << endl;
	
	cout << "d) *r+2" << endl;
	cout << "� o mesmo que " << *r << " + 2" << endl;
	cout << "r recebeu o endere�o que p aponta" << endl;
	cout << "resultado da opera��o: " << (*r + 2) << endl << endl;
	
	cout << "e) q+2" << endl;
	cout << "endere�o atual de q " << q << endl;
	cout << "cout <<  q+2 = " << q+2 << endl;
    cout << "q � um ponteiro int de 4 bytes" << endl;
    cout << "q+2 mostra o endere�o de memoria ap�s pular 4 bytes duas vezes ou 4*2" << endl;
    q+2;
    cout << "digitar q+2; numa linha n�o muda o endere�o q" << endl;
    cout << "endere�o de q ap�s digitar inline q+2; = " << q << endl;
	
	return 0;
}
