#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    #include <stdio.h>



    // ===== CARTA 1 =====
    char estado1;
    char codigo1[4];
    char nomeCidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosTuristicos1;

    // ===== CARTA 2 =====
    char estado2;
    char codigo2[4];
    char nomeCidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosTuristicos2;

    // ===== ENTRADA DE DADOS =====
    printf("Cadastro da Carta 1\n");

    printf("Estado: ");
    scanf(" %c", &estado1);

    printf("Codigo: ");
    scanf("%s", codigo1);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade1);

    printf("Populacao: ");
    scanf("%lu", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\nCadastro da Carta 2\n");

    printf("Estado: ");
    scanf(" %c", &estado2);

    printf("Codigo: ");
    scanf("%s", codigo2);

    printf("Nome da cidade: ");
    scanf(" %[^\n]", nomeCidade2);

    printf("Populacao: ");
    scanf("%lu", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB (em bilhoes): ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    // ===== CALCULOS =====
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = (pib1 * 1000000000.0) / populacao1;
    float pibPerCapita2 = (pib2 * 1000000000.0) / populacao2;

    // ===== COMPARACOES =====
    printf("\n=== Comparacao de Cartas ===\n");

    if (populacao1 > populacao2)
        printf("Populacao: %s venceu\n", nomeCidade1);
    else
        printf("Populacao: %s venceu\n", nomeCidade2);

    if (area1 > area2)
        printf("Area: %s venceu\n", nomeCidade1);
    else
        printf("Area: %s venceu\n", nomeCidade2);

    if (pib1 > pib2)
        printf("PIB: %s venceu\n", nomeCidade1);
    else
        printf("PIB: %s venceu\n", nomeCidade2);

    if (pontosTuristicos1 > pontosTuristicos2)
        printf("Pontos Turisticos: %s venceu\n", nomeCidade1);
    else
        printf("Pontos Turisticos: %s venceu\n", nomeCidade2);

    // Densidade: MENOR vence
    if (densidade1 < densidade2)
        printf("Densidade Populacional: %s venceu\n", nomeCidade1);
    else
        printf("Densidade Populacional: %s venceu\n", nomeCidade2);

    if (pibPerCapita1 > pibPerCapita2)
        printf("PIB per Capita: %s venceu\n", nomeCidade1);
    else
        printf("PIB per Capita: %s venceu\n", nomeCidade2);

    


    return 0;
}
