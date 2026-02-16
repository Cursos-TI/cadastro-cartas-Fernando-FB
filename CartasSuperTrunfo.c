#include <stdio.h>

int main() {
    // Variáveis da Carta 1
    char estado1[3], codigo1[4], nomeCidade1[50];
    int pontosTuristicos1;
    unsigned long int populacao1;
    float area1, pib1;
    double densidade1, pibPerCapita1;

    // Variáveis da Carta 2
    char estado2[3], codigo2[4], nomeCidade2[50];
    int pontosTuristicos2;
    unsigned long int populacao2;
    float area2, pib2;
    double densidade2, pibPerCapita2;

    // Entrada de dados da Carta 1
    printf("Digite o estado da Carta 1: ");
    scanf("%s", estado1);

    printf("Digite o código da Carta 1: ");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade da Carta 1: ");
    scanf(" %49[^\n]", nomeCidade1);

    printf("Digite a população da Carta 1: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da Carta 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Carta 1 (em bilhões de reais): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // Cálculos da Carta 1
    densidade1 = populacao1 / area1;
    pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;

    // Entrada de dados da Carta 2
    printf("\nDigite o estado da Carta 2: ");
    scanf("%s", estado2);

    printf("Digite o código da Carta 2: ");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade da Carta 2: ");
    scanf(" %49[^\n]", nomeCidade2);

    printf("Digite a população da Carta 2: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da Carta 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Carta 2 (em bilhões de reais): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos da Carta 2
    densidade2 = populacao2 / area2;
    pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // Loop do menu
    int opcao;
    do {
        printf("\nEscolha o atributo para comparar:\n");
        printf("1 - População\n");
        printf("2 - Área\n");
        printf("3 - PIB\n");
        printf("4 - Pontos Turísticos\n");
        printf("5 - Densidade Populacional (menor vence)\n");
        printf("6 - PIB per Capita\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1: {
                printf("\nPopulação:\n");
                printf("%s (%s): %lu\n", nomeCidade1, estado1, populacao1);
                printf("%s (%s): %lu\n", nomeCidade2, estado2, populacao2);
                if (populacao1 > populacao2) {
                    printf("Resultado: Carta 1 venceu!\n");
                } else if (populacao2 > populacao1) {
                    printf("Resultado: Carta 2 venceu!\n");
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }
            case 2: {
                printf("\nÁrea:\n");
                printf("%s: %.2f km²\n", nomeCidade1, area1);
                printf("%s: %.2f km²\n", nomeCidade2, area2);
                if (area1 > area2) {
                    printf("Resultado: Carta 1 venceu!\n");
                } else if (area2 > area1) {
                    printf("Resultado: Carta 2 venceu!\n");
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }
            case 3: {
                printf("\nPIB:\n");
                printf("%s: %.2f bilhões\n", nomeCidade1, pib1);
                printf("%s: %.2f bilhões\n", nomeCidade2, pib2);
                if (pib1 > pib2) {
                    printf("Resultado: Carta 1 venceu!\n");
                } else if (pib2 > pib1) {
                    printf("Resultado: Carta 2 venceu!\n");
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }
            case 4: {
                printf("\nPontos Turísticos:\n");
                printf("%s: %d\n", nomeCidade1, pontosTuristicos1);
                printf("%s: %d\n", nomeCidade2, pontosTuristicos2);
                if (pontosTuristicos1 > pontosTuristicos2) {
                    printf("Resultado: Carta 1 venceu!\n");
                } else if (pontosTuristicos2 > pontosTuristicos1) {
                    printf("Resultado: Carta 2 venceu!\n");
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }
            case 5: {
                printf("\nDensidade Populacional:\n");
                printf("%s: %.2f hab/km²\n", nomeCidade1, densidade1);
                printf("%s: %.2f hab/km²\n", nomeCidade2, densidade2);
                if (densidade1 < densidade2) {
                    printf("Resultado: Carta 1 venceu!\n");
                } else if (densidade2 < densidade1) {
                    printf("Resultado: Carta 2 venceu!\n");
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }
            case 6: {
                printf("\nPIB per Capita:\n");
                printf("%s: %.2f reais\n", nomeCidade1, pibPerCapita1);
                printf("%s: %.2f reais\n", nomeCidade2, pibPerCapita2);
                if (pibPerCapita1 > pibPerCapita2) {
                    printf("Resultado: Carta 1 venceu!\n");
                } else if (pibPerCapita2 > pibPerCapita1) {
                    printf("Resultado: Carta 2 venceu!\n");
                } else {
                    printf("Resultado: Empate!\n");
                }
                break;
            }
            case 0: {
                printf("Encerrando o jogo...\n");
                break;
            }
            default: {
                printf("Opção inválida!\n");
            }
        }
    } while(opcao != 0);
   
    return 0;
}