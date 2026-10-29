#include <stdio.h>
#include <math.h>

int main() {
    char operacao;
    double num1, num2, resultado;

    // Exibição do menu
    printf("--- CALCULADORA ---\n");
    printf("+ : Soma\n");
    printf("- : Subtracao\n");
    printf("* : Multiplicacao\n");
    printf("/ : Divisao\n");
    printf("^ : Potenciacao\n");
    printf("Escolha uma operacao: ");
    scanf(" %c", &operacao); // O espaco antes de %c ignora eventuais 'newlines' anteriores

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num1);
    printf("Digite o segundo numero: ");
    scanf("%lf", &num2);

    // Seleção e execução da operação
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            printf("Resultado: %.2lf + %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '-':
            resultado = num1 - num2;
            printf("Resultado: %.2lf - %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '*':
            resultado = num1 * num2;
            printf("Resultado: %.2lf * %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        case '/':
            // Validação de divisão por zero
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado: %.2lf / %.2lf = %.2lf\n", num1, num2, resultado);
            } else {
                printf("Erro: Divisao por zero nao e permitida!\n");
            }
            break;
        case '^':
            resultado = pow(num1, num2);
            printf("Resultado: %.2lf ^ %.2lf = %.2lf\n", num1, num2, resultado);
            break;
        default:
            printf("Erro: Operacao invalida!\n");
            break;
    }

    return 0;
}
