#include <stdio.h>

int main() {
	// A função int main() é a função principal do programa.
	// É nela que a execução começa e onde os comandos entre as chaves {} são executados.
    float celsius, fahrenheit;
    // A variavel float serve para armazenar nomeros reais (Numeros do tipo decimal).
    //Ele servira para guardar o resultado em graus celsius, e tambem o resultado da conversao para farenheit.

    printf("Digite a temperatura em Celsius: "); // Printf é a  primeira mensagem na tela que pede para o usuario digitar a temperatura em graus celsius
    scanf("%f", &celsius);
	 // O Scanf lera a mensagem do usuario ou seja a temperatura em graus celsius.
    // "%f" Significa que sera lido um numero do tipo real, do tipo float
    // %celcius, é o emdereço da variavel e onde o valor dela sera armazenado.

    fahrenheit = (9.0 / 5.0) * celsius + 32; 
    // Esse é o metodo que usamos para fazer a conversao de fahrenheit para celsius 
    // O calculo basicamente funciona da segunte forma voce pega por exemplo 32 graus multiplica por 9 e depois divida por 5 entao tera o resulado em fahrenheit.

    printf("Temperatura em Fahrenheit: %.2f\n", fahrenheit); // Aqui mostrara para o usuario o valor da conversao de celcius para fahrenheit.
   // %.2f Esse metodo indica que sera imprimido uma variavel com duas casas decimais.

    return 0; 
	// A função return devolve um valor para o usuario.
    // O zero "0" indica que nao ouve erros na execuçao do programa.
}
// A chave fechada indica que o programa vai ser lido so ate o dim da chave ela começa la mo começo da função "int main() {
// e va ate o fim  da chave }" neste caso do nosso programa ate a linha 25.
