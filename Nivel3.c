#include <stdio.h>

int main() {
    long int populacao1, populacao2;
    unsigned int turistico1, turistico2;
    float pib1, pib2, area1, area2;
    char cidade1[40], estado1[12], codigo1[9];
    char cidade2[40], estado2[12], codigo2[9];

    printf("Digite o Nome do Estado da Carta 1 (sigla):\n");
    scanf("%s", estado1);

    printf("Digite o Código da Carta 1:\n");
    scanf("%s", codigo1);

    printf("Digite o Nome da Cidade da Carta 1:\n");
    scanf(" %[^\n]", cidade1);  

    printf("Digite a Quantidade de População da Carta 1:\n");
    scanf("%ld", &populacao1);

    printf("Digite a Área da Carta 1 (em km2):\n");
    scanf("%f", &area1);

    printf("Digite Quantos Reais Tem No PIB da Carta 1 (em bilhões):\n");
    scanf("%f", &pib1);

    printf("Digite quantos Pontos Turísticos tem na Carta 1:\n");
    scanf("%u", &turistico1);

    printf("Digite o Nome do Estado da Carta 2 (sigla):\n");
    scanf("%s", estado2);

    printf("Digite o Código da Carta 2:\n");
    scanf("%s", codigo2);

    printf("Digite o Nome da Cidade da Carta 2:\n");
    scanf(" %[^\n]", cidade2);  

    printf("Digite a Quantidade de População da Carta 2:\n");
    scanf("%ld", &populacao2);

    printf("Digite a Área da Carta 2 (em km2):\n");
    scanf("%f", &area2);

    printf("Digite Quantos Reais Tem No PIB da Carta 2 (em bilhões):\n");
    scanf("%f", &pib2);

    printf("Digite quantos Pontos Turísticos tem na Carta 2:\n");
    scanf("%u", &turistico2);

    // Cálculos
    float densidade_populacional1 = (float) populacao1 / area1;
    float pib_per_capita1 = pib1 * 1000000000 / populacao1;

    float densidade_populacional2 = (float) populacao2 / area2;
    float pib_per_capita2 = pib2 * 1000000000 / populacao2;

    double super_poder1 = (double) populacao1 + area1 + (pib1 * 100000000.0) + turistico1 + pib_per_capita1 + (1.0 / densidade_populacional1);
    double super_poder2 = (double) populacao2 + area2 + (pib2 * 100000000.0) + turistico2 + pib_per_capita2 + (1.0 / densidade_populacional2);

   
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("População: %ld\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Pontos Turísticos: %u\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB Per Capita: %.2f\n", pib_per_capita1);
    printf("Super Poder: %.2f\n", super_poder1);

   
    printf("\nCarta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("População: %ld\n", populacao2);
    printf("Área: %.2f km2\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Pontos Turísticos: %u\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB Per Capita: %.2f\n", pib_per_capita2);
    printf("Super Poder: %.2f\n", super_poder2);

    
    printf("\nComparação de cartas (1 = Carta 1 vence, 0 = Carta 2 vence):\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", turistico1 > turistico2);
    printf("Densidade Populacional (menor é melhor): %d\n", densidade_populacional1 < densidade_populacional2);
    printf("PIB Per Capita: %d\n", pib_per_capita1 > pib_per_capita2);
    printf("Super Poder: %d\n", super_poder1 > super_poder2);

    return 0;
}






    


