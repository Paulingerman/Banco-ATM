#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

float saldo = 10000.0;
float limite = 500.0;
float saque = 0.0;
float deposito = 0.0;
float transferencia = 0.0;
float saldoTransferencia = 0.0;
float saldoSaque = 0.0;
float saldoDeposito = 0.0;

void menuCaixaEletronico();
void saqueCaixaEletronico();
void depositoCaixaEletronico();
void transferenciaCaixaEletronico();
void saldoCaixaEletronico();
void limiteCaixaEletronico();
void extratoCaixaEletronico();
void sairCaixaEletronico();

int main() {
    int opcao;
    do {
        menuCaixaEletronico();
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                saqueCaixaEletronico();
                break;
            case 2:
                depositoCaixaEletronico();
                break;
            case 3:
                transferenciaCaixaEletronico();
                break;
            case 4:
                saldoCaixaEletronico();
                break;
            case 5:
                limiteCaixaEletronico();
                break;
            case 6:
                extratoCaixaEletronico();
                break;
            case 7:
                printf("obrigado por usar o nosso banco GERMAN INVEST!\n");           
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    } while (opcao != 7);
    
    return 0;
}

void menuCaixaEletronico() {
    printf("\n==== Menu do Caixa Eletronico ====\n");
    printf("1 - Saque\n");
    printf("2 - Deposito\n");
    printf("3 - Transferencia\n");
    printf("4 - Saldo\n");
    printf("5 - Limite\n");
    printf("6 - Extrato\n");
    printf("7 - Sair\n");
}

void saqueCaixaEletronico() {
    printf("Digite o valor do saque: ");
    scanf("%f", &saque);
    
    if (saque > saldo) {
        printf("Saldo insuficiente!\n");
    } else {
        saldo -= saque;
        saldoSaque += saque;
        printf("Saque de %.2f realizado com sucesso!\n", saque);
    }
}

void depositoCaixaEletronico() {
    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);
    
    saldo += deposito;
    saldoDeposito += deposito;
    printf("Deposito de %.2f realizado com sucesso!\n", deposito);
}

void transferenciaCaixaEletronico() {
    printf("Digite o valor da transferencia: ");
    scanf("%f", &transferencia);
    
    if (transferencia > saldo) {
        printf("Saldo insuficiente para transferencia!\n");
    } else {
        saldo -= transferencia;
        saldoTransferencia += transferencia;
        printf("Transferencia de %.2f realizada com sucesso!\n", transferencia);
    }
}

void saldoCaixaEletronico() {
    printf("Seu saldo atual e: %.2f\n", saldo);
}

void limiteCaixaEletronico() {
    printf("Seu limite atual e: %.2f\n", limite);
}

void extratoCaixaEletronico() {
    printf("\n==== Extrato ====\n");
    printf("Saldo atual: %.2f\n", saldo);
    printf("Limite: %.2f\n", limite);
    printf("Total de saques: %.2f\n", saldoSaque);
    printf("Total de depositos: %.2f\n", saldoDeposito);
    printf("Total de transferencias: %.2f\n", saldoTransferencia);
}