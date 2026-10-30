#include <stdio.h>

int main() {
    float distancia, litros, consumo;

    // Leitura dos dados de entrada
    printf("Digite a distancia percorrida (km): ");
    scanf("%f", &distancia);

    printf("Digite a quantidade de litros consumidos: ");
    scanf("%f", &litros);

    // Validação para evitar divisão por zero
    if (litros <= 0) {
        printf("Quantidade de litros invalida!\n");
        return 1;
    }

    // Cálculo do consumo em km/l
    consumo = distancia / litros;

    printf("Consumo medio: %.2f km/l\n", consumo);

    // Classificação de acordo com o consumo
    if (consumo < 8.0) {
        printf("Venda o carro!\n");
    } else if (consumo <= 14.0) {
        printf("Economico!\n");
    } else {
        printf("Super economico!\n");
    }

    return 0;
}
