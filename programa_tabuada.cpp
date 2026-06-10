#include <stdio.h> // Biblioteca que permite usar printf() e scanf()

int main() { // Função principal do programa

    int numero; // Variável que armazenará o número digitado pelo usuário
    int i;      // Variável contadora utilizada no laço for

    printf("Digite um numero para ver a tabuada: ");
    // Exibe uma mensagem solicitando um número

    scanf("%d", &numero);
    // Lê o número digitado e armazena na variável numero

    printf("\nTabuada do %d:\n\n", numero);
    // Exibe um título mostrando de qual número será a tabuada

    for(i = 1; i <= 10; i++) {
        // i começa em 1
        // Enquanto i for menor ou igual a 10
        // i recebe +1 a cada repetição

        printf("%d x %d = %d\n", numero, i, numero * i);
        // Exibe a multiplicação:
        // numero x i = resultado
    }

    return 0;
    // Indica que o programa terminou com sucesso
}
