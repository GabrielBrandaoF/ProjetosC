#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int main(){
     
    char sexo, estadocivil;
    char nome[30];
    int tamanho, idade;
    float salario;
     
    do{
        printf("Digite o seu nome (Deve contar mais de 3 caracteres): ");
        fgets(nome, sizeof(nome), stdin);

        nome[strcspn(nome, "\n")] = 0;

        tamanho = strlen(nome);

        if(tamanho <= 3){
            printf("INVALIDO! O nome deve conter mais de tres caracteres\n"); 
        }


    } while (tamanho <= 3); 
    
    printf("NOME VALIDADO!\n"); 
    do{
        printf("Digite a sua idade: ");
        if (scanf("%d", &idade) != 1) { 
             int c;
             while ((c = getchar()) != '\n' && c != EOF);
             idade = -1; 
        }

        if(idade < 0 || idade > 150){
             printf("INVALIDO! Digite uma idade entre 0 e 150.\n"); 
        }
    }
    while(idade < 0 || idade > 150); 

    printf("IDADE VALIDADA!\n"); 

    do{
      printf("Digite o seu salario: ");
      scanf("%f", &salario);
        
       if(salario<=0){
        printf("INVALIDO. O salario deve ser maior que zero.\n");
       }
    }while(salario<=0);

    printf("SALARIO VALIDADO!\n");

    do{
        printf("Digite seu sexo com abreviacao (Feminino=F ou Masculino=M): ");
        scanf(" %c", &sexo);
        if(isalpha(sexo)){
        if(tolower(sexo)!='f' && tolower(sexo)!='m'){
            printf("INVALIDO! Digite F ou M.\n");
        }
      }    
    }while(tolower(sexo)!='f' && tolower(sexo)!='m');
    
    printf("SEXO VALIDADO!\n");
    
    do{
        printf("Digite seu estado civil com abreviacao (Solteiro(a)=S, Casado(a)=C, Viuvo(a)=V, Divorciado(a)=D): ");
        scanf(" %c", &estadocivil);
        if(isalpha(estadocivil)){
        if(tolower(estadocivil)!='s'&& tolower(estadocivil)!='c'&& tolower(estadocivil)!='v'&& tolower(estadocivil)!='d'){
            printf("INVALIDO! Digite S,C,v ou D.\n");
        }
    }
}while(tolower(estadocivil)!='s'&&
       tolower(estadocivil)!='c'&&
       tolower(estadocivil)!='v'&&
       tolower(estadocivil)!='d');
   
printf("ESTADO CIVIL VALIDADO!\n\n");

printf("VALIDACAO CONCLUIDA.");

    return 0;
}