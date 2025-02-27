#include <stdio.h>

int main(){

  int populacao1, populacao2, turista1, turista2;
  float area1, area2, pib1, pib2, densidade1, densidade2, pibpc1, pibpc2;
  char codigo1[3], codigo2[3], cidade1[20], cidade2[20], estado1[20], estado2[20];

  //Perguntas para registros de cartas.

  printf("Qual a letra que representa o estado da carta 1?\n", estado1);
  scanf("%s", &estado1);

  printf("Qual é o codigo da carta 1?\n", codigo1);
  scanf("%s", &codigo1);

  printf("Qual é o nome da cidade da carta 1?\n", cidade1);
  scanf("%s", &cidade1);

  printf("Qual o número de habitantes da carta 1?\n", populacao1);
  scanf("%d", &populacao1);

  printf("Qual a area em km da carta 1?\n", area1);
  scanf("%f", &area1);

  printf("Qual o PIB da carta 1?\n", pib1);
  scanf("%f", &pib1);

  printf("Qual o número de pontos turisticos da carta 1?\n", turista1);
  scanf("%d", &turista1);

  densidade1 == populacao1 / area1;
  pibpc1 == pib1 / populacao1;

  printf("Qual a letra que representa o estado da carta 2?\n", estado2);
  scanf("%s", &estado2);

  printf("Qual é o codigo da carta 2?\n", codigo2);
  scanf("%s", &codigo2);

  printf("Qual é o nome da cidade da carta 2?\n", cidade2);
  scanf("%s", &cidade2);

  printf("Qual o número de habitantes da carta 2?\n", populacao2);
  scanf("%d", &populacao2);

  printf("Qual a area em km da carta 2?\n", area2);
  scanf("%f", &area2);

  printf("Qual o PIB da carta 2?\n", pib2);
  scanf("%f", &pib2);

  printf("Qual o número de pontos turisticos da carta 2?\n", turista2);
  scanf("%d", &turista2);

  densidade2 == populacao2 / area2;
  pibpc2 == pib2 / populacao2;

  //Apresentação das duas cartas

  printf("Carta 1:\nestado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nárea: %2.f\nPIB: %2.f\nnúmero de pontos turisticos: %d\nDensidade populacional: %2.f hab/km²\nPIB per Capita: %.2f reais\n\n", estado1, codigo1, cidade1, populacao1, area1, pib1, turista1, densidade1, pibpc1);
  printf("Carta 2:\nestado: %s\nCódigo: %s\nNome da Cidade: %s\nPopulação: %d\nárea: %2.2f\nPIB: %2.f\nnúmero de pontos turisticos: %d\nDensidade populacional: %2.f hab/km²\nPIB per Capita: %.2f reais\n", estado2, codigo2, cidade2, populacao2, area2, pib2, turista2, densidade2, pib2);
}