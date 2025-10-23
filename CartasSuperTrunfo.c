#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   int população, pontosTuristicos;
   float area;
   float pib;
   char codigo [4];
  

  // Área para entrada de dados

  printf("Digite o Codigo da Carta:");
  scanf("%s", &codigo);

  printf("Digite a População:");
  scanf("%d", &população);

  printf("Digite Pontos turisticos:");
  scanf("%d", &pontosTuristicos);

  printf("Digite a Área:");
  scanf("%f", &area);

  printf("Digite o Pib:");
  scanf("%f", &pib);

  // Área para exibição dos dados da cidade

 printf("--- Dados de Cartas ---\n");

  printf("Codigo da Carta:%s\n", codigo);
  printf("População:%d\n", população);
  printf("Pontos turisticos:%d\n", pontosTuristicos);
  printf("Área:%f\n", area);
  printf("Pib:%f\n", pib);
return 0;
} 
