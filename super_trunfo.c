#include <stdio.h>

int main() {

    // ================= CARTA 1 =================
    char estado1;
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos1;

    float densidade1, pib_per_capita1, inverso1, super_poder1;

    printf("=== Cadastro da Carta 1 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado1);

    printf("Codigo da carta (ex: A01): ");
    scanf("%3s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area (km²): ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos1);

    densidade1 = (float)populacao1 / area1;
    pib_per_capita1 = pib1 / (float)populacao1;
    inverso1 = 1.0 / (densidade1 + 0.000001);
    super_poder1 = (float)populacao1 + area1 + pib1 + pontos1 + pib_per_capita1 + inverso1;


    // ================= CARTA 2 =================
    char estado2;
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos2;

    float densidade2, pib_per_capita2, inverso2, super_poder2;

    printf("\n=== Cadastro da Carta 2 ===\n");

    printf("Estado (A a H): ");
    scanf(" %c", &estado2);

    printf("Codigo da carta (ex: A02): ");
    scanf("%3s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", cidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area (km²): ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Numero de pontos turisticos: ");
    scanf("%d", &pontos2);

    densidade2 = (float)populacao2 / area2;
    pib_per_capita2 = pib2 / (float)populacao2;
    inverso2 = 1.0 / (densidade2 + 0.000001);
    super_poder2 = (float)populacao2 + area2 + pib2 + pontos2 + pib_per_capita2 + inverso2;


    // ================= EXIBIÇÃO =================
    printf("\n\n======== DADOS CADASTRADOS ========\n");

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita2);


    // ================= COMPARAÇÕES =================
    printf("\n======== COMPARACAO DE CARTAS ========\n");

    int r;

    r = populacao1 > populacao2;
    printf("Populacao: Carta %d venceu (%d)\n", r ? 1 : 2, r);

    r = area1 > area2;
    printf("Area: Carta %d venceu (%d)\n", r ? 1 : 2, r);

    r = pib1 > pib2;
    printf("PIB: Carta %d venceu (%d)\n", r ? 1 : 2, r);

    r = pontos1 > pontos2;
    printf("Pontos Turisticos: Carta %d venceu (%d)\n", r ? 1 : 2, r);

    r = densidade1 < densidade2;
    printf("Densidade Populacional: Carta %d venceu (%d)\n", r ? 1 : 2, r);

    r = pib_per_capita1 > pib_per_capita2;
    printf("PIB per Capita: Carta %d venceu (%d)\n", r ? 1 : 2, r);

    r = super_poder1 > super_poder2;
    printf("Super Poder: Carta %d venceu (%d)\n", r ? 1 : 2, r);


    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();

    return 0;
}
