#include <iostream>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char posicao_cpf[9];
    int cpf_numerico, soma, quociente;
    int digito_1, digito_2, digito_3, digito_4, digito_5, digito_6, digito_7, digito_8, digito_9;
    int resto_da_divisao;

    cout << "Digite seu CPF: ";
    cin >> cpf_numerico;
    // Utilizada para quebrar o cpf em vários números
    sprintf(posicao_cpf, "%d", cpf_numerico);
    // Transforma os caracteres do cpf em inteiros, para realizar a multiplicação
    digito_1 = posicao_cpf[0] - '0';
    digito_2 = posicao_cpf[1] - '0';
    digito_3 = posicao_cpf[2] - '0';
    digito_4 = posicao_cpf[3] - '0';
    digito_5 = posicao_cpf[4] - '0';
    digito_6 = posicao_cpf[5] - '0';
    digito_7 = posicao_cpf[6] - '0';
    digito_8 = posicao_cpf[7] - '0';
    digito_9 = posicao_cpf[8] - '0';

    soma = digito_1 * 10 + digito_2 * 9 + digito_3 * 8 + digito_4 * 7 +
           digito_5 * 6 + digito_6 * 5 + digito_7 * 4 + digito_8 * 3 + digito_9 * 2;

    quociente = soma / 11;
    resto_da_divisao = soma % 11;

    cout << resto_da_divisao;

    return 0;
}
