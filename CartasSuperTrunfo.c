#include <stdio.h>

int main() {

    //dados da carta 1
    char nome1[20] = "Brasil";
    unsigned long int populacao1 = 12325000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontosTuristicos1 = 50;
    float densidadePopulacional1 = (float)populacao1 / area1;

    //dados da carta 2
    char nome2[20] = "Alemanha";
    unsigned long int populacao2 = 6748000;
    float area2 = 1200.25;
    float pib2 = 300.50;
    int pontosTuristicos2 = 30;
    float densidadePopulacional2 = (float)populacao2 / area2;
    
    int opcao;

    // Menu interativo

    printf("=== COMPARAÇÃO DE CARTAS ===\n");
    printf("Escolha o atributo para comparação:\n");
    printf("1. população\n");
    printf("2. área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional (MENOR valor vence)\n");
    printf("Opção: ");
    scanf("%d", &opcao);

    printf("\nComparando %s x %s...\n", nome1, nome2);

    switch (opcao)
    {
        case 1:
            printf("população: %s = %d | %s = %d\n", nome1, populacao1, nome2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Empate!\n");
        break;

        case 2:
            printf("Área: %s = %.2f km² | %s = %.2f km²\n", nome1, area1, nome2, area2);
            if (area1 > area2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (area2 > area1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Empate!\n");
        break;

        case 3:
            printf("PIB: %s = %d | %s = %d\n", nome1, pib1, nome2, pib2);
            if (pib1 > pib2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (pib2 > pib1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Empate!\n");
        break;

        case 4:
            printf("população: %s = %d | %s = %d\n", nome1, populacao1, nome2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Empate!\n");
        break;
        
        case 5:
            printf("população: %s = %d | %s = %d\n", nome1, populacao1, nome2, populacao2);
            if (populacao1 > populacao2)
                printf("Resultado: %s venceu!\n", nome1);
            else if (populacao2 > populacao1)
                printf("Resultado: %s venceu!\n", nome2);
            else
                printf("Empate!\n");
        break;    
        
        default:
            printf("Opção inválida! Por favor, selecione um número de 1 a 5.\n");
        break;
        }
    
}