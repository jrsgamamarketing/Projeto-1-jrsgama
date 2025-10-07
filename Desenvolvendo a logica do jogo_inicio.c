/*Desenvolvendo a logica do Jogo - Aventureiro
 * Super Trunfo de Países
 * Programa para cadastrar e exibir cartas do jogo Super Trunfo
 * com informações sobre cidades e comparar as cartas.
 * Inclui menu interativo para escolha do atributo de comparação.
 */

#include <stdio.h>

int main() {
    // Declaração das variáveis para a primeira carta
    char estado1;
    char codigo1[4];  // Array para armazenar o código (ex: A01)
    char cidade1[50]; // Array para armazenar o nome da cidade
    int populacao1;
    float area1;
    float pib1;
    int pontos_turisticos1;
    float densidade_populacional1; // Densidade populacional (habitantes por km²)
    float pib_per_capita1;         // PIB per capita (bilhões de reais por habitante)
    
    // Declaração das variáveis para a segunda carta
    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int pontos_turisticos2;
    float densidade_populacional2;
    float pib_per_capita2;
    
    // Variável para armazenar a escolha do usuário no menu
    int opcao;
    
    // Instruções para o usuário
    printf("=== Super Trunfo de Países - Cadastro de Cartas ===\n\n");
    
    // Leitura dos dados da primeira carta
    printf("Cadastro da Carta 1:\n");
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado1);
    
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo1);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade1);  // Lê a linha inteira, incluindo espaços
    
    printf("Digite a População (número de habitantes): ");
    scanf("%d", &populacao1);
    
    printf("Digite a Área em km²: ");
    scanf("%f", &area1);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);
    
    // Leitura dos dados da segunda carta
    printf("\nCadastro da Carta 2:\n");
    printf("Digite o Estado (letra de A a H): ");
    scanf(" %c", &estado2);
    
    printf("Digite o Código da Carta (ex: A01): ");
    scanf("%s", codigo2);
    
    printf("Digite o Nome da Cidade: ");
    scanf(" %[^\n]", cidade2);
    
    printf("Digite a População (número de habitantes): ");
    scanf("%d", &populacao2);
    
    printf("Digite a Área em km²: ");
    scanf("%f", &area2);
    
    printf("Digite o PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    
    printf("Digite o Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);
    
    // Cálculo da densidade populacional e PIB per capita para a carta 1
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1; // Convertendo PIB para reais
    
    // Cálculo da densidade populacional e PIB per capita para a carta 2
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2; // Convertendo PIB para reais
    
    // Exibição dos dados das cartas cadastradas
    printf("\n=== Cartas Cadastradas ===\n");
    
    // Exibição da primeira carta
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional1);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita1);
    
    // Exibição da segunda carta
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f habitantes/km²\n", densidade_populacional2);
    printf("PIB per capita: R$ %.2f\n", pib_per_capita2);
    
    // Menu interativo para escolha do atributo de comparação
    printf("\n=== Menu de Comparação de Cartas ===\n");
    printf("Escolha o atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Digite sua opção (1-6): ");
    scanf("%d", &opcao);
    
    // Comparação das cartas com base no atributo escolhido usando switch
    printf("\n=== Comparação de Cartas ===\n");
    
    switch(opcao) {
        case 1: // População (maior valor vence)
            printf("Atributo escolhido: População\n\n");
            printf("Carta 1 - %s (%s): %d habitantes\n", cidade1, codigo1, populacao1);
            printf("Carta 2 - %s (%s): %d habitantes\n", cidade2, codigo2, populacao2);
            
            if (populacao1 > populacao2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate! As duas cartas têm a mesma população.\n");
            }
            break;
            
        case 2: // Área (maior valor vence)
            printf("Atributo escolhido: Área\n\n");
            printf("Carta 1 - %s (%s): %.2f km²\n", cidade1, codigo1, area1);
            printf("Carta 2 - %s (%s): %.2f km²\n", cidade2, codigo2, area2);
            
            if (area1 > area2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate! As duas cartas têm a mesma área.\n");
            }
            break;
            
        case 3: // PIB (maior valor vence)
            printf("Atributo escolhido: PIB\n\n");
            printf("Carta 1 - %s (%s): %.2f bilhões de reais\n", cidade1, codigo1, pib1);
            printf("Carta 2 - %s (%s): %.2f bilhões de reais\n", cidade2, codigo2, pib2);
            
            if (pib1 > pib2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate! As duas cartas têm o mesmo PIB.\n");
            }
            break;
            
        case 4: // Pontos Turísticos (maior valor vence)
            printf("Atributo escolhido: Pontos Turísticos\n\n");
            printf("Carta 1 - %s (%s): %d pontos\n", cidade1, codigo1, pontos_turisticos1);
            printf("Carta 2 - %s (%s): %d pontos\n", cidade2, codigo2, pontos_turisticos2);
            
            if (pontos_turisticos1 > pontos_turisticos2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontos_turisticos2 > pontos_turisticos1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate! As duas cartas têm o mesmo número de pontos turísticos.\n");
            }
            break;
            
        case 5: // Densidade Populacional (menor valor vence - regra invertida)
            printf("Atributo escolhido: Densidade Populacional\n\n");
            printf("Carta 1 - %s (%s): %.2f habitantes/km²\n", cidade1, codigo1, densidade_populacional1);
            printf("Carta 2 - %s (%s): %.2f habitantes/km²\n", cidade2, codigo2, densidade_populacional2);
            
            // Regra invertida: menor valor vence
            if (densidade_populacional1 < densidade_populacional2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade_populacional2 < densidade_populacional1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate! As duas cartas têm a mesma densidade populacional.\n");
            }
            break;
            
        case 6: // PIB per capita (maior valor vence)
            printf("Atributo escolhido: PIB per capita\n\n");
            printf("Carta 1 - %s (%s): R$ %.2f\n", cidade1, codigo1, pib_per_capita1);
            printf("Carta 2 - %s (%s): R$ %.2f\n", cidade2, codigo2, pib_per_capita2);
            
            if (pib_per_capita1 > pib_per_capita2) {
                printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib_per_capita2 > pib_per_capita1) {
                printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("\nResultado: Empate! As duas cartas têm o mesmo PIB per capita.\n");
            }
            break;
            
        default: // Opção inválida
            printf("Opção inválida! Por favor, escolha um número entre 1 e 6.\n");
            break;
    }
    
    return 0;
}