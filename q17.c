#include <stdio.h>

int main() {
    float valor_total, valor_final, parcela, comissao;
    int opcao;

    // Leitura do valor total da compra
    printf("Digite o valor total da compra (R$): ");
    scanf("%f", &valor_total);

    // Validação de entrada para valor da compra
    if (valor_total <= 0) {
        printf("Valor invalido!\n");
        return 1;
    }

    // Leitura da opção de pagamento
    printf("\nOpcoes de pagamento:\n");
    printf("1 - A Vista (10%% de desconto)\n");
    printf("2 - Parcelado em 3x sem juros\n");
    printf("Escolha a opcao (1 ou 2): ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            // À vista: 10% de desconto
            valor_final = valor_total * 0.90;
            // Comissão de 5% sobre o valor com desconto
            comissao = valor_final * 0.05;

            printf("\n--- Resumo da Venda (A Vista) ---\n");
            printf("Valor final a pagar: R$ %.2f\n", valor_final);
            printf("Comissao do vendedor: R$ %.2f\n", comissao);
            break;

        case 2:
            // Parcelado em 3x sem juros
            parcela = valor_total / 3.0;
            // Comissão de 5% sobre o valor total
            comissao = valor_total * 0.05;

            printf("\n--- Resumo da Venda (Parcelado em 3x) ---\n");
            printf("Valor de cada parcela: R$ %.2f\n", parcela);
            printf("Valor total a pagar: R$ %.2f\n", valor_total);
            printf("Comissao do vendedor: R$ %.2f\n", comissao);
            break;

        default:
            printf("\nOpcao de pagamento invalida!\n");
            break;
    }

    return 0;
}
