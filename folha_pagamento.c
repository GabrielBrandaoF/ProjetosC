#include <stdio.h>
#include <stdlib.h>

int main() {
    float valorHora, horasTrabalhadas, salarioBruto, fgts, sindicato, ir, totalDescontos, salarioLiquido, percentualIR;

    printf("Digite o valor da sua hora trabalhada: ");
    scanf("%f", &valorHora);

    printf("Digite a quantidade de horas trabalhadas no mes: ");
    scanf("%f", &horasTrabalhadas);

    salarioBruto = valorHora * horasTrabalhadas;

    if (salarioBruto <= 900.00) {
        percentualIR = 0.0;
    } else if (salarioBruto <= 1500.00) {
        percentualIR = 0.05;
    } else if (salarioBruto <= 2500.00) {
        percentualIR = 0.10;
    } else {
        percentualIR = 0.20;
    }

    ir = salarioBruto * percentualIR;
    sindicato = salarioBruto * 0.03;
    fgts = salarioBruto * 0.11;

    totalDescontos = ir + sindicato;
    salarioLiquido = salarioBruto - totalDescontos;

    printf("\n----- Demonstrativo de Pagamento -----\n");
    printf("Salario Bruto: (%.2f * %.0f) : R$ %.2f\n", valorHora, horasTrabalhadas, salarioBruto);
    
    if (percentualIR == 0.0) {
        printf("(-) IR (Isento) : R$ %.2f\n", ir);
    } else {
        printf("(-) IR (%.0f%%) : R$ %.2f\n", percentualIR * 100, ir);
    }

    printf("(-) Sindicato (3%%) : R$ %.2f\n", sindicato);
    printf("FGTS (11%%) : R$ %.2f\n", fgts);
    printf("Total de descontos : R$ %.2f\n", totalDescontos);
    printf("Salario Liquido : R$ %.2f\n", salarioLiquido);

    return 0;
}