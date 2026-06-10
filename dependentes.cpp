#include <stdio.h>
#include <string.h>

int main(){

    char nome[100];
    int idade;
    char cpf[20];
    int temDependentes;

    // Entrada de dados (usando fgets)
    printf("Digite seu nome completo: ");
    fgets(nome, 100, stdin);
    nome[strcspn(nome, "\n")] = '\0'; // remove ENTER

    printf("Digite sua idade: ");
    scanf("%d", &idade);
    getchar(); // limpa o ENTER do buffer

    printf("Digite seu CPF: ");
    fgets(cpf, 20, stdin);
    cpf[strcspn(cpf, "\n")] = '\0';

    // Mostrar dados
    printf("\n--- DADOS ---\n");
    printf("Nome: %s\n", nome);
    printf("Idade: %d\n", idade);
    printf("CPF: %s\n", cpf);

    // Dependentes
    printf("\nPossui dependentes? (1 = SIM / 0 = NAO): ");
    scanf("%d", &temDependentes);

    if(temDependentes == 1){
        int quantidade;

        printf("Quantos dependentes? ");
        scanf("%d", &quantidade);
        getchar(); // limpa buffer

        char dependentes[quantidade][100]; // matriz de strings

        for(int i = 0; i < quantidade; i++){
            printf("Digite o nome do dependente %d: ", i+1);
            fgets(dependentes[i], 100, stdin);
            dependentes[i][strcspn(dependentes[i], "\n")] = '\0';
        }

        printf("\n--- LISTA DE DEPENDENTES ---\n");
        for(int i = 0; i < quantidade; i++){
            printf("Dependente %d: %s\n", i+1, dependentes[i]);
        }

    } else {
        printf("Nao possui dependentes.\n");
    }

    return 0;
}

