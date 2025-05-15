#include <stdio.h>

// Desafio Super Trunfo - Países
int main() {
    int turisticos1, turisticos2;
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2; 
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    char estado1[30], estado2[30];

    // Cadastro da Carta 1
    printf("Carta 1\n");
    printf("Digite seu Código 1: ");
    scanf("%s", codigo1);
    printf("Digite sua Cidade 1: ");
    scanf("%s", cidade1);
    printf("Digite seu Estado 1: ");
    scanf("%s", estado1);
    printf("Digite o Número de Pontos Turísticos 1: ");
    scanf("%d", &turisticos1);
    printf("Digite o Número de População 1: ");
    scanf("%d", &populacao1);
    printf("Digite a Área 1 (km²): ");
    scanf("%f", &area1);
    printf("Digite o PIB 1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("\n");

    // Cadastro da Carta 2
    printf("Carta 2\n");
    printf("Digite seu Código 2: ");
    scanf("%s", codigo2);
    printf("Digite sua Cidade 2: ");
    scanf("%s", cidade2);
    printf("Digite seu Estado 2: ");
    scanf("%s", estado2);
    printf("Digite o Número de Pontos Turísticos 2: ");
    scanf("%d", &turisticos2);
    printf("Digite o Número de População 2: ");
    scanf("%d", &populacao2);
    printf("Digite a Área 2 (km²): ");
    scanf("%f", &area2);
    printf("Digite o PIB 2 (em bilhões): ");
    scanf("%f", &pib2);

    // Cálculos
    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;
    float pibcapita1 = pib1 / populacao1;
    float pibcapita2 = pib2 / populacao2;
    float inversodensidade1 = 1 / densidade1;
    float inversodensidade2 = 1 / densidade2;

    float superpoder1 = populacao1 + area1 + pib1 + turisticos1 + pibcapita1 + inversodensidade1;
    float superpoder2 = populacao2 + area2 + pib2 + turisticos2 + pibcapita2 + inversodensidade2;

    // Exibindo a Carta 1
    printf("\n--- Carta 1 ---\n");
    printf("Código: %s\nCidade: %s\nEstado: %s\n", codigo1, cidade1, estado1);
    printf("Turísticos: %d\nPopulação: %d\nÁrea: %.2f km²\nPIB: R$ %.2f bi\n", turisticos1, populacao1, area1, pib1);
    printf("Densidade: %.2f hab/km²\nPIB per capita: R$ %.2f\n", densidade1, pibcapita1);

    // Exibindo a Carta 2
    printf("\n--- Carta 2 ---\n");
    printf("Código: %s\nCidade: %s\nEstado: %s\n", codigo2, cidade2, estado2);
    printf("Turísticos: %d\nPopulação: %d\nÁrea: %.2f km²\nPIB: R$ %.2f bi\n", turisticos2, populacao2, area2, pib2);
    printf("Densidade: %.2f hab/km²\nPIB per capita: R$ %.2f\n", densidade2, pibcapita2);

    // Comparações
    //Resultado 1 para verdadeiro – Carta 1 vence – e 0 para falso – Carta 2 vence
    printf("\n--- Comparações ---\n");
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", turisticos1 > turisticos2);
    printf("Densidade Populacional (menor é melhor): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pibcapita1 > pibcapita2);
    printf("Superpoder: %d\n", superpoder1 > superpoder2);

    printf("\nDesafio Super Trunfo Finalizado!\n");

    return 0;
}
