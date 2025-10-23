#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
   int população, pontosTuristicos;
   float area;
   float pib;
   char codigo [8], cidade[100] , estado[100];
  

  // Área para entrada de dados

  printf("Digite o Nome do Estado:");
  scanf("%s", &estado);

  printf("Digite o Nome da Cidade:");
  scanf("%s", &cidade);

  printf("Digite o Codigo da Carta:");
  scanf("%s", &codigo);

  printf("Digite a População:");
  scanf("%d", &população);

  printf("Digite o Numero de Pontos turisticos:");
  scanf("%d", &pontosTuristicos);

  printf("Digite a Área(em km²):");
  scanf("%f", &area);

  printf("Digite o Pib(em bilhões):");
  scanf("%f", &pib);

printf("\n");

  // Área para exibição dos dados da cidade

  printf("--- Dados da Carta 1 ---\n\n");
  
  printf("Estado:%s\n", estado);

  printf("Cidade:%s\n", cidade);

  printf("Codigo da Carta:%s\n", codigo);

  printf("População:%d\n", população);

  printf("Numero de Pontos turisticos:%d\n", pontosTuristicos);

  printf("Área (em km²):%f\n", area);

  printf("Pib (em bilhões):%f\n", pib);

  


return 0;
} 
