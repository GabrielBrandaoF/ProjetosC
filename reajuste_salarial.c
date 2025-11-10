#include <stdio.h>

int main(){
 float slr1, slr2;
printf("Digite o valor atual do seu salario: ");
scanf("%f", &slr1);

if(slr1<=280){
 slr2=slr1*1.2;
 printf("1.Seu salario antigo: %.2f\n2.Percentual do aumento: 20%%\n3.Valor do aumento: %.2f\n4.Novo salario: %.2f\n", slr1, slr2-slr1, slr2);
}else if(slr1>280&&slr1<=700){
 slr2=slr1*1.15;
 printf("1.Seu salario antigo: %.2f\n2.Percentual do aumento: 15%%\n3.Valor do aumento: %.2f\n4.Novo salario: %.2f\n", slr1, slr2-slr1, slr2);
}else if(slr1>700&&slr1<=1500){
     slr2=slr1*1.10;
 printf("1.Seu salario antigo: %.2f\n2.Percentual do aumento: 10%%\n3.Valor do aumento: %.2f\n4.Novo salario: %.2f\n", slr1, slr2-slr1, slr2);
}else{
 slr2=slr1*1.05;
printf("1.Seu salario antigo: %.2f\n2.Percentual do aumento: 5%%\n3.Valor do aumento: %.2f\n4.Novo salario: %.2f\n", slr1, slr2-slr1, slr2);
}
}