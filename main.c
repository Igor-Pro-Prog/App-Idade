#include <stdio.h>

int main(){
    //declaração de variaveis
    int idade;
    
    // Entrada
    printf("qual é a sua idade.\n");
    scanf("%d", &idade);

    //Processamento
    if(idade < 18){
        printf("voce é menor de idade.\n");
    }else if (idade > 18 && idade < 60){
        printf("você é adulto. \n");
    }else{
        printf ("você é idoso. \n");
    }
    //Saida
    printf("Sua idade é %d \n", idade);

    return 0;




}