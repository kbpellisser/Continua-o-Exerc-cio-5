#include <stdio.h>

int main() {
    float salario_atual, aumento = 0, novo_salario;
    int tempo_servico;
    
    printf("Digite o valor do salário atual do funcionário: ");
    scanf("%f", &salario_atual);

    printf("Digite o tempo de serviço do funcionário (em anos): ");
    scanf("%d", &tempo_servico);

    if (salario_atual <= 500) {
        aumento = salario_atual * 0.25; // Aumento de 25% para salários até 500
    } else if (salario_atual <= 1000) {
        aumento = salario_atual * 0.20; // Aumento de 20% para salários até 1000
    } else if (salario_atual <= 1500) {
        aumento = salario_atual * 0.15; // Aumento de 15% para salários até 1500
    } else if (salario_atual > 2000) {
        aumento = salario_atual * 0.10; // Aumento de 10% para salários acima de 2000
    }

    if (tempo_servico >= 1 && tempo_servico <= 3) {
        aumento += 100; // Bônus de 100 para tempo de serviço de 1 a 3 anos
    } else if (tempo_servico >= 4 && tempo_servico <= 6) {
        aumento += 200; // Bônus de 200 para tempo de serviço de 4 a 6 anos
    } else if (tempo_servico >= 7 && tempo_servico <= 10) {
        aumento += 300; // Bônus de 300 para tempo de serviço de 7 a 10 anos
    } else if (tempo_servico > 10) {
        aumento += 500; // Bônus de 500 para tempo de serviço acima de 10 anos
    }

    if (aumento > 0) {
        novo_salario = salario_atual + aumento;
        printf("Novo salário reajustado: R$ %.2f\n", novo_salario);
    } else {
        printf("O funcionário não tem direito a aumento.\n");
    }

    return 0;
}
