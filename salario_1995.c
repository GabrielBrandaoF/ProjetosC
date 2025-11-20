#include <stdio.h>


int main(){
   int ano;
   float taxaatual=0.03;
   double salr=1015;

   double salr_usuario, salr_novo;
   float taxaatual2=0.03;

   printf("Salario inicial do funcionario: R$1000\n");
   printf("Salario apos o aumento de 1,5%% em 1996: R$1015\n");
   printf("Digite o ano que estamos: ");
   scanf("%d", &ano);

   for(int ano_loop = 1997; ano_loop <= ano; ano_loop++){
    salr=+salr*(1+taxaatual);
    taxaatual=taxaatual*2;
   }

    printf("\nO salario atual dele eh: %.2lf", salr);

    printf("\nAgora, digite o salario que voce deseja realizar essa operacao como o funcionario de 1995: ");
    scanf("%lf", &salr_usuario);
    salr_novo=salr_usuario*1.015;
    printf("Seu salario em 1996 eh: %.2lf", salr_novo);

   for(int ano_loop = 1997; ano_loop <= ano; ano_loop++){
    salr_novo=+salr_novo*(1+taxaatual2);
    taxaatual2=taxaatual2*2;
   }
     printf("\nO seu salario no ano atual eh: %2.lf", salr_novo);

 return 0;
}