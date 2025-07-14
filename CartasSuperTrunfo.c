#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // === DEFINIÇÃO DE VARIÁVEIS ===
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char codigo1[4], codigo2[4];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos1, pontos2;
    //Nivel Aventureiro Add-on
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    // Carta 1
    printf("Digite o código da Cidade 1: ");
    scanf("%s", codigo1);

    printf("Digite a população da Cidade 1: ");
    scanf("%d", &populacao1);

    printf("Digite a área da Cidade 1 (em km²): ");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade 1 (em bilhões): ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos da Cidade 1: ");
    scanf("%d", &pontos1);

    // Carta 2
    printf("\nDigite o código da Cidade 2: ");
    scanf("%s", codigo2);

    printf("Digite a população da Cidade 2: ");
    scanf("%d", &populacao2);

    printf("Digite a área da Cidade 2 (em km²): ");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade 2 (em bilhões): ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos da Cidade 2: ");
    scanf("%d", &pontos2);

    //nivel aventureiro -- Cálculo dos atributos derivados
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\n=== CARTA 1 ===\n");
    printf("Código: %s\n", codigo1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões\n", pib1);
    printf("Pontos Turísticos: %d\n", pontos1);
    //nivel aventureiro add-on carta 1
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.6f bilhões por habitante\n", pibPerCapita1);


    printf("\n=== CARTA 2 ===\n");
    printf("Código: %s\n", codigo2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões\n", pib2);
    printf("Pontos Turísticos: %d\n", pontos2);
    //nivel aventureiro add on carta 2
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.6f bilhões por habitante\n", pibPerCapita2);

//==NIVEL MESTRE==

// Cálculo do Super Poder
    float superPoder1, superPoder2;

// densidade invertida: 1/densidade
    superPoder1 = (float)pontos1 + (float)populacao1 + pib1 + (1 / densidade1) + pibPerCapita1;
    superPoder2 = (float)pontos2 + (float)populacao2 + pib2 + (1 / densidade2) + pibPerCapita2;

// Comparações e resultado final
    printf("\n=== COMPARAÇÃO ===\n");

    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos1 > pontos2);
    printf("Densidade Populacional (vence o MENOR): %d\n", densidade1 < densidade2);
    printf("PIB per Capita: %d\n", pibPerCapita1 > pibPerCapita2);
    printf("Super Poder: %d\n", superPoder1 > superPoder2);

    printf("\nSuper Poder da Carta 1: %.4f\n", superPoder1);
    printf("Super Poder da Carta 2: %.4f\n", superPoder2);

    return 0;
}
