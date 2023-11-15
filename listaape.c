#include <stdio.h>

float calculaSalario(int quantidade) {
    float salario_base = 600.00;
    float adicional = 0.0;
    
    if (quantidade > 50 && quantidade <= 80) {
        adicional = (quantidade - 50) * 0.50;
    } else if (quantidade > 80) {
        adicional = (80 - 50) * 0.50 + (quantidade - 80) * 0.75;
    }
    
    float salario_total = salario_base + adicional;
    return salario_total;
}

int main() {
    int quantidade;
    char continuar;

    do {
        printf("Quantidade de peças fabricadas: ");
        scanf("%d", &quantidade);

        if (quantidade <= 50) {
            printf("Salário: R$ %.2f\n", 600.00);
        } else {
            printf("Salário: R$ %.2f\n", calculaSalario(quantidade));
        }

        printf("Deseja calcular o salário de outro funcionário? (s/n): ");
        scanf(" %c", &continuar);
    } while (continuar == 's' || continuar == 'S');

    return 0;
}
