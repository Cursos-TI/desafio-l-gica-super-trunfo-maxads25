#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char estado1, estado2, codcarta1[4], codcarta2[4], nomecidade1[50], nomecidade2[50];
    unsigned long int populacao1, populacao2;
    int npturisticos1, npturisticos2;
    float area1, area2, pib1, pib2, densidade_pop1, densidade_pop2, pib_percapta1, pib_percapta2, superPoder1, superPoder2;
    int resultadoPop, resultadoPTuristico, resultadoarea, resultadoPib, resultadoDensidadeP, resultadoPibPerc;
    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    printf("\n *** Dados da primeira Carta *** \n\n");

    printf("Digite a letra referente ao estado, de 'A' a 'H': "); //pedido para entrada de dados
    scanf(" %c", &estado1); //leitura dos dados
    
    printf("Digite o código do Estado, de 01 a 04: ");
    scanf(" %3s", codcarta1);
   
    printf("Digite o nome da cidade(sem espaços): ");
    scanf(" %49s", nomecidade1);

    printf("Digite a população total: ");
    scanf(" %lu", &populacao1);
   
    printf("Digite a Área em KM²: ");
    scanf(" %f", &area1);
    
    printf("Digite o PIB: ");
    scanf(" %f", &pib1);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %i", &npturisticos1);
    
    printf("\n *** Dados da segunda Carta *** \n\n");
   
    printf("Digite a letra referente ao estado, de 'A' a 'H': ");
    scanf(" %c", &estado2);
    
    printf("Digite o código do Estado, de 01 a 04: ");
    scanf(" %3s", codcarta2);
    
    printf("Digite o nome da cidade(sem espaços): ");
    scanf(" %49s", nomecidade2);

    printf("Digite a população total: ");
    scanf(" %lu", &populacao2);
    
    printf("Digite a Área em KM²: ");
    scanf(" %f", &area2);
   
    printf("Digite o PIB: ");
    scanf(" %f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %i", &npturisticos2);

    //calcula a densidade populacional e o pib per capta de cada carta
    densidade_pop1 = (float) populacao1 / area1;
    pib_percapta1 = (float) pib1 / populacao1;

    densidade_pop2 = (float) populacao2 / area2;
    pib_percapta2 = (float) pib2 / populacao2;

    //calcula superPoder

    superPoder1 = populacao1 + area1 + pib1 + npturisticos1 + (1/densidade_pop1) + pib_percapta1;
    superPoder2 = populacao2 + area2 + pib2 + npturisticos2 + (1/densidade_pop2) + pib_percapta2;

    // Área para exibição dos dados da cidade
    
    printf("\n *** Carta 1 *** \n");
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %c%s\n", estado1, codcarta1);
    printf("Nome da cidade: %s\n", nomecidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: R$ %.2f\n", pib1);
    printf("Número de pontos turísticos: %d\n", npturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop1);
    printf("PIB per capta: R$ %.2f\n", pib_percapta1);
    printf("Superpoder %.2f\n", superPoder1);

    printf("\n *** Carta 2 *** \n");
    printf("Estado: %c\n", estado2);
    printf("Código da carta: %c%s\n", estado2, codcarta2);
    printf("Nome da cidade: %s\n", nomecidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: R$ %.2f\n", pib2);
    printf("Número de pontos turísticos: %d\n", npturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_pop2);
    printf("PIB per capta: R$ %.2f\n", pib_percapta2);
    printf("Superpoder %.2f\n", superPoder2);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

      //compara as cartas e mostra o vencedor

    if (superPoder1 > superPoder2) {

        printf("\n *** Carta 1 Vencedora **\n");
        printf("Estado: %c\n", estado1);
        printf("Código da carta: %c%s\n", estado1, codcarta1);
        printf("Nome da Cidade: %s\n", nomecidade1);
        printf("Item vencedor - SuperPoder: %.2f\n", superPoder1);
        
    }   else if ( superPoder2 > superPoder1) { 

        printf("\n *** Carta 2 Vencedora **\n");
        printf("Estado: %c\n", estado2);
        printf("Código da carta: %c%s\n", estado2, codcarta2);
        printf("Nome da Cidade: %s\n", nomecidade2);
        printf("Item vencedor - SuperPoder: %.2f\n\n", superPoder2);
        
    } else {

        printf("\n *** Ocorreu um empate **\n");
        printf("Super poder da carta1: %.2f Vs carta2: %.2f\n\n", superPoder1, superPoder2);

    }

    return 0;
}