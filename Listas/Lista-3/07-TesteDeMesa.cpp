#include <iostream>
#include <windows.h>
#include <string.h>

/*
 Suponha as seguintes declara��es em C/C++:
 
int i;
int v[10];
int *p;

Quais dos seguintes comandos est�o corretos, quais d�o erros de compila��o, 
e quais d�o erros de execu��o? Suponha que os comandos s�o executados na ordem dada,
e que os que d�o erro n�o afetam os outros.

a) p = v; correto // ponteiro recebe o endere�o de memoria do vetor
b) i = *v; correto // variavel i recebe o conteudo da primeira posi��o do vetor
c) p += 3; correto // o ponteiro que apontava para a primeira posi��o e incrementado 3x e agora aponta para 3� posicao de v
d) v = p - 2; Erro // cada indice do vetor � um ponteiro com um endere�o constante e nao pode ser alterado 
e)*i = v[0]; Erro // variavel int i nao e uma ponteiro, portanto deve receber valores sem o *
f) v[2] = p[1]; Erro de execu��o
g) p[7] = i; Erro de execu��o
h) *(v + 1) = i; Erro de execu��o
i) i = p + 2; Erro de compila��o // variavel i nao recebe endere�os de memoria pois nao e ponteiro
j) p = &v; Erro de compila��o // v ja e um ponteiro e n�o precisa de & para passar o endere�o de memoria para outro ponteiro
k) p = &i; Correto // ponteiro recebe o endere�o de memoria de uma variavel de tipo primitivo usando &
l) i = *(v+4); Correto // variavel i recebe o conteudo do endere�o de memoria do vetor que ocupa a 5� posi��o
*/

using namespace std;

void readout(char*);
void t_null(char*);
void leVet(int*);

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	int i;
	int v[10];
	int *p;
	leVet(v);
	readout("Suponha as seguintes declara��es em C/C++:");
	readout("int i;\nint v[10];\nint *p;\n");
	readout("Quais dos seguintes comandos est�o corretos, quais d�o erros de compila��o,");
	readout("e quais d�o erros de execu��o? Suponha que os comandos s�o executados na ordem dada,");
	readout("e que os que d�o erro n�o afetam os outros.\n");
	
	p = v;
	readout("a) p = v; correto //ponteiro recebe o endere�o de memoria da primeira posi��o do vetor\n");
	cout << "endere�o de memoria de que p aponta: " << p << endl;
	cout << "endere�o de memoria da primeira posi��o do vetor: " << &v[0] << endl << endl;
	
	i = *v;
	readout("b) i = *v; correto// variavel i recebe o conteudo da primeira posi��o do vetor\n");
	cout << "valor de i = " << i << endl;
	cout << "valor de *v = " << *v << endl << endl;
	
	
	readout("c) p += 3; correto // o ponteiro que apontava para a primeira posi��o e incrementado 3x e agora aponta para 4� posicao de v");
	cout << "valor de p :" << p << endl;
	p += 3;
	cout << "valor de p += 3 : " << p << endl;
	cout << "endere�o de memoria de v[3]: " << &v[3] << endl;
	cout << "Vetor come�a a contar do 0, por isso que v[3] e a 4� posi��o" << endl << endl;
	
	readout("d) v = p - 2; Erro // cada indice do vetor � um ponteiro com um endere�o constante e nao pode ser alterado\n");
	
	readout("e)*i = v[0]; Erro // variavel int i nao e uma ponteiro, portanto deve receber valores sem o *\n");
	
    cout << "valor de v[2] : " << v[2] << endl;
    v[2] = p[1];
    cout << "valor de v[2] = p[1] : " << v[2] << endl;
    readout("v[2] = p[1]; // Erro de execu��o\n");
    
    cout << "valor de p[7] : " << p[7] << endl;
    p[7] = i;
    cout << "Valor de p[7] = i; : " << p[7] << endl;
    readout("p[7] = i;  // Erro de execu��o\n");
    
    cout << "valor de *(v + 1) : " << *(v + 1) << endl;
    *(v + 1) = i;
    cout << "valor de *(v + 1) = i; : " << *(v + 1) << endl;
    readout("*(v + 1) = i; // Erro de execu��o\n");
    
    readout("i) i = p + 2; Erro de compila��o // variavel i nao recebe endere�os de memoria pois nao e ponteiro\n");
    
    readout("j) p = &v; Erro de compila��o // v ja e um ponteiro e n�o precisa de & para passar o endere�o de memoria para outro ponteiro\n");
  
    readout("k) p = &i; Correto // ponteiro recebe o endere�o de memoria de uma variavel de tipo primitivo usando &");
	cout << "valor de p : " << p << endl;
	cout << "valor de &i : " << &i << endl;
	p = &i;
	cout << "valor de p : " << p << endl << endl; 
	
	readout("l) i = *(v+4); Correto // variavel i recebe o conteudo do endere�o de memoria do vetor que ocupa a 5� posi��o");
	cout << "valor de i : " << i << endl;
	i = *(v+4);
	cout << "valor de *(v + 4) : " << *(v + 4) << endl;
	cout << "valor de i : " << i << endl;
	   	
	return 0;
}

void readout(char frase[200]) {
	char texto[200];
	t_null(texto);
	strcpy(texto,frase);	
	for(int i = 0; true ; i++){
		if(texto[i] == '@') break;
		cout << texto[i];
		Sleep(50);
	}
	cout << endl;	
}

void t_null(char txtArray[200]){
	for(int i = 0; i < 200; i++){
		txtArray[i] = '@';
	}
}

void leVet(int* v) {
	for(int i = 0; i < 10; i++){
		v[i] = i + 1;
	}
}

