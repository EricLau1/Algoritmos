//Lista de Revisão
//Criei um menu onde as opções são cada Exercício da lista

#include <iostream>
#include <conio.h>
#include <locale.h>
#include <math.h>
#include <stdlib.h>

using namespace std;

void author();

// o main está na linha 72

//funções dos exercícios

// -- 1 -- // começa na linha 537

void exe_01();
void setBonus(double,double*,double*);
void setImposto(double,double*,double*);
void displayTotal(double,double);

// -- 2 -- // começa na linha 512

void exe_02();
void setMedia(int*,int*);

// -- 3 -- // começa na linha 488

void exe_03();
double somatorio(double, int);

// -- 4 -- // começa na linha 457

void exe_04();
float verifica(float*);
float triRet(float*,float*);

// -- 5 -- // começa na linha 396

void exe_05();
int calcMedia(int*,int);
void mensagem(string,int);

// -- 6 -- // começa na linha 300

void exe_06();
void consumoAgua(string v1[], float v2[]);
float mediaConsumo(float v[]);
void sortDec(string nome[], float v[]);

// -- 7 -- // começa na linha 143

#define T 4
void exe_07();
void setMatriz(int m[T][T]);
void getMatriz(int m[T][T]);
int getSomaImpar(int m[T][T]);
int getMenorCem(int m[T][T]);
int getMediaPar(int m[T][T]);
int getSomaMatriz(int m[T][T]);
int getMediaLinha(int m[T][T]);
int menor_ou_Maior(int m[T][T], char);
void somaLinha(int m[T][T]);
void somaColuna(int m[T][T]);


// menu está na linha 78
void menu();

int main(){
	
	setlocale(LC_ALL, "");
	
	menu();
	
}

void menu(){
	bool ativo = true;
	int opcao;
	while(ativo){
		cout<<"Lista de Exercícios - Revisão\n\n";
		cout<<"1- Exercício I";
		cout<<"\n2- Exercício II";
		cout<<"\n3- Exercício III";
		cout<<"\n4- Exercício IV";
		cout<<"\n5- Exercício V";
		cout<<"\n6- Exercício VI";
		cout<<"\n7- Exercício VII";
		
		cout<<"\n\nEscolha uma opção ou 0 para sair: ";
		cin>>opcao;
		system("cls");
		switch(opcao){
			case(1):{
				exe_01();
				break;
			}
			case(2):{
				exe_02();
				break;
			}
			case(3):{
				exe_03();
				break;
			}
			case(4):{
				exe_04();
				break;
			}
			case(5):{
				exe_05();
				break;
			}
			case(6):{
				exe_06();
				break;
			}
			case(7):{
				exe_07();
				break;
			}
			case(0):{
				ativo = false;
				author();
				break;
			}
			default:{
				cout<<"valor inválido!";
				getch();
				break;
			}
		}//fim switch
     system("cls");
	}//fim while
	
	
}//fim menu

/* ***Exercicio 07*** */

void exe_07(){
	
	int matriz[T][T];
	
	setMatriz(matriz);
	system("cls");
	getMatriz(matriz);
	
	mensagem("Soma dos valores impares da Matriz: ", getSomaImpar(matriz));
	mensagem("Quantidade de valores menores que 100: ", getMenorCem(matriz));
	mensagem("Média dos Pares maiores que 30: ", getMediaPar(matriz));
	mensagem("Soma dos valores das colunas: ", getSomaMatriz(matriz));
	mensagem("Média dos valores das linhas: ", getMediaLinha(matriz));
	mensagem("Maior valor da matriz: ", menor_ou_Maior(matriz,'M'));
	mensagem("Menor valor da matriz: ", menor_ou_Maior(matriz,'m'));
//	somaColuna(matriz); // mostra o somatorio de cada coluna
//	somaLinha(matriz); // mostra o somatorio da cada linha e a média
	getch();
	
}

void setMatriz(int m[T][T]){
	
	for(int i = 0; i<T; i++){
		for(int j = 0; j<T; j++){
			
			cout<<"Digite um número para a posição ["<<i<<"]["<<j<<"]: ";
			cin>>m[i][j];
			//m[i][j] = i+1*j + (rand()%300) - 100; usado para facilitar o teste
		} //fim for j
	} //fim for i
}

void getMatriz(int m[T][T]){
	cout<<"\tMATRIZ 4X4\n\n";
	for(int i = 0; i<T; i++){
		for(int j = 0; j<T; j++){
			cout<<m[i][j]<<"\t";
		}
		cout<<"\n\n";
	}
	cout<<"\n***************************************************\n";
}

