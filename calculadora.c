#include <stdio.h>
#include <locale.h>

int main (){
    
    int var, num1, num2;
    float res;
    long long fatorial = 1;
    int i = 1;
    setlocale(LC_ALL, "Portuguese");

 printf("--------------Calculadora Online--------------");
 printf("\n1.Adição");
printf("\n2.Subtração");
printf("\n3.Multiplicação");
printf("\n4.Divisão");
printf("\n5.Fatorial");
printf("\n------------------------------------------------");
printf("\nDe acordo com a tabela, digite o numero da sua operação: ");
scanf("%d", &var);

switch (var){
case 1:
    printf("Digite os dois digitos da sua adição: ");
    scanf("%d %d", &num1, &num2);
     res=num1+num2;
    printf("O resultado é: %.2f", res);
    break;

case 2:
    printf("Digite os dois digitos da sua subtração: ");
    scanf("%d %d", &num1, &num2);
     res=num1-num2;
    printf("O resultado é: %.2f", res);
    break;

case 3:
   printf("Digite os dois digitos da sua multiplicação: ");
   scanf("%d %d", &num1, &num2);
    res=num1*num2;
   printf("O resultado é: %.2f", res);
    break;

case 4:
   printf("Digite os dois digitos da sua divisão: ");
   scanf("%d %d", &num1, &num2);
    if(num2==0){
       printf("Não existe divisão por 0");
    } else{
    res = (float) num1/num2;
   printf("O resultado é: %.2f", res);
   }
    break;

    case 5:
    printf("Digite um numero inteiro positivo para calcular o fatorial: "); 
    scanf("%d", &num1);
     if(num1<0){
        printf("Não existe atorial para número negativo.");
     } else{ 
        while (i <= num1) {
            fatorial = fatorial * i;
            i++;
        }

        printf("O fatorial de %d eh: %lld\n", num1, fatorial); 
     break;
 default:
  printf("Reinicie e digite um dos numeros da tabela.");
    break;
}
}
return 0;
}