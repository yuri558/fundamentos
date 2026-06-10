#include <stdio.h> // Biblioteca que permite usar as funções printf() e scanf()

int main() { // Função principal do programa. A execução começa aqui.

    int numero; // Variável que armazenará o número digitado pelo usuário.

    int fatorial = 1; // Variável que armazenará o resultado do fatorial.
                      // Começa com 1 porque o fatorial é calculado por multiplicações.

    int i; // Variável de controle do laço for.

    printf("Digite um numero: ");
    // Exibe uma mensagem solicitando um número ao usuário.

    scanf("%d", &numero);
    // Lê o número digitado e armazena na variável numero.

    for(i = 1; i <= numero; i++) {
        // Estrutura de repetição.
        // i = 1      ? começa em 1
        // i <= numero ? continua enquanto i for menor ou igual ao número digitado
        // i++        ? aumenta 1 a cada repetição

        fatorial = fatorial * i;
        // Multiplica o valor atual de fatorial por i.
        // Essa linha acumula o cálculo do fatorial.
    }

    printf("O fatorial de %d e %d\n", numero, fatorial);
    // Exibe o número digitado e o resultado do fatorial.

    return 0;
    // Indica que o programa terminou com sucesso.

} // Fecha a função main().5
