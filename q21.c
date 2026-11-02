#include <stdio.h>

int main() {
    float salario, percentual = 0.0, aumento, novoSalario;
    int codigo;

    // Leitura dos dados de entrada
    printf("Digite o salario atual: R$ ");
    scanf("%f", &salario);

    printf("\nCargos:\n");
    printf("1 - Tecnico\n");
    printf("2 - Gerente\n");
    printf("3 - Demais Cargos\n");
    printf("Digite o codigo do cargo: ");
    scanf("%d", &codigo);

    // Definição do percentual de aumento com base no cargo e salário
    switch (codigo) {
        case 1: // Técnico
            if (salario <= 3000.0) {
                percentual = 0.15;
            } else {
                percentual = 0.10;
            }
            break;

        case 2: // Gerente
            if (salario <= 5000.0) {
                percentual = 0.10;
            } else {
                percentual = 0.05;
            }
            break;

        case 3: // Demais Cargos
            percentual = 0.08;
            break;

        default:
            printf("\nErro: Codigo de cargo invalido!\n");
            return 1;
    }

    // Cálculo dos valores final
    aumento = salario * percentual;
    novoSalario = salario + aumento;

    // Exibição dos resultados
    printf("\n--- Reajuste Salarial ---\n");
    printf("Valor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}
