#include <stdio.h>
#include <string.h> 

int main(){
    char usuario[30];
    char senha[30]; 

    int comparacao;

    do{
       
        printf("----------------------------------------\n");
        printf("Digite o seu nome de usuario: ");
        fgets(usuario, sizeof(usuario), stdin);

        printf("Digite sua senha: ");
        fgets(senha, sizeof(senha), stdin);

        usuario[strcspn(usuario, "\n")] = 0;
        senha[strcspn(senha, "\n")] = 0;

        comparacao = strcmp(senha, usuario); 

        if (comparacao == 0){
            printf("A senha e o nome de usuario nao podem ser o mesmo. Tente novamente.\n");
        }


    } while (comparacao == 0);

    printf("----------------------------------------\n");
    printf("Conta criada. Usuario: %s\n", usuario);

    return 0;
}