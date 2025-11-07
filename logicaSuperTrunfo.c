#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.
// Tainara paula

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    char estado1[20];
    char estado2[20];
    char codigo1[20];
    char codigo2[20];
    char cidade1[20];
    char cidade2[20];
    unsigned long int populacao1, populacao2; // tipo maior
    float area1, area2;
    float pib1, pib2;
    int turistico1, turistico2;
    float densidade1, densidade2;
    float capita1, capita2;
    int opcao;

    // Abertura do jogo:
    printf("\n===== JOGO SUPER TRUNFO =====\n");
    
    // Cadastro das Cartas:
    // Carta 1:

    printf("Digite uma letra de 'A' a 'H' para representar o seu estado: ");
    scanf("%s", estado1);

    printf("Digite a letra do seu estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo1);

    getchar(); // limpar buffer

    printf("Digite o nome da cidade: ");
    fgets(cidade1, sizeof(cidade1), stdin); 

    printf("Digite o número de habitantes desta cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área desta cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o produto interno desta cidade (PIB): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos na cidade: ");
    scanf("%d", &turistico1);
    printf("\n-------------------------------------------------------------\n");

    // Carta 1: CALCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA:

    densidade1 = (float) populacao1 / area1;
    capita1 = (pib1 * 1000000000) / populacao1;

    // Carta 2:
    
    printf("Digite uma letra de 'A' a 'H' para representar o seu segundo estado: ");
    scanf("%s", estado2);

    printf("Digite a letra do seu segundo estado seguida de um número de 01 a 04: ");
    scanf("%s", codigo2);

    getchar(); // limpar buffer

    printf("Digite o nome da segunda cidade: ");
    fgets(cidade2, sizeof(cidade2), stdin); 

    printf("Digite o número de habitantes desta segunda cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área desta segunda cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o produto interno desta segunda cidade (PIB): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos na segunda cidade: ");
    scanf("%d", &turistico2);
    printf("\n-------------------------------------------------------------\n");

    // Carta 2: CALCULO DA DENSIDADE POPULACIONAL E PIB PER CAPITA:

    densidade2 = (float) populacao2 / area2;
    capita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos Dados das Cartas:
    printf("\n ===== EXIBIÇÃO DOS DADOS DAS CARTAS ===== \n");

    // Carta 1:

    printf("Carta 1:\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", capita1);

    // Carta 2: 
    printf("\n-------------------------------------------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", capita2);

    printf("\n-------------------------------------------------------------\n");
    printf("\n===== COMPARAÇÃO DE CARTAS =====\n");
    
    // Menu interativo:
    printf("Escolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos Turísticos\n");
    printf("5 - Densidade Demográfica\n");
    printf("6 - PIB per Capita\n");
    printf("Digite sua opção: ");
    scanf("%d", &opcao);
    printf("\n-------------------------------------------------------------\n");

    // Comparação de Cartas utilizando switch:
    
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.
    switch (opcao) {
    case 1:
        printf("===== RESULTADO DO VENCEDOR =====\n");
        printf("Comparando População:\n\n");

        printf("%s: %lu habitantes\n", cidade1, populacao1);
        printf("%s: %lu habitantes\n", cidade2, populacao2);

        if (populacao1 > populacao2)
            printf("🏆 Vencedora: %s\n", cidade1);
        else if (populacao2 > populacao1)
            printf("🏆 Vencedora: %s\n", cidade2);
        else
            printf("🤝 Empate!\n");
        break;

    case 2:
        printf("===== RESULTADO DO VENCEDOR =====\n");
        printf("Comparando Área:\n\n");

        printf("%s : %.2f km²\n", cidade1, area1);
        printf("%s : %.2f km²\n\n", cidade2, area2);

        if (area1 > area2)
            printf("🏆 Vencedora: %s\n", cidade1);
        else if (area2 > area1)
            printf("🏆 Vencedora: %s\n", cidade2);
        else
            printf("🤝 Empate!\n");
        break;

    case 3:
        printf("===== RESULTADO DO VENCEDOR =====\n");
        printf("Comparando PIB:\n\n");

        printf("%s %.2f bilhões\n", cidade1, pib1);
        printf("%s %.2f bilhões\n\n", cidade2, pib2);

        if (pib1 > pib2)
            printf("🏆 Vencedora: %s\n", cidade1);
        else if (pib2 > pib1)
            printf("🏆 Vencedora: %s\n", cidade2);
        else
            printf("🤝 Empate!\n");
        break;

    case 4:
        printf("===== RESULTADO DO VENCEDOR =====\n");
        printf("Comparando Pontos Turísticos:\n\n");

        printf("%s : %d pontos\n", cidade1, turistico1);
        printf("%s : %d pontos\n\n", cidade2, turistico2);

        if (turistico1 > turistico2)
            printf("🏆 Vencedora: %s\n", cidade1);
        else if (turistico2 > turistico1)
            printf("🏆 Vencedora: %s\n", cidade2);
        else
            printf("🤝 Empate!\n");
        break;

    case 5:
        printf("===== RESULTADO DO VENCEDOR =====\n");
        printf("Comparando Densidade Demográfica:\n\n");

        printf("%s : %.2f hab/km²\n", cidade1, densidade1);
        printf("%s : %.2f hab/km²\n\n", cidade2, densidade2);

        if (densidade1 < densidade2)
            printf("🏆 Vencedora: %s\n", cidade1);
        else if (densidade2 < densidade1)
            printf("🏆 Vencedora: %s\n", cidade2);
        else
            printf("🤝 Empate!\n");
        break;

    case 6:
        printf("===== RESULTADO DO VENCEDOR =====\n");
        printf("Comparando PIB per Capita:\n\n");

        printf("%s : %.2f reais\n", cidade1, capita1);
        printf("%s : %.2f reais\n\n", cidade2, capita2);

        if (capita1 > capita2)
            printf("🏆 Vencedora: %s\n", cidade1);
        else if (capita2 > capita1)
            printf("🏆 Vencedora: %s\n", cidade2);
        else
            printf("🤝 Empate!\n");
        break;

    default:
        printf("⚠️ Opção inválida! Tente novamente.\n");
        break;
}
    return 0;
}
