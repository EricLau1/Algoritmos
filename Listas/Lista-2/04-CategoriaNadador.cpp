#include <iostream>

using namespace std;

string categoria(int);

int main(){
	int idade;
	cout << "Informe a idade: ";
	cin >> idade;
	if(idade < 5){
		cout << "Idade invalida!" << endl;
		exit(0);
	}else{
    cout << idade << " e da categoria " << categoria(idade) << endl;
    }
	return 0;
}

string categoria(int i){
	if(i > 4 && i < 8){
		return "Infantil A";
	}else if(i < 11){
		return "Infantil B";
	}else if(i < 14){
		return "Juvenil C";
	}else if(i < 18){
		return "Juvenil D";
	}else {
		return "Adulto";
	}
}
