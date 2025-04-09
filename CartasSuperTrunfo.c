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
    
    int opcao1, opcao2, resultado1, resultado2;

    // Menu interativo

    printf("=== COMPARAÇÃO DE CARTAS ===\n");
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1. população\n");
    printf("2. área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional (MENOR valor vence)\n");
    printf("Opção: ");
    scanf("%d", &opcao1);

    switch (opcao1)
    {
        case 1:
            printf("Você escolheu a opção população!\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0;
        break;

        case 2:
            printf("Você escolheu a opção Área!\n");
            resultado1 = area1 > area2 ? 1 : 0;
        break;

        case 3:
            printf("Você escolheu a opção PIB!\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
        break;

        case 4:
            printf("Você escolheu a opção Pontos turísticos!\n");
            resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
        break;
        
        case 5:
            printf("Você escolheu a opção Densidade populacional!\n");
            resultado1 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
        break;    
        
        default:
            printf("Opção inválida! Por favor, selecione um número de 1 a 5.\n");
            return 0;
        break;
        }

    printf("Escolha o segundo atributo para comparação:\n");
    printf("1. população\n");
    printf("2. área\n");
    printf("3. PIB\n");
    printf("4. Pontos turísticos\n");
    printf("5. Densidade populacional (MENOR valor vence)\n");
    printf("Opção: ");
    scanf("%d", &opcao2);

    if (opcao1 == opcao2) {
        printf("Você escolheu o mesmo atributo!");
        return 0;
    } else {
        switch (opcao2)
        {
            case 1:
                printf("Você escolheu a opção população!\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0;
            break;
    
            case 2:
                printf("Você escolheu a opção Área!\n");
                resultado2 = area1 > area2 ? 1 : 0;
            break;
    
            case 3:
                printf("Você escolheu a opção PIB!\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
            break;
    
            case 4:
                printf("Você escolheu a opção Pontos turísticos!\n");
                resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            break;
            
            case 5:
                printf("Você escolheu a opção Densidade populacional!\n");
                resultado2 = densidadePopulacional1 < densidadePopulacional2 ? 1 : 0;
            break;    
            
            default:
                printf("Opção inválida! Por favor, selecione um número de 1 a 5.\n");
                return 0;
            break;
            } 
    }
    
    if (resultado1 && resultado2) {
        printf("Parabéns, Você ganhou!\n");
    } else if (resultado1 != resultado2) {
        printf("Empatou!\n");
    } else {
        printf("Infelizmente, Você perdeu!\n");
    }
    
    

}