int getSomaImpar(int m[T][T]){
	int s = 0;
	for(int i = 0; i<T; i++){
		for(int j = 0; j<T; j++){
			if(m[i][j] % 2 != 0){
				s += m[i][j];
			}
		}//fim for j
	} //fim for i
	
	return s;
}

int getMenorCem(int m[T][T]){
	int qtd = 0;
	for(int i = 0; i<T; i++){
		for(int j = 0; j<T; j++){
			if(m[i][j] < 100){
				qtd++;
			}
		} //fim for j
	}//fim for i
	
	return qtd;
}

int getMediaPar(int m[T][T]){
	int media = 0;
	int count = 0;
	for(int i=0; i<T; i++){
		for(int j=0; j<T; j++){
			if(m[i][j] % 2 == 0 && m[i][j] > 30){
				media += m[i][j];
				count++;
			}
		}
	}
	if(count != 0){
		return media/count;
	}else{
		return count;
	}
	
}

int getSomaMatriz(int m[T][T]){
	int s = 0;
	for(int i = 0; i<T; i++){
		for(int j = 0; j<T; j++){
			s += m[i][j];
		}
	}
	return s;
}

int getMediaLinha(int m[T][T]){
	int media = 0;
	for(int i = 0; i<T; i++){
		for(int j = 0; j<T; j++){
			media += m[j][i];
		}
	}
	return media/(T*T);	 
}

int menor_ou_Maior(int m[T][T], char letra){
	int maior = m[0][0];
	int menor = maior;
	
	for(int i = 0; i<T; i++){
		for(int j = 0; j<T; j++){
			if(m[i][j] > maior){
				maior = m[i][j];
			}
			
			if(m[i][j] < menor){
				menor = m[i][j];
			}
		}
	}//fim for i
	
	if(letra == 'M'){
		return maior;
	}else{
		return menor;
	}

}

void somaColuna(int m[T][T]){
	int s = 0;
	for(int i = 0; i<T; i++){
		for(int j = 0; j<T; j++){
			s += m[i][j];
		}
		cout<<"Somatorio da "<<i+1<<"ª coluna: "<<s<<endl;
		s = 0;
	}
}

void somaLinha(int m[T][T]){
	int s = 0;
	for(int i = 0; i<T; i++){
		for(int j = 0; j<T; j++){
			s += m[j][i];			
		}
		cout<<"\nSomatorio da "<<i+1<<"ª linha: "<<s<<"\tmédia: "<<s/T;
		s = 0;
	}
}

/* ***Exercicio 06*** */

void exe_06(){
	string vNome[5];
	float vCons[5] = {0,0,0,0,0};
	float consumo;
	
	for(int i=0; i<31; i++){
		cout<<i+1<<"º dia do mês\n";
		for(int j=0; j<5; j++){
			
			if(i == 0){
			 cout<<"Informe o Nome: ";
		     cin>>vNome[j];
			}else{
		     cout<<"Morador: "<<vNome[j]<<endl;
			}

		  /*  cout<<"Informe o consumo de água: ";
		    cin>>consumo;
		    vCons[j] += consumo;
		    */
		    vCons[j] += 1000*j; 
	    }
	}
	
	consumoAgua(vNome,vCons);
	printf("\nMédia de consumo de água dos moradores que consumiram menos de 100 metros cúbicos: %.2f",mediaConsumo(vCons));
	cout<<endl;
	sortDec(vNome,vCons);
	getch();
}

void consumoAgua(string v1[], float v2[]){
	int count = 0;
	for(int i=0; i<5; i++){
		
		if(i == 0){
		cout<<"\nMoradores que consumiram mais de 30 metros cúbicos de Água:\n";
		
	    }
	    
		if( v2[i]/1000 > 30 ){

			printf("\n%s consumiu: %.2f litros que equivale a %.2f metros cubicos\n",v1[i].c_str(), v2[i], v2[i]/1000);
			count++;
		}
		
		if(i == 4 && count == 0){
			cout <<"nenhum";
		}
	}
}

float mediaConsumo(float v[]){
	int count = 0;
	float media = 0;
	for(int i=0; i<5; i++){
		if(v[i] / 1000 < 100){
			media += v[i];
			count++;
		}
	}
	
	if(count != 0){
		return media/1000;
	}else{
		return count;
	}
}

void sortDec(string nome[],float v[]){
	float aux;
	string n;
	for(int i=0; i<4; i++){
		for(int j=i+1; j<5; j++){
			if(v[i] < v[j]){
				aux = v[i];
				n = nome[i];
				v[i] = v[j];
				nome[i] =  nome[j];
				v[j] = aux;
				nome[j] = n;
			}
		}
		
	}
	cout<<"\nOrdem decrescente de consumo:\n\n";
	for(int i=0; i<5; i++){
		printf("Morador: %s - consumo: %.2f litros\n", nome[i].c_str(), v[i]);
	}
	getch();
}



