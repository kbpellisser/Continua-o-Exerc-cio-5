#include <stdio.h>

int main() {
    float salario_atual, aumento, bonus, novo_salario;
    int tempo_servico;

    printf("Digite o valor do salário atual do funcionário: ");
    scanf("%f", &salario_atual);
    printf("Digite o tempo de serviço do funcionário (em anos): ");
    scanf("%d", &tempo_servico);

    if (salario_atual < 1000) {
        aumento = salario_atual * 0.2;
    } else if (salario_atual >= 1000 && salario_atual < 2000) {
        aumento = salario_atual * 0.15;
    } else {
        aumento = salario_atual * 0.1;
    }

    bonus = tempo_servico * 50;

    novo_salario = salario_atual + aumento + bonus;

    printf("Novo salário: R$ %.2f\n", novo_salario);

    return 0;
}
