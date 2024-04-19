/******************************************************************************

Crie um programa que recebe um inteiro pelo teclado e imprime se ele é par ou ímpar. 

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    
    printf("Digite um número e diremos se é impar ou par: ");
    scanf("%d", &numero);
    
    if(numero % 2 == 0){
        printf("Seu número é par!");
    }else{
        printf("Seu número é ímpar!");
    }
    
    return 0;
}
