#include <stdio.h>

int main() {
    int turista1, turista2;
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2;
    float densidade1, densidade2, pibpc1, pibpc2;
    float superPoder1, superPoder2;
    char codigo1[5], codigo2[5], cidade1[20], cidade2[20], estado1[3], estado2[3];

    // Perguntas para registros de cartas.

    printf("Qual a sigla do estado da carta 1?\n");
    scanf("%s", estado1);

    printf("Qual é o código da carta 1?\n");
    scanf("%s", codigo1);

    printf("Qual é o nome da cidade da carta 1?\n");
    scanf(" %[^\n]", cidade1);  // Lê espaços corretamente

    printf("Qual o número de habitantes da carta 1?\n");
    scanf("%lu", &populacao1);

    printf("Qual a área em km² da carta 1?\n");
    scanf("%f", &area1);

    printf("Qual o PIB da carta 1 (em bilhões de reais)?\n");
    scanf("%f", &pib1);

    printf("Qual o número de pontos turísticos da carta 1?\n");
    scanf("%d", &turista1);

    densidade1 = (float)populacao1 / area1;
    pibpc1 = pib1 * 1e9 / populacao1; // Converte bilhões para reais por pessoa

    superPoder1 = (float)populacao1 + area1 + pib1 + turista1 + pibpc1 - densidade1;

    printf("Qual a sigla do estado da carta 2?\n");
    scanf("%s", estado2);

    printf("Qual é o código da carta 2?\n");
    scanf("%s", codigo2);

    printf("Qual é o nome da cidade da carta 2?\n");
    scanf(" %[^\n]", cidade2); // Para ler espaços corretamente

    printf("Qual o número de habitantes da carta 2?\n");
    scanf("%lu", &populacao2);

    printf("Qual a área em km² da carta 2?\n");
    scanf("%f", &area2);

    printf("Qual o PIB da carta 2 (em bilhões de reais)?\n");
    scanf("%f", &pib2);

    printf("Qual o número de pontos turísticos da carta 2?\n");
    scanf("%d", &turista2);

    densidade2 = (float)populacao2 / area2;
    pibpc2 = pib2 * 1e9 / populacao2; // Converte bilhões para reais por pessoa

    superPoder2 = (float)populacao2 + area2 + pib2 + turista2 + pibpc2 - densidade2;

    // Apresentação das duas cartas

    printf("\nCarta 1:\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado1, codigo1, cidade1);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\n", populacao1, area1, pib1);
    printf("Número de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\n", turista1, densidade1);
    printf("PIB per Capita: R$ %.2f\n", pibpc1);
    printf("Super Poder: %.2f\n\n", superPoder1);

    printf("Carta 2:\n");
    printf("Estado: %s\nCódigo: %s\nNome da Cidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %d\nÁrea: %.2f km²\nPIB: %.2f Bilhões de reais\n", populacao2, area2, pib2);
    printf("Número de pontos turísticos: %d\nDensidade populacional: %.2f hab/km²\n", turista2, densidade2);
    printf("PIB per Capita: R$ %.2f\n", pibpc2);
    printf("Super Poder: %.2f\n\n", superPoder2);

    //Comparação do atributo das duas cartas
    
    if (populacao1 > populacao2){
        printf("Comparação de cartas: (atributo: população):\n\n");
        printf("Carta 1 - %s (SP): %d\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (RJ): %d\n", cidade2, estado2, populacao2);
        printf("Carta 1 (%s) Venceu!", cidade1);
    } else {
        printf("Comparação de cartas: (atributo: população):\n\n");
        printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
        printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);
        printf("Carta 2 (%s) Venceu!", cidade2);
    }
}