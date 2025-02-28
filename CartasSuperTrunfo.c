#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado_1;
    char nomecidade_1[50];
    char codigocarta_1[5];
    int populacao_1;
    float area_1;
    float pib_1;
    int pontosTuristicos_1;

    
    char estado_2;
    char nomecidade_2[50];
    char codigocarta_2[5];
    int populacao_2;
    float area_2;
    float pib_2;
    int pontosTuristicos_2;



    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
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
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("\nCarta 01:\n");

    printf("Estado: %c\n", estado_1);
    printf("Nome da cidade: %s\n", nomecidade_1);
    printf("Codigo da carta: %s\n", codigocarta_1);
    printf("Numero da populacao: %d\n", populacao_1);
    printf("Tamanho da area Km²: %f\n", area_1);
    printf("Valor do pib: %f\n", pib_1);
    printf("Pontos turisticos: %d\n", pontosTuristicos_1);



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
