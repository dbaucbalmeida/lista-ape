#include <stdio.h>

int main() {
    float salario_minimo = 1400.00;
    int abaixo_salario_minimo = 0, acima_salario_minimo = 0;
    char sexo;
    float salario;

    do {
        printf("Informe o sexo (M/F): ");
        scanf(" %c", &sexo);

        printf("Informe o salario: ");
        scanf("%f", &salario);

        if (salario < salario_minimo) {
            abaixo_salario_minimo++;
            printf("Abaixo do salario minimo.\n");
        } else if (salario > salario_minimo) {
            acima_salario_minimo++;
            printf("Acima do salario minimo.\n");
        } else {
            printf("Igual ao salario minimo.\n");
        }

        printf("Deseja informar outro assalariado? (S/N): ");
        scanf(" %c", &sexo); // Utilizando o mesmo caractere para continuar ou não
    } while (sexo == 'S' || sexo == 's');

    printf("Quantidade de assalariados abaixo do salario minimo: %d\n", abaixo_salario_minimo);
    printf("Quantidade de assalariados acima do salario minimo: %d\n", acima_salario_minimo);

    return 0;
}
