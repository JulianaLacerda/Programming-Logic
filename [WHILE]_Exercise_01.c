#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){
    int idade, count21=0, count50=0;

    while (idade != -99){
    printf("Digite a idade: \n");
    scanf("%d", &idade);
    if (idade < 21 && idade > 0){
        count21++;
    }
    else if (idade > 50){
        count50++;
    }
    }
    printf("\nTotal de pessoas com idade menor que 21 ANOS: %d \n\nTotal de pessoas com idade maior que 50 ANOS: %d\n", count21, count50);
    return 0;
    }
