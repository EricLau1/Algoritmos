#include <iostream>

using namespace std;

bool testa(int);

int main(){
	long int x;
	cout << "Informe um numero: ";
	cin >> x;
	if(testa(x)){
		printf("%d e positivo!",x);
	}else{
		printf("%d e negativo!",x);
	}
	return 0;
}

bool testa(int n){
	return (n < 0)? false:true;
}
