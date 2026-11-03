#include <stdio.h>

int main() {
    int horas;
    float valor_total = 0.0;

    printf("Digite o total de horas inteiras no estacionamento: ");
    scanf("%d", &horas);

    if (horas <= 0) {
        printf("Tempo inválido.\n");
        return 1;
    }

    if (horas <= 2) {
        valor_total = horas * 2.00;
    } else if (horas <= 4) {
        // Primeiras 2 horas a R$ 2,00 + horas adicionais a R$ 2,50
        valor_total = (2 * 2.00) + ((horas - 2) * 2.50);
    } else {
        // Primeiras 2h a R$ 2,00 + 3a e 4a h a R$ 2,50 + demais a R$ 3,00
        valor_total = (2 * 2.00) + (2 * 2.50) + ((horas - 4) * 3.00);
    }

    printf("Permanência: %d hora(s)\n", horas);
    printf("Valor total a pagar: R$ %.2f\n", valor_total);

    return 0;
}
