#include <stdio.h>
int main() {
    /*
    - Meu primeiro jogo completo;
    - Desafio Super Trunfo - Países;
    - Tema 2 e Tema 3;
    - Desenvolvido por: Tainara Paula;
    */
    
    // Definição das variáveis para armazenar as propiedades das cidades:

    char nomeEstado1[2];
    char nomeEstado2[2];
    char codigoCarta1[20];
    char codigoCarta2[20];
    char nomeCidade1[50];
    char nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    int turistico1, turistico2;
    int opcao;
    float area1, area2;
    float pib1, pib2;
    float densidadeDemo1, densidadeDemo2;
    float pibCapita1, pibCapita2;

    // Abertura do jogo:

    printf("=== JOGO SUPER TRUNFO - PAISES ===\n");
    
    // Cadastro das Cartas | Carta 1:

    printf("Digite uma letra de ('A' a 'H') para representar o primeiro estado: ");
    scanf("%s", nomeEstado1);

    printf("Digite a letra do primeiro estado seguida de um número de (01 a 04): ");
    scanf("%s", codigoCarta1);

    getchar(); // limpar buffer

    printf("Digite o nome da primeira cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin); 

    printf("Digite o número de habitantes da primeira cidade: ");
    scanf("%lu", &populacao1);

    printf("Digite a área da primeira cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("Digite o produto interno da primeira cidade (PIB): ");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf("%d", &turistico1);
    printf("\n-------------------------------------------------------------\n");

    // Calculo da Densidade Populacional e PIB per Capita | Carta 1:

    densidadeDemo1 = (float) populacao1 / area1;
    pibCapita1 = (pib1 * 1000000000) / populacao1;

    // Cadastro das Cartas | Carta 2:

    printf("Digite uma letra de ('A' a 'H') para representar o segundo estado: ");
    scanf("%s", nomeEstado2);

    printf("Digite a letra do segundo estado seguida de um número de (01 a 04): ");
    scanf("%s", codigoCarta2);

    getchar(); // limpar buffer

    printf("Digite o nome da segunda cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin); 

    printf("Digite o número de habitantes da segunda cidade: ");
    scanf("%lu", &populacao2);

    printf("Digite a área da segunda cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("Digite o produto interno da segunda cidade (PIB): ");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos da segunda cidade: ");
    scanf("%d", &turistico2);
    printf("\n-------------------------------------------------------------\n");

     // Calculo da Densidade Populacional e PIB per Capita | Carta 2:

    densidadeDemo2 = (float) populacao2 / area2;
    pibCapita2 = (pib2 * 1000000000) / populacao2;

    // Exibição dos Dados | Carta 1:

    printf("\n### EXIBIÇÃO DOS DADOS DAS CARTAS ###\n");

    printf("|Carta 1|\n");
    printf("Estado: %s\n", nomeEstado1);
    printf("Código: %s\n", codigoCarta1);
    printf("Nome da Cidade: %s", nomeCidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos turísticos: %d\n", turistico1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeDemo1);
    printf("PIB per Capita: %.2f reais\n", pibCapita1);

    // Exibição dos Dados | Carta 2:

    printf("\n-------------------------------------------------------------\n");
    printf("|Carta 2|\n");
    printf("Estado: %s\n", nomeEstado2);
    printf("Código: %s\n", codigoCarta2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos turísticos: %d\n", turistico2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeDemo2);
    printf("PIB per Capita: %.2f reais\n", pibCapita2);

    printf("\n-------------------------------------------------------------\n");

    
    
    return 0;
}
