#include <stdio.h>

int main() {
    int idade, tempo_servico;

    printf("Digite a idade do trabalhador: ");
    scanf("%d", &idade);

    printf("Digite o tempo de servico (em anos): ");
    scanf("%d", &tempo_servico);

    // Condição para aposentadoria:
    // 1. Ter pelo menos 65 anos; OU
    // 2. Ter trabalhado pelo menos 30 anos; OU
    // 3. Ter pelo menos 60 anos E pelo menos 25 anos de serviço.
    if (idade >= 65 || tempo_servico >= 30 || (idade >= 60 && tempo_servico >= 25)) {
        printf("Pode se aposentar.\n");
    } else {
        printf("Nao pode se aposentar.\n");
    }

    return 0;
}
