#include <stdio.h>

int main(){
    int popoulacao1, turisticos1;
    float pib1, area1;
    int populacao2, turisticos2;
    float pib2, area2;

    printf("Digite a Quantidade de População da Carta 1: \n");
    scanf("%d", &popoulacao1);

    printf("Digite o Número de Pontos Turísticos da Carta 1:\n");
    scanf("%d", &turisticos1);

    printf("Digite Quantos Reais tem no PIB da Carta 1 (em bilhões):,\n");
    scanf("%f", &pib1);

    printf("Digite Quanto de Área tem a Carta 1 (em km2):\n");
    scanf("%f", &area1);

    printf("Digite a Quantidade de z População da carta 2:\n");
    scanf("%d", &populacao2);

    printf("Digite o Número de Pontos Turísticos da Carta 2:\n");
    scanf("%d", &turisticos2);

    printf("Digite Quantos Reais tem no PIB da Carta 2 (em bilhões):\n");
    scanf("%f", &pib2);

    printf("Digite Quanto de Área tem a Carta 2 (em km2):\n");
    scanf("%f", &area2);

    float Densidade_populacional1 = popoulacao1 / area1;
    float pib_per_capita1 = pib1 *1000000000 / popoulacao1;

    float Densidade_populacional2 = populacao2 / area2;
    float pib_per_capita2 = pib2 *1000000000 / populacao2;

    printf("\n Carta 1:\n");
    printf("População: %d\n", popoulacao1);
    printf("Pontos Turísticos: %d\n", turisticos1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Área: %.2f km2\n", area1);
    printf("Densidade Populacional: %.2f hab/km2\n", Densidade_populacional1);
    printf("PIB Per Capita: %.2f reais\n", pib_per_capita1 );

    printf("\n Carta 2:\n");
    printf("População: %d\n", populacao2);
    printf("Pontos Turísticos: %d\n", turisticos2);
    printf("PIB: %.2f bilhões reais\n", pib2);
    printf("Área: %.2f km2\n", area2);
    printf("Densidade Populacional: %.2f hab/km2\n", Densidade_populacional2);
    printf("PIB Per Capita: %.2f reais\n", pib_per_capita2);

    return 0;

}