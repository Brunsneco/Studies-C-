// Fibonacci.cpp
// Este programa preenche um vetor com a sequência de Fibonacci até um número máximo de termos especificado pelo usuário.
// A sequência de Fibonacci é definida como: F1 = 1, F2 = 1, Fn = Fn-1 + Fn-2 para n > 2.
// O programa também verifica se o número de termos solicitado excede o tamanho máximo do vetor e trata possíveis overflows.
// Autor: Bruno Ribeiro dos Santos
// Data: 2024-06-10

#include <iostream>

using namespace std;

// Protótipo da função: void fibonacci(int *vetor, int tamanho_max)
// Esta função preenche o vetor com a sequência de Fibonacci até o tamanho_max.
void fibonacci(int* vetor, int tamanho_max)
{
    // A função retorna diretamente se o tamanho for 0 ou negativo.
    if (tamanho_max <= 0)
    {
        cout << "Tamanho invalido (0 ou negativo). O vetor nao foi preenchido." << endl;
        return;
    }

    // 1. Condições Iniciais
    // F1 = 1
    if (tamanho_max >= 1)
    {
        vetor[0] = 1;
    }

    // F2 = 1
    if (tamanho_max >= 2)
    {
        vetor[1] = 1;
    }

    // 2. Preenchimento da Sequência (a partir do terceiro elemento, F3)
    for (int i = 2; i < tamanho_max; ++i)
    {
        // Fn = Fn−1 + Fn−2
        // O valor atual é a soma dos dois anteriores.
        vetor[i] = vetor[i - 1] + vetor[i - 2];

        // Verificação de Overflow (para evitar valores negativos se o número for muito grande)
        if (vetor[i] < vetor[i - 1])
        {
            cout << "Atencao: A sequencia parou no indice " << i
                << " devido a um potencial overflow de 'int'." << endl;
            // Para a sequência quando o overflow é detectado (número vira negativo/menor).
            tamanho_max = i;
            return;
        }
    }
}

int main()
{
    // Alocação Estática do vetor (como solicitado: int vetor[50];)
    const int TAMANHO_MAXIMO_VETOR = 50;
    int vetor[TAMANHO_MAXIMO_VETOR];

    int n_termos;

    // Solicita o número de termos que o usuário deseja
    cout << "Digite o numero de termos de Fibonacci (N) que voce deseja (max. "<< TAMANHO_MAXIMO_VETOR << "): ";
    cin >> n_termos;

    // Garante que o número de termos não exceda o tamanho alocado do vetor
    if (n_termos > TAMANHO_MAXIMO_VETOR)
    {
        cout << "O numero de termos solicitado excede o tamanho maximo alocado. Usando " << TAMANHO_MAXIMO_VETOR << " termos." << endl;
        n_termos = TAMANHO_MAXIMO_VETOR;
    }

    // Chama a função para preencher o vetor
    fibonacci(vetor, n_termos);

    // Imprime o vetor no main contendo o resultado da sequência
    cout << "\nSequencia de Fibonacci (F1=1, F2=1):\n";
    cout << "[ ";
    for (int i = 0; i < n_termos; ++i)
    {
        cout << vetor[i] << (i < n_termos - 1 ? ", " : "");
    }
    cout << " ]\n";

    return 0;
}