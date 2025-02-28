#include <stdio.h>


int main() {
    
    
    // Carta 01
    char estado_1;
    char nomecidade_1[50];
    char codigocarta_1[5];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontosTuristicos_1;

    // Carta 02
    char estado_2;
    char nomecidade_2[50];
    char codigocarta_2[5];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontosTuristicos_2;



    // Cadastro das Cartas:

    // Leitura dos dados da Carta 01
    printf("Carta 01\n");
    printf("Digite a letra do estado de A-H:\n");
    scanf(" %c", &estado_1);
    printf("Nome da cidade:\n");
    scanf(" %s", &nomecidade_1);
    printf("Digite o codigo da carta (Ex: A01-B01):\n");
    scanf(" %s", &codigocarta_1);
    printf("Digite o numero da população da sua cidade:\n");
    scanf(" %d", &populacao_1);
    printf("Digite a area da sua cidade (Em Km²):\n");
    scanf(" %f", &area_1);
    printf("Digite qual o PIB da sua cidade:\n");
    scanf(" %f", &pib_1);
    printf("Digite a quantidade de pontos turisticos da sua cidade:\n");
    scanf(" %d", &pontosTuristicos_1);

   // Leitura dos dados da Carta 02
    printf("\nCarta 02\n");
    printf("Digite a letra do estado de A-H:\n");
    scanf(" %c", &estado_2);
    printf("Nome da cidade:\n");
    scanf(" %s", &nomecidade_2);
    printf("Digite o codigo da carta (Ex: A01-B01):\n");
    scanf(" %s", &codigocarta_2);
    printf("Digite o numero da população da sua cidade:\n");
    scanf(" %d", &populacao_2);
    printf("Digite a area da sua cidade (Em Km²):\n");
    scanf(" %f", &area_2);
    printf("Digite qual o PIB da sua cidade:\n");
    scanf(" %f", &pib_2);
    printf("Digite a quantidade de pontos turisticos da sua cidade:\n");
    scanf(" %d", &pontosTuristicos_2);

    // Exibição dos Dados das Cartas:
    
    // Exibição dos dados da Carta 01
    printf("\nCarta 01:\n");

    printf("Estado: %c\n", estado_1);
    printf("Nome da cidade: %s\n", nomecidade_1);
    printf("Codigo da carta: %s\n", codigocarta_1);
    printf("Numero da populacao: %d\n", populacao_1);
    printf("Tamanho da area Km²: %f\n", area_1);
    printf("Valor do pib: %f\n", pib_1);
    printf("Pontos turisticos: %d\n", pontosTuristicos_1);


    // Exibição dos dados da Carta 02
    printf("\nCarta 02:\n");

    printf("Estado: %c\n", estado_2);
    printf("Nome da cidade: %s\n", nomecidade_2);
    printf("Codigo da carta: %s\n", codigocarta_2);
    printf("Numero da populacao: %d\n", populacao_2);
    printf("Tamanho da area Km²: %f\n", area_2);
    printf("Valor do pib: %f\n", pib_2);
    printf("Pontos turisticos: %d\n", pontosTuristicos_2);

    return 0;
}
