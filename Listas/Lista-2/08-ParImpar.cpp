#include <iostream>

using namespace std;

bool verifica(int);

int main(){
	int n;
	cout << "Informe o numero: ";
	cin >> n;
	if(verifica(n)){
		printf("%d e par!",n);
	}else{
		printf("%d e impar!",n);
	}
	return 0;
}

bool verifica(int n){
	return (n%2 == 0)? true:false;
}
