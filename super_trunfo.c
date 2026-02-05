#include <stdio.h>

// ===== ESTRUTURA DA CARTA =====
typedef struct {
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontos;
    float densidade;
} Carta;

// ===== FUNÇÕES AUXILIARES =====
void linha() {
    printf("\n====================================================\n");
}

char* nomeAtributo(int op) {
    switch(op) {
        case 1: return "Populacao";
        case 2: return "Area";
        case 3: return "PIB";
        case 4: return "Pontos Turisticos";
        case 5: return "Densidade Demografica (MENOR vence)";
        default: return "Desconhecido";
    }
}

float obterValor(Carta c, int atributo) {
    switch(atributo) {
        case 1: return c.populacao;
        case 2: return c.area;
        case 3: return c.pib;
        case 4: return c.pontos;
        case 5: return c.densidade;
        default: return 0;
    }
}

int main() {

    // ===== CARTAS PRÉ-CADASTRADAS =====
    Carta carta1 = {"Sao Paulo", 12300000, 1521.11, 699.28, 50};
    Carta carta2 = {"Rio de Janeiro", 6000000, 1182.30, 300.50, 30};

    // Calcula densidade
    carta1.densidade = carta1.populacao / carta1.area;
    carta2.densidade = carta2.populacao / carta2.area;

    int att1, att2;

    // ===== INTERFACE =====
    linha();
    printf("              SUPER TRUNFO - DESAFIO FINAL\n");
    linha();

    printf("Cartas em jogo:\n1) %s\n2) %s\n", carta1.cidade, carta2.cidade);

    // ===== MENU 1 =====
    linha();
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1 - Populacao\n2 - Area\n3 - PIB\n4 - Pontos Turisticos\n5 - Densidade Demografica\nOpcao: ");
    scanf("%d", &att1);

    // ===== MENU 2 =====
    linha();
    printf("Escolha o SEGUNDO atributo (diferente do primeiro):\n");

    for (int i = 1; i <= 5; i++) {
        if (i != att1) {
            printf("%d - %s\n", i, nomeAtributo(i));
        }
    }

    printf("Opcao: ");
    scanf("%d", &att2);

    if (att1 == att2) {
        printf("Atributos iguais! Encerrando.\n");
        return 0;
    }

    // ===== OBTÉM VALORES =====
    float v1a = obterValor(carta1, att1);
    float v2a = obterValor(carta2, att1);

    float v1b = obterValor(carta1, att2);
    float v2b = obterValor(carta2, att2);

    // ===== EXIBIÇÃO =====
    linha();
    printf("RESULTADO DA COMPARACAO\n");
    linha();

    printf("Atributos escolhidos:\n1) %s\n2) %s\n", nomeAtributo(att1), nomeAtributo(att2));

    linha();
    printf("%-20s | %-12s | %-12s\n", "Cidade", "Atributo 1", "Atributo 2");
    linha();

    printf("%-20s | %-12.2f | %-12.2f\n", carta1.cidade, v1a, v1b);
    printf("%-20s | %-12.2f | %-12.2f\n", carta2.cidade, v2a, v2b);

    linha();

    float soma1 = v1a + v1b;
    float soma2 = v2a + v2b;

    printf("Soma dos atributos:\n");
    printf("%s: %.2f\n", carta1.cidade, soma1);
    printf("%s: %.2f\n", carta2.cidade, soma2);

    linha();

    if (soma1 == soma2) {
        printf("RESULTADO FINAL: EMPATE!\n");
    } else {
        char *vencedor = (soma1 > soma2) ? carta1.cidade : carta2.cidade;
        printf("RESULTADO FINAL: %s VENCEU!\n", vencedor);
    }

    linha();

    return 0;
}
