#include <iostream>

using namespace std;

bool emOrdem(int,int,int);

int main(){
	
	int a,b,c;
	cout << "Informe num1: ";
	cin>>a;
	cout << "Informe num2: ";
	cin>>b;
	cout << "Informe num2: ";
	cin>>c;
	
	if(emOrdem(a,b,c)){
		cout << "Numeros ordenados";
	}else{
		cout << "Numeros nao ordenados";
	}
	return 0;
}

bool emOrdem(int a, int b, int c){
	if(a <= b && b <= c){
		return true;
	}else{
		 return false;
	}
}
