#include <stdio.h>

int main() {
    int valor_pago, valor_total, troco;
    int c100, c50, c20, c10, c5, c2;

    printf("Digite o valor total da compra: R$ ");
    scanf("%d", &valor_total);

    printf("Digite o valor entregue pelo cliente: R$ ");
    scanf("%d", &valor_pago);

    if (valor_pago < valor_total) {
        printf("Erro: Valor entregue é insuficiente!\n");
        return 1;
    }

    troco = valor_pago - valor_total;
    printf("Troco total: R$ %d\n", troco);

    if (troco == 0) {
        printf("Não há troco a ser devolvido.\n");
        return 0;
    }

    c100 = troco / 100;
    troco %= 100;

    c50 = troco / 50;
    troco %= 50;

    c20 = troco / 20;
    troco %= 20;

    c10 = troco / 10;
    troco %= 10;

    c5 = troco / 5;
    troco %= 5;

    c2 = troco / 2;
    troco %= 2;

    printf("Cédulas para o troco:\n");
    if (c100 > 0) printf("- %d nota(s) de R$ 100\n", c100);
    if (c50 > 0)  printf("- %d nota(s) de R$ 50\n", c50);
    if (c20 > 0)  printf("- %d nota(s) de R$ 20\n", c20);
    if (c10 > 0)  printf("- %d nota(s) de R$ 10\n", c10);
    if (c5 > 0)   printf("- %d nota(s) de R$ 5\n", c5);
    if (c2 > 0)   printf("- %d nota(s) de R$ 2\n", c2);

    if (troco > 0) {
        printf("Restante não conversível em cédulas disponíveis: R$ %d\n", troco);
    }

    return 0;
}
