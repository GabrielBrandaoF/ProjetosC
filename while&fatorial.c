#include <stdio.h>

int main() {
    int num;
    long long fatorial = 1;
    int i = 1;

  
    printf("Digite um numero inteiro positivo para calcular o fatorial: "); 
    scanf("%d", &num);
        while (i <= num) {
            fatorial = fatorial * i;
            i++;
        }

        printf("O fatorial de %d eh: %lld\n", num, fatorial); 
    

    return 0;
}
