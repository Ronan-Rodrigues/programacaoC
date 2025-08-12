/*
Código desenvolvido por: Ronan Teixeira Rodrigues
Prática de programação em C - Jogo Super Trunfo
Data da Criação 11/08/2025
Nível básico - Cadastramento de 2 cartas 
*/

#include <stdio.h>
#include <string.h>
//#include <locale.h>
#include <stdlib.h>

int main() {
    system("chcp 65001");
  //  setlocale(LC_ALL, "");

    //Variaveis  das cartas
  char *estado[2], *codigocarta[2], *nomecidade[2];
  int populacao[2], pontos[2], carta[2];
  float area[2], pib[2]; 

//Carta Nº 1
  carta[0] = 1;
  estado[0] = "C";
  codigocarta[0] = "C01";
  nomecidade[0] = "FORTALEZA";
  populacao[0] = 2000000;
  area[0] = 10000000;
  pib[0] = 30000000;
  pontos[0] = 50;

//Carta Nº 2
  carta[1] = 2;
  estado[1] = "M";
  codigocarta[1] = "M01";
  nomecidade[1] = "BELO HORIZONTE";
  populacao[1] = 4000000;
  area[1] = 20000000;
  pib[1] = 50000000;
  pontos[1] = 100 ;


printf("\n");
printf("====================================\n");
printf("\n");  
printf("Super Trunfo - Jogo de Cartas\n");
printf("Cartas Cadastradas:\n");
printf("\n");
printf("====================================\n"); 
printf("Carta %d\n", carta[0]);
printf("Estado: %s\n", estado[0]);
printf("Código: %s\n", codigocarta[0]);
printf("Nome da Cidade: %s\n", nomecidade[0]);
printf("População: %d\n", populacao[0]);
printf("Área: %.2f km² \n", area[0]);
printf("PIB: %.2f bilhões de reais \n", pib[0]);
printf("Número de Pontos Turísticos: %d\n", pontos[0]);

printf("\n");
printf("====================================\n");
printf("Carta %d\n", carta[1]);
printf("Estado: %s\n", estado[1]);
printf("Código: %s\n", codigocarta[1]);
printf("Nome da Cidade: %s\n", nomecidade[1]);
printf("População: %d\n", populacao[1]);
printf("Área: %.2f km² \n", area[1]);
printf("PIB: %.2f bilhões de reais \n", pib[1]);
printf("Número de Pontos Turísticos: %d\n", pontos[1]);
printf("\n");
printf("====================================\n");
    
}
