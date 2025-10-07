/*
 * Super Trunfo de Países - Desafio Nível Mestre
 * Programa para cadastrar e exibir cartas do jogo Super Trunfo
 * com informações sobre cidades e comparar as cartas usando dois atributos.
 * Inclui menus dinâmicos para escolha dos atributos de comparação.
 */

#include <stdio.h>
#include <string.h>

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
    
    // Variáveis para armazenar as escolhas do usuário no menu
    int opcao1, opcao2;
    
    // Variáveis para armazenar os valores dos atributos escolhidos
    float valor_atributo1_carta1, valor_atributo1_carta2;
    float valor_atributo2_carta1, valor_atributo2_carta2;
    
    // Variáveis para armazenar os nomes dos atributos escolhidos
    char nome_atributo1[30], nome_atributo2[30];
    
    // Variáveis para armazenar os pontos e a soma
    int pontos_carta1 = 0, pontos_carta2 = 0;
    float soma_carta1 = 0, soma_carta2 = 0;
    
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
    
    // Menu interativo para escolha do primeiro atributo de comparação
    printf("\n=== Menu de Comparação de Cartas ===\n");
    printf("Escolha o PRIMEIRO atributo para comparar as cartas:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Populacional\n");
    printf("6 - PIB per capita\n");
    printf("Digite sua opção (1-6): ");
    scanf("%d", &opcao1);
    
    // Validação da primeira opção
    while (opcao1 < 1 || opcao1 > 6) {
        printf("Opção inválida! Por favor, escolha um número entre 1 e 6: ");
        scanf("%d", &opcao1);
    }
    
    // Menu dinâmico para escolha do segundo atributo (excluindo o primeiro)
    printf("\nEscolha o SEGUNDO atributo para comparar as cartas (diferente do primeiro):\n");
    
    // Exibir apenas as opções que não foram escolhidas no primeiro menu
    if (opcao1 != 1) printf("1 - População\n");
    if (opcao1 != 2) printf("2 - Área\n");
    if (opcao1 != 3) printf("3 - PIB\n");
    if (opcao1 != 4) printf("4 - Pontos Turísticos\n");
    if (opcao1 != 5) printf("5 - Densidade Populacional\n");
    if (opcao1 != 6) printf("6 - PIB per capita\n");
    
    printf("Digite sua opção (1-6, diferente de %d): ", opcao1);
    scanf("%d", &opcao2);
    
    // Validação da segunda opção (não pode ser igual à primeira)
    while (opcao2 < 1 || opcao2 > 6 || opcao2 == opcao1) {
        printf("Opção inválida ou igual à primeira escolha! Por favor, escolha um número entre 1 e 6 (diferente de %d): ", opcao1);
        scanf("%d", &opcao2);
    }
    
    // Comparação das cartas com base nos atributos escolhidos
    printf("\n=== Comparação de Cartas ===\n");
    
    // Processamento do primeiro atributo escolhido
    switch(opcao1) {
        case 1: // População (maior valor vence)
            strcpy(nome_atributo1, "População");
            valor_atributo1_carta1 = populacao1;
            valor_atributo1_carta2 = populacao2;
            
            // Determina o vencedor do primeiro atributo (maior valor vence)
            if (valor_atributo1_carta1 > valor_atributo1_carta2) {
                pontos_carta1++;
            } else if (valor_atributo1_carta2 > valor_atributo1_carta1) {
                pontos_carta2++;
            }
            break;
            
        case 2: // Área (maior valor vence)
            strcpy(nome_atributo1, "Área");
            valor_atributo1_carta1 = area1;
            valor_atributo1_carta2 = area2;
            
            // Determina o vencedor do primeiro atributo (maior valor vence)
            if (valor_atributo1_carta1 > valor_atributo1_carta2) {
                pontos_carta1++;
            } else if (valor_atributo1_carta2 > valor_atributo1_carta1) {
                pontos_carta2++;
            }
            break;
            
        case 3: // PIB (maior valor vence)
            strcpy(nome_atributo1, "PIB");
            valor_atributo1_carta1 = pib1;
            valor_atributo1_carta2 = pib2;
            
            // Determina o vencedor do primeiro atributo (maior valor vence)
            if (valor_atributo1_carta1 > valor_atributo1_carta2) {
                pontos_carta1++;
            } else if (valor_atributo1_carta2 > valor_atributo1_carta1) {
                pontos_carta2++;
            }
            break;
            
        case 4: // Pontos Turísticos (maior valor vence)
            strcpy(nome_atributo1, "Pontos Turísticos");
            valor_atributo1_carta1 = pontos_turisticos1;
            valor_atributo1_carta2 = pontos_turisticos2;
            
            // Determina o vencedor do primeiro atributo (maior valor vence)
            if (valor_atributo1_carta1 > valor_atributo1_carta2) {
                pontos_carta1++;
            } else if (valor_atributo1_carta2 > valor_atributo1_carta1) {
                pontos_carta2++;
            }
            break;
            
        case 5: // Densidade Populacional (menor valor vence - regra invertida)
            strcpy(nome_atributo1, "Densidade Populacional");
            valor_atributo1_carta1 = densidade_populacional1;
            valor_atributo1_carta2 = densidade_populacional2;
            
            // Determina o vencedor do primeiro atributo (menor valor vence)
            if (valor_atributo1_carta1 < valor_atributo1_carta2) {
                pontos_carta1++;
            } else if (valor_atributo1_carta2 < valor_atributo1_carta1) {
                pontos_carta2++;
            }
            break;
            
        case 6: // PIB per capita (maior valor vence)
            strcpy(nome_atributo1, "PIB per capita");
            valor_atributo1_carta1 = pib_per_capita1;
            valor_atributo1_carta2 = pib_per_capita2;
            
            // Determina o vencedor do primeiro atributo (maior valor vence)
            if (valor_atributo1_carta1 > valor_atributo1_carta2) {
                pontos_carta1++;
            } else if (valor_atributo1_carta2 > valor_atributo1_carta1) {
                pontos_carta2++;
            }
            break;
    }
    
    // Processamento do segundo atributo escolhido
    switch(opcao2) {
        case 1: // População (maior valor vence)
            strcpy(nome_atributo2, "População");
            valor_atributo2_carta1 = populacao1;
            valor_atributo2_carta2 = populacao2;
            
            // Determina o vencedor do segundo atributo (maior valor vence)
            if (valor_atributo2_carta1 > valor_atributo2_carta2) {
                pontos_carta1++;
            } else if (valor_atributo2_carta2 > valor_atributo2_carta1) {
                pontos_carta2++;
            }
            break;
            
        case 2: // Área (maior valor vence)
            strcpy(nome_atributo2, "Área");
            valor_atributo2_carta1 = area1;
            valor_atributo2_carta2 = area2;
            
            // Determina o vencedor do segundo atributo (maior valor vence)
            if (valor_atributo2_carta1 > valor_atributo2_carta2) {
                pontos_carta1++;
            } else if (valor_atributo2_carta2 > valor_atributo2_carta1) {
                pontos_carta2++;
            }
            break;
            
        case 3: // PIB (maior valor vence)
            strcpy(nome_atributo2, "PIB");
            valor_atributo2_carta1 = pib1;
            valor_atributo2_carta2 = pib2;
            
            // Determina o vencedor do segundo atributo (maior valor vence)
            if (valor_atributo2_carta1 > valor_atributo2_carta2) {
                pontos_carta1++;
            } else if (valor_atributo2_carta2 > valor_atributo2_carta1) {
                pontos_carta2++;
            }
            break;
            
        case 4: // Pontos Turísticos (maior valor vence)
            strcpy(nome_atributo2, "Pontos Turísticos");
            valor_atributo2_carta1 = pontos_turisticos1;
            valor_atributo2_carta2 = pontos_turisticos2;
            
            // Determina o vencedor do segundo atributo (maior valor vence)
            if (valor_atributo2_carta1 > valor_atributo2_carta2) {
                pontos_carta1++;
            } else if (valor_atributo2_carta2 > valor_atributo2_carta1) {
                pontos_carta2++;
            }
            break;
            
        case 5: // Densidade Populacional (menor valor vence - regra invertida)
            strcpy(nome_atributo2, "Densidade Populacional");
            valor_atributo2_carta1 = densidade_populacional1;
            valor_atributo2_carta2 = densidade_populacional2;
            
            // Determina o vencedor do segundo atributo (menor valor vence)
            if (valor_atributo2_carta1 < valor_atributo2_carta2) {
                pontos_carta1++;
            } else if (valor_atributo2_carta2 < valor_atributo2_carta1) {
                pontos_carta2++;
            }
            break;
            
        case 6: // PIB per capita (maior valor vence)
            strcpy(nome_atributo2, "PIB per capita");
            valor_atributo2_carta1 = pib_per_capita1;
            valor_atributo2_carta2 = pib_per_capita2;
            
            // Determina o vencedor do segundo atributo (maior valor vence)
            if (valor_atributo2_carta1 > valor_atributo2_carta2) {
                pontos_carta1++;
            } else if (valor_atributo2_carta2 > valor_atributo2_carta1) {
                pontos_carta2++;
            }
            break;
    }
    
    // Cálculo da soma dos atributos para cada carta
    // Usamos o operador ternário para ajustar o valor da densidade populacional (menor é melhor)
    soma_carta1 = (opcao1 == 5 ? 1/valor_atributo1_carta1 : valor_atributo1_carta1) + 
                  (opcao2 == 5 ? 1/valor_atributo2_carta1 : valor_atributo2_carta1);
    
    soma_carta2 = (opcao1 == 5 ? 1/valor_atributo1_carta2 : valor_atributo1_carta2) + 
                  (opcao2 == 5 ? 1/valor_atributo2_carta2 : valor_atributo2_carta2);
    
    // Exibição dos resultados da comparação
    printf("\n=== Resultado da Comparação ===\n");
    printf("\nAtributos escolhidos para comparação:\n");
    printf("1. %s\n", nome_atributo1);
    printf("2. %s\n", nome_atributo2);
    
    // Exibição dos valores do primeiro atributo
    printf("\nComparação do primeiro atributo (%s):\n", nome_atributo1);
    
    // Formatação específica para cada tipo de atributo
    if (opcao1 == 1) { // População
        printf("Carta 1 - %s: %d habitantes\n", cidade1, (int)valor_atributo1_carta1);
        printf("Carta 2 - %s: %d habitantes\n", cidade2, (int)valor_atributo1_carta2);
    } else if (opcao1 == 2) { // Área
        printf("Carta 1 - %s: %.2f km²\n", cidade1, valor_atributo1_carta1);
        printf("Carta 2 - %s: %.2f km²\n", cidade2, valor_atributo1_carta2);
    } else if (opcao1 == 3) { // PIB
        printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade1, valor_atributo1_carta1);
        printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade2, valor_atributo1_carta2);
    } else if (opcao1 == 4) { // Pontos Turísticos
        printf("Carta 1 - %s: %d pontos\n", cidade1, (int)valor_atributo1_carta1);
        printf("Carta 2 - %s: %d pontos\n", cidade2, (int)valor_atributo1_carta2);
    } else if (opcao1 == 5) { // Densidade Populacional
        printf("Carta 1 - %s: %.2f habitantes/km²\n", cidade1, valor_atributo1_carta1);
        printf("Carta 2 - %s: %.2f habitantes/km²\n", cidade2, valor_atributo1_carta2);
    } else if (opcao1 == 6) { // PIB per capita
        printf("Carta 1 - %s: R$ %.2f\n", cidade1, valor_atributo1_carta1);
        printf("Carta 2 - %s: R$ %.2f\n", cidade2, valor_atributo1_carta2);
    }
    
    // Exibição do resultado do primeiro atributo
    if (opcao1 == 5) { // Densidade Populacional (menor valor vence)
        if (valor_atributo1_carta1 < valor_atributo1_carta2) {
            printf("Vencedor no atributo %s: Carta 1 (%s)\n", nome_atributo1, cidade1);
        } else if (valor_atributo1_carta2 < valor_atributo1_carta1) {
            printf("Vencedor no atributo %s: Carta 2 (%s)\n", nome_atributo1, cidade2);
        } else {
            printf("Empate no atributo %s!\n", nome_atributo1);
        }
    } else { // Outros atributos (maior valor vence)
        if (valor_atributo1_carta1 > valor_atributo1_carta2) {
            printf("Vencedor no atributo %s: Carta 1 (%s)\n", nome_atributo1, cidade1);
        } else if (valor_atributo1_carta2 > valor_atributo1_carta1) {
            printf("Vencedor no atributo %s: Carta 2 (%s)\n", nome_atributo1, cidade2);
        } else {
            printf("Empate no atributo %s!\n", nome_atributo1);
        }
    }
    
    // Exibição dos valores do segundo atributo
    printf("\nComparação do segundo atributo (%s):\n", nome_atributo2);
    
    // Formatação específica para cada tipo de atributo
    if (opcao2 == 1) { // População
        printf("Carta 1 - %s: %d habitantes\n", cidade1, (int)valor_atributo2_carta1);
        printf("Carta 2 - %s: %d habitantes\n", cidade2, (int)valor_atributo2_carta2);
    } else if (opcao2 == 2) { // Área
        printf("Carta 1 - %s: %.2f km²\n", cidade1, valor_atributo2_carta1);
        printf("Carta 2 - %s: %.2f km²\n", cidade2, valor_atributo2_carta2);
    } else if (opcao2 == 3) { // PIB
        printf("Carta 1 - %s: %.2f bilhões de reais\n", cidade1, valor_atributo2_carta1);
        printf("Carta 2 - %s: %.2f bilhões de reais\n", cidade2, valor_atributo2_carta2);
    } else if (opcao2 == 4) { // Pontos Turísticos
        printf("Carta 1 - %s: %d pontos\n", cidade1, (int)valor_atributo2_carta1);
        printf("Carta 2 - %s: %d pontos\n", cidade2, (int)valor_atributo2_carta2);
    } else if (opcao2 == 5) { // Densidade Populacional
        printf("Carta 1 - %s: %.2f habitantes/km²\n", cidade1, valor_atributo2_carta1);
        printf("Carta 2 - %s: %.2f habitantes/km²\n", cidade2, valor_atributo2_carta2);
    } else if (opcao2 == 6) { // PIB per capita
        printf("Carta 1 - %s: R$ %.2f\n", cidade1, valor_atributo2_carta1);
        printf("Carta 2 - %s: R$ %.2f\n", cidade2, valor_atributo2_carta2);
    }
    
    // Exibição do resultado do segundo atributo
    if (opcao2 == 5) { // Densidade Populacional (menor valor vence)
        if (valor_atributo2_carta1 < valor_atributo2_carta2) {
            printf("Vencedor no atributo %s: Carta 1 (%s)\n", nome_atributo2, cidade1);
        } else if (valor_atributo2_carta2 < valor_atributo2_carta1) {
            printf("Vencedor no atributo %s: Carta 2 (%s)\n", nome_atributo2, cidade2);
        } else {
            printf("Empate no atributo %s!\n", nome_atributo2);
        }
    } else { // Outros atributos (maior valor vence)
        if (valor_atributo2_carta1 > valor_atributo2_carta2) {
            printf("Vencedor no atributo %s: Carta 1 (%s)\n", nome_atributo2, cidade1);
        } else if (valor_atributo2_carta2 > valor_atributo2_carta1) {
            printf("Vencedor no atributo %s: Carta 2 (%s)\n", nome_atributo2, cidade2);
        } else {
            printf("Empate no atributo %s!\n", nome_atributo2);
        }
    }
    
    // Exibição do resultado final baseado na soma dos atributos
    printf("\n=== Resultado Final ===\n");
    printf("Pontuação:\n");
    printf("Carta 1 - %s: %d pontos\n", cidade1, pontos_carta1);
    printf("Carta 2 - %s: %d pontos\n", cidade2, pontos_carta2);
    
    // Determina o vencedor final com base na pontuação
    if (pontos_carta1 > pontos_carta2) {
        printf("\nVENCEDOR FINAL: Carta 1 (%s) com %d pontos!\n", cidade1, pontos_carta1);
    } else if (pontos_carta2 > pontos_carta1) {
        printf("\nVENCEDOR FINAL: Carta 2 (%s) com %d pontos!\n", cidade2, pontos_carta2);
    } else {
        printf("\nEMPATE FINAL! Ambas as cartas têm %d pontos.\n", pontos_carta1);
    }
    
    return 0;
}