#include <stdio.h>

int main() {

    // ================= CARTAS JÁ CADASTRADAS =================
    char cidade1[] = "Sao Paulo";
    char estado1 = 'SP';
    unsigned long int populacao1 = 12300000;
    float area1 = 1521.11;
    float pib1 = 699.28;
    int pontos1 = 50;

    char cidade2[] = "Rio de Janeiro";
    char estado2 = 'RJ';
    unsigned long int populacao2 = 6000000;
    float area2 = 1182.30;
    float pib2 = 300.50;
    int pontos2 = 30;

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    int opcao;

    // ================= MENU =================
    printf("======= SUPER TRUNFO =======\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1 - Populacao\n");
    printf("2 - Area\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turisticos\n");
    printf("5 - Densidade Demografica\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    printf("\n");

    // ================= COMPARAÇÃO =================
    switch (opcao) {

        case 1:
            printf("Comparacao por POPULACAO\n\n");
            printf("%s: %lu\n", cidade1, populacao1);
            printf("%s: %lu\n\n", cidade2, populacao2);

            if (populacao1 > populacao2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2:
            printf("Comparacao por AREA\n\n");
            printf("%s: %.2f\n", cidade1, area1);
            printf("%s: %.2f\n\n", cidade2, area2);

            if (area1 > area2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3:
            printf("Comparacao por PIB\n\n");
            printf("%s: %.2f\n", cidade1, pib1);
            printf("%s: %.2f\n\n", cidade2, pib2);

            if (pib1 > pib2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4:
            printf("Comparacao por PONTOS TURISTICOS\n\n");
            printf("%s: %d\n", cidade1, pontos1);
            printf("%s: %d\n\n", cidade2, pontos2);

            if (pontos1 > pontos2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else if (pontos2 > pontos1) {
                printf("Resultado: %s venceu!\n", cidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5:
            printf("Comparacao por DENSIDADE DEMOGRAFICA\n\n");
            printf("%s: %.2f\n", cidade1, densidade1);
            printf("%s: %.2f\n\n", cidade2, densidade2);

            // REGRA INVERTIDA (if aninhado)
            if (densidade1 < densidade2) {
                printf("Resultado: %s venceu!\n", cidade1);
            } else {
                if (densidade2 < densidade1) {
                    printf("Resultado: %s venceu!\n", cidade2);
                } else {
                    printf("Empate!\n");
                }
            }
            break;

        default:
            printf("Opcao invalida!\n");
    }

    return 0;
}
