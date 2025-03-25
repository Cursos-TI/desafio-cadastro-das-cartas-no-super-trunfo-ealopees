#include <stdio.h>

int main() {

    char cidade1 [30];
    int população1;
    float area1;
    float PIB1;
    int npontos1;

    char cidade2;
    int população2;
    float area2;
    float PIB2;
    int npontos2;

    // inicio do cadastro cidade1
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("População: \n");
    scanf("%d", &população1);

    printf("Área: \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &npontos1);

    // inicio do cadastro cidade 2
    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("População: \n");
    scanf("%d", &população2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);

    printf("Número de pontos turisticos: \n");
    scanf("%d", &npontos2);

    // Exibição da carta A01 (cidade 1):

    printf("CIDADE A01 %s \n População: %d \n Área: %f \n PIB: %f \n Número de pontos turísticos: %d \n", cidade1, população1, area1, PIB1, npontos1);

    // Exibição da carta B02 (cidade 2):
    printf("CIDADE A02 %s \n População: %d \n Área: %f \n PIB: %f \n Número de pontos turísticos: %d \n", cidade2, população2, area2, PIB2, npontos2);

    
    return 0;
}
