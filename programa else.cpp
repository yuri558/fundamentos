        #include <stdio.h>

int main(){

    int golsTimeA, golsTimeB;

    printf("Digite os gols do Time A: ");
    scanf("%d", &golsTimeA);

    printf("Digite os gols do Time B: ");
    scanf("%d", &golsTimeB);

    if(golsTimeA > golsTimeB){
        printf("Time A venceu!\n");
    } else if(golsTimeA < golsTimeB){
        printf("Time B venceu!\n");
    } else {
        printf("Empate!\n");
    }

    return 0;
}

