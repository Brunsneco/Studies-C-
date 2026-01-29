// calc_values.cpp
// Programa que realiza operacoes basicas (soma, subtracao, multiplicacao e divisao) entre dois valores fornecidos pelo usuario.
// Autot: Bruno Ribeiro dos Santos
// Data: 2024-06-15
// Versao: 1.0


#include <iostream>

using namespace std;

float valueA, valueB;
float summ, subb, mull, dvv;

void sum()
{
	summ = valueA + valueB;
	cout << "Soma: " << summ << endl;
}

void sub()
{
	subb = valueA - valueB;
	cout << "Subtracao: " << subb << endl;
}

void mul()
{
	mull = valueA * valueB;
	cout << "Multiplicacao: " << mull << endl;
}

void dv()
{
	dvv = valueA / valueB;
	if (valueB == 0){
		cout << "divisor zero!" << endl;
	}
	else{
		cout << "Divisao: " << dvv << endl;
	}
	
}

int main()
{
	cout << "Insira o valor A: ";
	cin >> valueA;
		if (cin.fail()){
			cout << "Valor de A incorreto" << endl;
			return 1;
		}
	cout << "Insira o valor B: ";
	cin >> valueB;
		if (cin.fail()){
			cout << "Valor de B incorreto" << endl;
			return 1;
		}
	sum();
	sub();
	mul();
	dv();

	return 0;

}