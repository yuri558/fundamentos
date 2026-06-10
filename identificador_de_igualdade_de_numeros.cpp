#include <stdio.h>

int main(){

    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if(numero == 10){
        printf("Sao numeros iguais\n");
    } else {
        printf("Numero diferente de 10\n");
    }

    return 0;
}

