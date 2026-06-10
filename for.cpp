#include <stdio.h>

int main(){

    int numero;
    int maior;

    for(int i = 1; i <= 10; i++){

        printf("Digite o %d numero: ", i);
        scanf("%d", &numero);

        // Na primeira repetição
        if(i == 1){
            maior = numero;
        }

        // Verifica se o numero atual é maior
        if(numero > maior){
            maior = numero;
        }
    }

    printf("\nO maior numero digitado foi: %d\n", maior);

    return 0;
}
