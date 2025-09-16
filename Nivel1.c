#include <stdio.h>

int main (){
    int populacao1;
    float area1;
    float pib1;
    int turisticos1;

    int populacao2;
    float area2;
    float pib2;
    int turisticos2;
    
    printf("Digite á população da carta1:\n");
    scanf("%d", &populacao1);

    printf("Digite á população da carta2:\n");
    scanf("%d", &populacao2);
    
    printf("Digite á área da carta1 (em km2),\n");
    scanf("%f", &area1);

    printf("Digite á área da carta2 (em km2),\n");
    scanf("%f", &area2);

    printf("Digite o PIB da carta1 (em bilhões),\n");
    scanf("%f", &pib1);

    printf("Digite o PIB da carta2 (em bilhões),\n");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da carta1,\n");
    scanf("%d", &turisticos1);

    printf("Digite o número de pontos turísticos da carta2,\n");
    scanf("%d", &turisticos2);

    printf("\nCarta 1:\n");
    printf("População: %d\n", populacao1);
    printf("área: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("turísticos: %d\n", turisticos1);

    printf("\nCarta 2:\n");
    printf("População: %d\n", populacao2);
    printf("área: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("turísticos: %d\n", turisticos2);

    return 0;

}