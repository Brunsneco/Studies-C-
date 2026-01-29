// IF_ELSE.cpp
// Autor: Bruno Ribeiro dos Santos
// Data: 2024-06-10
// Este programa lê duas notas, calcula a média e determina se o aluno está aprovado, reprovado ou se precisa fazer exame.


#include <iostream>
using namespace std;

int main()
{
	float n1, n2, n3;
	float ma;

	cout << "Digite as suas notas" << endl;
	cout << "N1: ";
	cin >> n1;
	cout << "N2: ";
	cin >> n2;
    ma = (n1 + n2) / 2;

    if (ma >= 7.0){
        cout << "Aprovado! Media: " << ma << endl;
    }
    else{
        cout << "Reprovado! Media: " << ma << endl;
        cout << "Digite a nota do exame: ";
        cin >> n3;
        ma = (ma + n3) / 2;
        if (ma >= 5.0){
            cout << "Aprovado no exame! Media final: " << ma << endl;
        }
        else{
            cout << "Reprovado no exame! Media final: " << ma << endl;
        }
    }
}