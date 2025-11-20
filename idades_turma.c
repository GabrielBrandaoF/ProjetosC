#include <stdio.h>

int main(){

    int num, num_total;

    printf("------------Calculo de media de idade------------\n");
    printf("Quantidade de pessoas na sala: ");
    scanf("%d", &num);

    int pessoas[num];

    for(int i=0; i<num; i++){
        printf("Idade aluno %d: ", i+1);
        scanf("%d", &pessoas[i]);

        num_total+=pessoas[i];
    }
 if(num_total/num>0 && num_total/num<=25){
    printf("A turma eh jovem");
 }
 else if(num_total/num>25 && num_total/num<=60){
    printf("A turma eh jovem");
 }else if(num_total/num>60){
    printf("A turma eh jovem");
 }

return 0;
}