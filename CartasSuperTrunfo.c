// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.
#include <stdio.h>

int main() {
    printf("bem vindo ao super trunfo de cidades brasileiras!\n");
    printf("vamos cadastrar uma cidade para representar sua carta de jogo!\n");
// especificando as variaveis
char estado[5];
char codigo[5];
char nome_da_cidade[50];
int populacao;
double area;
float PIB;
int pontos;
//entrada de dados
    printf("qual o estado da cidade? (sigla)\n");// \n para pular linha a cada printf
    scanf("%s", &estado);
    printf("qual o codigo da cidade? (ex: A01, B02...)\n");
    scanf("%s", &codigo);
    printf("qual o nome da cidade?\n");
    scanf("%s", &nome_da_cidade);
    printf("qual a população da cidade?\n");
    scanf("%d", &populacao);
    printf("qual a area da cidade?\n");
    scanf("%lf", &area);
    printf("qual o PIB da cidade?\n");
    scanf("%f", &PIB);
    printf("quantos pontos turisticos a cidade possui?\n");
    scanf("%d", &pontos);
//saida de dados
    printf("Carta numero 1:\n");
    printf("Estado: %s\n", estado);
    printf("Codigo: %s\n", codigo);
    printf("Nome da cidade: %s\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Area: %.2lf km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Pontos turisticos: %d\n", pontos);
//especificando outras variaveis para a segunda carta, para que não haja conflito
char estado2[5];
char codigo2[5];
char nome_da_cidade2[50];
int populacao2;
double area2;
float PIB2;
int pontos2;
//entrada de dados da segunda carta
    printf("vamos cadastrar a segunda cidade para carta 2!\n");
    printf("qual o estado da cidade? (sigla)\n");
    scanf("%s", &estado2);
    printf("qual o codigo da cidade? (ex: A01, B02...)\n");
    scanf("%s", &codigo2);
    printf("qual o nome da cidade?\n");
    scanf("%s", &nome_da_cidade2);
    printf("qual a população da cidade?\n");
    scanf("%d", &populacao2);
    printf("qual a area da cidade?\n");
    scanf("%lf", &area2);
    printf("qual o PIB da cidade?\n");
    scanf("%f", &PIB2);
    printf("quantos pontos turisticos a cidade possui?\n");
    scanf("%d", &pontos2);
//saida de dados da segunda carta
    printf("Carta numero 2:\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da cidade: %s\n", nome_da_cidade2);
    printf("População: %d\n", populacao2);
    printf("Area: %.2lf km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", PIB2);
    printf("Pontos turisticos: %d\n", pontos2);
//finalizando com return 0 para indicar que o programa terminou corretamente
    return 0;
}