/* ***Exercicio 05*** */

void exe_05(){
	int media = 0, mediaPar = 0, somaImpar = 0, num;	
	float pNum;
	int count1 = 0, countAll = 0, countP = 0, cPar = 0;
	
	cout<<"Informe um número ou digite 0 para finalizar: ";
	cin>>num;
	while(num != 0){
		
		countAll++;
		
		if(num < 300){
			media += num;
			count1++;
		}
		
		if(num > 100){
			countP++;
		}
		
		
		if(num % 2 == 0){
			mediaPar += num;
			cPar++;
		}else{
			somaImpar += num;
		}
		
		cout<<"Informe um número ou digite 0 para finalizar: ";
		cin>>num;
		
	}//fim while
   
    if(count1 != 0){
       mensagem("\nMedia dos números menores que 300: ", calcMedia(&media,count1));	
	}
	
	if(countP != 0){
	double perc = (double)countP / countAll;
	mensagem("Percentual dos numeros maiores que 100: ",perc*100);
    }

	if(cPar != 0){
		mensagem("Média dos números pares: ", mediaPar/cPar);
	}
	
	mensagem("Soma dos impares: ", somaImpar);
	
	getch();
}

int calcMedia(int *m, int c){
	return  *m / c;
}

void mensagem(string a, int m){
	cout<<a<<m<<endl<<endl;
}

/* ***Exercicio 04*** */

void exe_04(){
	float base, altura;
	cout<<"Informe o valor da base: ";
	cin>>base;
	verifica(&base);
	cout<<"Informe o valor da altura: ";
	cin>>altura;
	verifica(&altura);
	printf("Triagulo retangulo: %.2f\n",triRet(&base,&altura));
	getch();
}

float verifica(float *x){
	system("cls");
	while(*x <= 0){
		cout<<"Valor invalido!\nDigite apenas valores acima de 0: ";
		cin>>*x;
		system("cls");
	}
	return *x;
}

float triRet(float *b, float *a){
//	printf("base: %f - altura %f",*b,*a);
//	getch();
	return (*b * *a) / 2;
}


/* ***Exercicio 03*** */

void exe_03(){
	printf("Somatorio: %.2f\n",somatorio(3,100));
	getch();
}

double somatorio(double x, int c){
	double s = x / (c-1);  // 3/99
	for(int i=2; i<c; i++){
		if(i%2 == 0){
			s -= pow(x,i) / (c - i);
			// 3/99 - pow(3,2) / (100 - 2 ou 98);
		}else{
			s += pow(x,i) / (c - i);
		}
		printf("%.2f\n",s);
	}
	return s;
}




/* ***Exercicio 02*** */

void exe_02(){
	int idade, media = 0, count = 0;
	cout<<"Informe a idade ou digite 0 para sair: ";
	cin>>idade;
	while(idade>0){
		count++;
		setMedia(&media,&idade);
	    cout<<"\nInforme a idade ou digite 0 para sair: ";
	    cin>>idade;				
	}
	
	if(count != 0){
	cout<<"\nMedia de idades: "<<media/count;
	getch();
	}

}

void setMedia(int *m, int *i){
	*m += *i;
}


/* ***Exercicio 01*** */

void exe_01(){
    double salario;
    double totSal = 0, totImp = 0;
    
    for(int i=0; i<5; i++){
    	cout<<"Informe o salário: ";
    	cin>>salario;
    	setBonus(0.16, &salario, &totSal);
    	cout<<endl;
    	setImposto(0.3, &salario, &totImp);
		cout<<endl;	
	}
	
   	  	displayTotal(totSal,totImp);
   	  	
}

void setBonus(double b,double *sal, double *t){
	 *sal += *sal * b;
	 *t += *sal;
	 cout<<"Salario + bonus de 16%: "<<*sal;
}

void setImposto(double i, double *sal, double *imp){
	*imp += *sal * i;
	*sal -= *sal * i;    
    cout<<"Salario - imposto de 30%: "<<*sal;
}

void displayTotal(double a, double b){
	printf("Total pago: %.2f R$\n",a);
	printf("Total de imposto: %.2f R$\n",b);
	getch();
}

//-----------------------------------------------------//---------------------------------------------------------------//

void author(){
	cout<<"Algoritmos feito por: Eric Lau de Oliveira - 2º ANO ADS";
	getch();
}

