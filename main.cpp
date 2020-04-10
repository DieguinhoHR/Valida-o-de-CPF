#include <iostream>
#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    char posicao_cpf[11];
    int cpf_numerico, soma_1, soma_2, quociente, resto_da_divisao, digitoVerificador_1, digitoVerificador_2;
    int digito_1, digito_2, digito_3, digito_4, digito_5, digito_6, digito_7, digito_8, digito_9;

    cout << "Digite seu CPF: ";
    cin >> cpf_numerico;
    // Utilizada para quebrar o cpf em vários números
    sprintf(posicao_cpf, "%d", cpf_numerico);
    // Transforma os caracteres do cpf em inteiros, para realizar a multiplicação
    if (cpf_numerico < 99999999) {
        digito_1 = 0;
    } else {
        sprintf(posicao_cpf, "%d", cpf_numerico);
        digito_1 = posicao_cpf[0] - '0';
    }

    digito_2 = posicao_cpf[1] - '0';
    digito_3 = posicao_cpf[2] - '0';
    digito_4 = posicao_cpf[3] - '0';
    digito_5 = posicao_cpf[4] - '0';
    digito_6 = posicao_cpf[5] - '0';
    digito_7 = posicao_cpf[6] - '0';
    digito_8 = posicao_cpf[7] - '0';
    digito_9 = posicao_cpf[8] - '0';

    soma_1 = digito_1 * 10 + digito_2 * 9 + digito_3 * 8 + digito_4 * 7 +
           digito_5 * 6 + digito_6 * 5 + digito_7 * 4 + digito_8 * 3 + digito_9 * 2;

    quociente = soma_1 / 11;
    resto_da_divisao = soma_1 % 11;

    if (resto_da_divisao < 2) {
        digitoVerificador_1 = 0;
    } else {
        digitoVerificador_1 = 11 - resto_da_divisao;
    }

    quociente = 0;
    resto_da_divisao = 0;

    soma_2 = digito_1 * 11 + digito_2 * 10 + digito_3 * 9 + digito_4 * 8 +
            digito_5 * 7 + digito_6 * 6 + digito_7 * 5 + digito_8 * 4 + digito_9 * 3 + digitoVerificador_1 * 2;

    quociente = soma_2 / 11;
    resto_da_divisao = soma_2 % 11;

    if (resto_da_divisao < 2) {
        digitoVerificador_2 = 0;
    } else {
        digitoVerificador_2 = 11 - resto_da_divisao;
    }

    if (digito_1 == 0) {
        cout << digito_1 << cpf_numerico << "-" << digitoVerificador_1 << digitoVerificador_2;
    } else {
        cout << cpf_numerico << "-" << digitoVerificador_1 << digitoVerificador_2;
    }

    return 0;
}




