#include <windows.h>
#include <stdio.h>
#include <stdlib.h>

struct Card {
    char state;
    char code[4];
    char city[20];
    int population;
    float area; // Km²
    float pib;
    int total_turism_points;
};

int main() {
    SetConsoleOutputCP(CP_UTF8);    // set UTF-8 format
    struct Card card01, card02;
    int timer = 1000;

    // Start program
    printf("\nSeja bem vindo ao Super Trunfo!\n");
    _sleep(timer);

    printf("Cadastre a 1º carta (1 de 2):\n");
    _sleep(timer);

    // Scan Card01 data
    printf("Qual o estado?:\n");
    scanf(" %c", &card01.state);
    getchar();

    printf("Digite o código da carta:\n");
    scanf("%s", &card01.code);

    printf("Qual o nome da cidade?:\n");
    scanf("%s", &card01.city);

    printf("Qual a população da cidade?:\n");
    scanf("%i", &card01.population);

    printf("Qual a área da cidade (em Km²)?:\n");
    scanf("%f", &card01.area);

    printf("Qual o PIB da cidade?:\n");
    scanf("%f", &card01.pib);

    printf("Qual a quantidade total de pontos turísticos da cidade?:\n");
    scanf("%i", &card01.total_turism_points);

    printf("\nCadastre a 2° carta (2 de 2):\n");
    _sleep(timer);

    // Scan Card02 data
    printf("Qual o estado?:\n");
    scanf(" %c", &card02.state);
    getchar();

    printf("Digite o código da carta:\n");
    scanf("%s", &card02.code);

    printf("Qual o nome da cidade?:\n");
    scanf("%s", &card02.city);

    printf("Qual a população da cidade?:\n");
    scanf("%i", &card02.population);

    printf("Qual a área da cidade (em Km²)?:\n");
    scanf("%f", &card02.area);

    printf("Qual o PIB da cidade?:\n");
    scanf("%f", &card02.pib);

    printf("Qual a quantidade total de pontos turísticos da cidade?:\n");
    scanf("%i", &card02.total_turism_points);

    // Processing data
    _sleep(timer);
    printf("Processando informacoes...\n\n");

    // Print Card01 data
    printf("###### Carta 01 ######\n");
    printf("Estado: %c\n", card01.state);
    printf("Código: %s\n", card01.code);
    printf("Cidade: %s\n", card01.city);
    printf("População: %i\n", card01.population);
    printf("Área: %f Km²\n", card01.area);
    printf("PIB: R$ %f bi\n", card01.pib);
    printf("Número de Pontos Turísticos: %i\n", card01.total_turism_points);

    // Print Card02 data
    printf("\n###### Carta 02 ######\n");
    printf("Estado: %c\n", card02.state);
    printf("Código: %s\n", card02.code);
    printf("Cidade: %s\n", card02.city);
    printf("População: %i\n", card02.population);
    printf("Área: %f Km²\n", card02.area);
    printf("PIB: R$ %f bi\n", card02.pib);
    printf("Número de Pontos Turísticos: %i\n", card02.total_turism_points);
}