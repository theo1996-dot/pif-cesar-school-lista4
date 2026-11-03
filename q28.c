#include <stdio.h>

int main() {
    int opcao;

    printf("=== Atendimento Automático Bancário ===\n");
    printf("1 - Consultar Saldo\n");
    printf("2 - Efetuar Extrato\n");
    printf("3 - Fazer Transferência\n");
    printf("4 - Falar com Atendente\n");
    printf("Escolha uma opção: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Direcionando para a consulta de saldo...\n");
            break;
        case 2:
            printf("Gerando seu extrato bancário...\n");
            break;
        case 3:
            printf("Redirecionando para a área de transferências...\n");
            break;
        case 4:
            printf("Aguarde na linha, transferindo para um atendente humano...\n");
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma opção entre 1 e 4.\n");
    }

    return 0;
}
