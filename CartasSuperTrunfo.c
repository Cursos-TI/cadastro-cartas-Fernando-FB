#include <stdio.h>

int main(){
  // Variáveis da Carta 1
  char letra1;
  char codigo1[4];
  char cidade1[50];
  int populacao1;
  float area1;
  float pib1;
  int npt1; //npt (Número de Pontos Turísticos)
  float densidade1, pibpercapita1; //novas variáveis

  // Variáveis da Carta 2
  char letra2;
  char codigo2[4];
  char cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int npt2; //npt (Número de Pontos Turísticos)
  float densidade2, pibpercapita2; //novas variáveis

  // Área para entrada de dados da carta 1
  printf("Cadastro para Carta 1:\n");
  printf("Estado (Uma letra de A a H):");
  scanf(" %c", &letra1);

  printf("Código da carta (Uma letra e número Ex:A01,B03):");
  scanf("%4s", &codigo1);

  printf("Nome da Cidade:");
  scanf(" %[^\n]", &cidade1);

  printf("População:");
  scanf("%d", &populacao1);

  printf("Área (Em km²):");
  scanf("%f" , &area1);

  printf("PIB da cidade:");
  scanf("%f" , &pib1);

  printf("Número de pontos turísticos (1-99):");
  scanf("%d", &npt1);

  // Cálculos da carta 1 (Novas variáveis)
  densidade1 = populacao1 / area1;
  pibpercapita1 = (pib1 * 1000000000) / populacao1;

  // Área para entrada de dados da carta 2
  printf("Cadastro para Carta 2:\n");
  printf("Estado (Uma letra de A a H):");
  scanf(" %c", &letra2);

  printf("Código da carta (Uma letra e número Ex:A01,B03):");
  scanf("%4s", &codigo2);

  printf("Nome da Cidade:");
  scanf(" %[^\n]", &cidade2);

  printf("População:");
  scanf("%d", &populacao2);

  printf("Área (Em km²):");
  scanf("%f" , &area2);

  printf("PIB da cidade:");
  scanf("%f" , &pib2);

  printf("Número de pontos turísticos (1-99):");
  scanf("%d", &npt2);

  // Cálculos da carta 2 (Novas variáveis)
  densidade2 = populacao2 / area2;
  pibpercapita2 = (pib2 * 1000000000) / populacao2;

  
   // Área para exibição dos dados da carta 1

  printf("--CARTA 1--\n");
  printf("Estado: %c\n" , letra1);
  printf("Código da Carta: %4s\n", codigo1);
  printf("Nome da Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área (em km²): %.2f\n", area1);
  printf("PIB da cidade: %.2f\n", pib1);
  printf("Número de Pontos Turísticos: %d\n", npt1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade1);
  printf("PIB per Capita: %.2f reais\n", pibpercapita1);

  // Área para exibição dos dados da carta 2

  printf("--CARTA 2--\n");
  printf("Estado: %c\n" , letra2);
  printf("Código da Carta: %4s\n", codigo2);
  printf("Nome da Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área (em km²): %.2f\n", area2);
  printf("PIB da cidade: %.2f\n", pib2);
  printf("Número de Pontos Turísticos: %d\n", npt2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidade2);
  printf("PIB per Capita: %.2f reais\n", pibpercapita2);


  
  return 0;

} 