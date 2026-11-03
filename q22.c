#include <stdio.h>

int main() {
    float valor, valor_final;
    int estado;

    printf("Digite o valor do produto: R$ ");
    scanf("%f", &valor);

    printf("Escolha o estado de destino:\n");
    printf("1 - MG (7%%)\n2 - SP (12%%)\n3 - RJ (15%%)\n4 - MS (8%%)\n");
    printf("Opção: ");
    scanf("%d", &estado);

    switch (estado) {
        case 1:
            valor_final = valor * 1.07;
            printf("Preço final para MG: R$ %.2f\n", valor_final);
            break;
        case 2:
            valor_final = valor * 1.12;
            printf("Preço final para SP: R$ %.2f\n", valor_final);
            break;
        case 3:
            valor_final = valor * 1.15;
            printf("Preço final para RJ: R$ %.2f\n", valor_final);
            break;
        case 4:
            valor_final = valor * 1.08;
            printf("Preço final para MS: R$ %.2f\n", valor_final);
            break;
        default:
            printf("Erro: Código de estado inválido!\n");
    }

    return 0;
}
