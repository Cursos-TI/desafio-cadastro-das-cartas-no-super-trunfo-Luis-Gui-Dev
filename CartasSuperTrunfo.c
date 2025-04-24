#include <stdio.h>

#define RESET       "\033[0m"
#define BOLD        "\033[1m"
#define RED         "\033[31m"
#define GREEN       "\033[32m"
#define CYAN        "\033[36m"
#define YELLOW      "\033[33m"

// Estrutura da carta
typedef struct {
    char estado[2];
    char cidade[50];
    unsigned long int populacao;
    float area;
    float pib;
    int pontosTuristicos;
    float densidade;
    float pibPerCapita;
    float superPoder;
} Carta;

// Função para calcular atributos derivados
void calcularAtributos(Carta *c) {
    c->densidade = c->area > 0 ? c->populacao / c->area : 0;
    c->pibPerCapita = c->populacao > 0 ? c->pib / c->populacao : 0;
    c->superPoder = c->populacao + c->area + c->pib + c->pontosTuristicos + c->pibPerCapita + (c->densidade > 0 ? 1 / c->densidade : 0);
}

int main() {
    Carta cartas[2];

    printf(BOLD CYAN);
    printf("══════════════════════════════════════════════════════════════════════════════\n");
    printf("🃏 SUPER TRUNFO: PAÍSES - MODO AVANÇADO\n");
    printf("══════════════════════════════════════════════════════════════════════════════\n");
    printf(RESET YELLOW);
    printf("• Informe os dados de duas cidades (Estado, Nome, População, Área, PIB, Pontos Turísticos).\n");
    printf("• O sistema calculará automaticamente os atributos derivados e comparará as cartas.\n\n");
    printf(RESET);

    // Cadastro das cartas
    for (int i = 0; i < 2; i++) {
        printf(GREEN BOLD "Cadastro da Carta 0%d\n" RESET, i + 1);
        printf("Estado (A-H): ");
        scanf("%1s", cartas[i].estado);
        printf("Nome da Cidade: ");
        scanf("%s", cartas[i].cidade);
        printf("População: ");
        scanf("%lu", &cartas[i].populacao);
        printf("Área (km²): ");
        scanf("%f", &cartas[i].area);
        printf("PIB: ");
        scanf("%f", &cartas[i].pib);
        printf("Nº de Pontos Turísticos: ");
        scanf("%d", &cartas[i].pontosTuristicos);
        calcularAtributos(&cartas[i]);
        printf(GREEN "✔️ Carta %s cadastrada com sucesso!\n\n" RESET, cartas[i].estado);
    }

    // Comparações
    printf(CYAN);
    printf("══════════════════════════════════════════════════════════════════════════════\n");
    printf("📊 COMPARAÇÃO ENTRE CARTAS\n");
    printf("══════════════════════════════════════════════════════════════════════════════\n" RESET);

    // Função simplificada pra printar quem venceu
    #define COMPARAR(titulo, c1, c2, inverso) \
        printf("%s: Carta %d venceu (%d)\n", titulo, ((inverso) ? (c1 < c2) : (c1 > c2)) ? 1 : 2, ((inverso) ? (c1 < c2) : (c1 > c2)) ? 1 : 0)

    COMPARAR("População", cartas[0].populacao, cartas[1].populacao, 0);
    COMPARAR("Área", cartas[0].area, cartas[1].area, 0);
    COMPARAR("PIB", cartas[0].pib, cartas[1].pib, 0);
    COMPARAR("Pontos Turísticos", cartas[0].pontosTuristicos, cartas[1].pontosTuristicos, 0);
    COMPARAR("Densidade Populacional", cartas[0].densidade, cartas[1].densidade, 1);
    COMPARAR("PIB per Capita", cartas[0].pibPerCapita, cartas[1].pibPerCapita, 0);
    COMPARAR("Super Poder", cartas[0].superPoder, cartas[1].superPoder, 0);

    return 0;
}

