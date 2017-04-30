/* 
Faça uma função para receber os valores necessários para o cálculo 
da fórmula de báskara e retorne por referência, as suas raízes, caso 
seja possível calcular.
(b*b) -4 * a * c

Sugestoes para teste:

* a=1,b=-5,c=6; resultados das raizes: (2, 3)
* a=1,b=-20,c=100; resultado das raizes: (-10, -10)
* a=1,b=-4,c=4; resultado das raizes: (2, 2)
* a=1,b=-6,c=9; resultado das raizes: (3, 3)
* a=1,b=0,c=-16; resultado das raizes(-4, 4)
*/

#include <iostream>
#include <cstdlib>
#include <math.h>

using namespace std;

int delta(int&,int&,int&);
void raizes(int&,int&,int&,float&,float&);

int main(int argc, char *argv[]) {
	setlocale(LC_ALL, "Portuguese");
	float x1, x2;
	int a, b, c;
	try {
		if(argc > 3) {
			a = atoi(argv[1]);
			b = atoi(argv[2]);
			c = atoi(argv[3]);
			raizes(a, b, c,x1, x2);
			printf("Baskara={a: %d, b: %d, c: %d}\n",a , b, c);
			printf("raizes={x1: %.2f, x2: %.2f}\n",x1,x2);
		}else {
			cout << "Informe a: ";
			cin >> a;
			cout << "Informe b: ";
			cin >> b;
			cout << "Informe c: ";
			cin >> c;
			raizes(a,b,c,x1,x2);
			printf("Baskara={a: %d, b: %d, c: %d}\n",a , b, c);
			printf("raizes={x1: %.2f, x2: %.2f}\n",x1,x2);
		}
	}catch(const char* e){
			cerr << "Error: " << e << endl;
	}
	
	return 0;
}

int delta(int &a,int &b, int &c){
    int d = (b * b) - 4 * a * c;
    cout << "delta: " << d << endl;
    return d;
}

void raizes(int &a, int &b, int &c, float &x1, float &x2){
    float d = delta(a,b,c);
    if(d < 0) {
		throw "Não existe raiz negativa";
	}
	float r = sqrt(d);
    cout << "raiz de delta: " << r << endl;
	x1 = ((-1 * b) - r) / (2 * a);
	x2 = ((-1 * b) + r) / (2 * a);
}
