//Soma de valores a e b
//autor: Bruno Ribeiro dos Santos
//data: 21/03/2024
//versao: 1.0
//descricao: Programa que solicita ao usuario dois valores numericos e exibe a soma desses valores.


#include <iostream>

using namespace std;

float valueA, valueB;
float summ;
void sum()
{
	summ = valueA + valueB;
}

int main()
{
	cout << "Insira um valor numerico A: ";
	cin >> valueA;
	cout << "Insira um valor numerico B: ";
	cin >> valueB;
	sum();
	cout << "Resultado da soma: " << summ << endl;

	return 0;

}