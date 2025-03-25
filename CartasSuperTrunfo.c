#include <stdio.h>

int main() {

    char cidade1 [30];
    // se colocar um nome composto ele vai direto para exibição, ainda nao sei como resolver
    int populacao1;
    float area1;
    float PIB1;
    int npontos1;

    char cidade2 [30];
    int populacao2;
    float area2;
    float PIB2;
    int npontos2;

    // inicio do cadastro cidade1
    printf("Insira o nome da cidade: ");
    scanf("%s", &cidade1);

    printf("População: ");
    scanf("%d", &populacao1);

    printf("Área (Km): ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &PIB1);

    printf("Número de pontos turisticos: ");
    scanf("%d", &npontos1);

    printf("Digite 'OK' para cncluir o cadastro: \n");

    // Exibição da carta A01 (cidade 1):
    printf("CIDADE A01 - %s \n População: %d \n Área: %f \n PIB: %f \n Número de pontos turísticos: %d \n \n", cidade1, populacao1, area1, PIB1, npontos1);


    // inicio do cadastro cidade 2
    printf("Insira o nome da proxima cidade: ");
    scanf("%s", &cidade2);

    printf("População: ");
    scanf("%d", &populacao2);

    printf("Área (Km): ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &PIB2);

    printf("Número de pontos turisticos: ");
    scanf("%d \n \n", &npontos2);

    // Exibição da carta B02 (cidade 2):
    printf("CIDADE A02 - %s \n População: %d \n Área: %f \n PIB: %f \n Número de pontos turísticos: %d \n \n", cidade2, populacao2, area2, PIB2, npontos2);

    
    return 0;
}
