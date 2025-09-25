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

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Comparação População:

    if (populacao1 > populacao2) {
        printf("Carta 1 tem maior população.\n");
    } else {
        printf("Carta 2 tem maior população.\n");
    }

    // Comparação Área:

    if (area1 > area2) {
        printf("Carta 1 tem área maior.\n");
    } else {
        printf("Carta 2 tem área maior.\n");
    }

    // Comparação PIB:

    if (pib1 > pib2) {
        printf("Carta 1 tem PIB maior.\n");
    } else {
        printf("Carta 2 tem PIB maior.\n");
    }

    // Comparação Densidade Populacional:

    if (densidade1 < densidade2) {
        printf("Carta 1 tem Densidade menor.\n");
    } else {
        printf("Carta 2 tem Densidade menor.\n");
    }

    // Comparação PIB per Capita:

    if (capita1 > capita2) {
        printf("Carta 1 tem PIB per Capita maior.\n");
    } else {
        printf("Carta 2 tem PIB per Capita maior.\n");
    }

    // Comparação Turístico:

    if (turistico1 > turistico2) {
        printf("Carta 1 tem quantidade de pontos turísticos maior.\n");
    } else {
        printf("Carta 2 tem quantidade de pontos turísticos maior.\n");
    }

     printf("\n-------------------------------------------------------------\n");


    // Exibição dos Resultados:

    // Resultado População:
    printf("Comparação de Cartas (Atributo: População): \n");
    printf("A carta 1 venceu: %s\n", cidade1);

    // Resultado área:
    printf("Comparação de Cartas (Atributo: Área): \n");
     printf("A carta 1 venceu: %s\n", cidade1);

    // Resultado PIB:
    printf("Comparação de Cartas (Atributo: PIB): \n");
    printf("A carta 1 venceu: %s\n", cidade1);

    // Resultado Densidade:
    printf("Comparação de Cartas (Atributo: Densidade Populacional): \n");
    printf("A carta 2 venceu: %s\n", cidade2);

    // Resultado PIB per Capita:
    printf("Comparação de Cartas (Atributo: PIB per Capita): \n");
     printf("A carta 1 venceu: %s\n", cidade1);

    // Resultado Pontos turísticos:
    printf("Comparação de Cartas (Atributo: Pontos Turísticos): \n");
    printf("A carta 1 venceu: %s\n", cidade1);








    return 0;
}
