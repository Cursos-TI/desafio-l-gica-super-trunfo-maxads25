#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve c'omo base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    char *nomeAtributo, estado1 = 'A', estado2= 'B', codcarta1[4]="01", codcarta2[4]="02", nomecidade1[50]="Rio", nomecidade2[50]="SP";
    unsigned long int populacao1=5000000, populacao2=10000000;
    int opcao, npturisticos1=50, npturisticos2=10;
    float area1=1500, area2=1500, pib1=20000000, pib2=35000000, densidade_pop1, densidade_pop2, pib_percapta1, pib_percapta2, superPoder1, superPoder2;
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

    //atribuição fixa para uso das novas funcionalidades do switch

    
   /* cadastro de cartas desativado.
   
   
   printf("\n *** Dados da primeira Carta *** \n\n");

    printf("Digite a letra referente ao estado, de 'A' a 'H': "); //pedido para entrada de dados
    scanf(" %c", &estado1); //leitura dos dados
    
    printf("Digite o código do Estado, de 01 a 04: ");
    scanf(" %3s", codcarta1);
   
    printf("Digite o nome da cidade(sem espaços): ");
    scanf(" %s", nomecidade1);

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
    scanf(" %s", nomecidade2);

    printf("Digite a população total: ");
    scanf(" %lu", &populacao2);
    
    printf("Digite a Área em KM²: ");
    scanf(" %f", &area2);
   
    printf("Digite o PIB: ");
    scanf(" %f", &pib2);
    
    printf("Digite o número de pontos turísticos: ");
    scanf(" %i", &npturisticos2);
    
    */

    //calcula a densidade populacional e o pib per capta de cada carta
    densidade_pop1 = (float) populacao1 / area1;
    pib_percapta1 = (float) pib1 / populacao1;

    densidade_pop2 = (float) populacao2 / area2;
    pib_percapta2 = (float) pib2 / populacao2;

    //calcula superPoder

    superPoder1 = populacao1 + area1 + pib1 + npturisticos1 + (1.0f/densidade_pop1) + pib_percapta1;
    superPoder2 = populacao2 + area2 + pib2 + npturisticos2 + (1.0f/densidade_pop2) + pib_percapta2;

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

      //pede ao usuário para dizer qual atributo quee comparar

      printf(" -- Menu Super Trunfo -- \n");
      printf(" -- Qual atributo você quer escolher para esta rodada? --\n");
      printf("1 - População - A Maior vence!\n");
      printf("2 - Area em KM² - A Maior vence!\n");
      printf("3 - Pib - O maior vence!\n");
      printf("4 - Número de Pontos Turísticos - O maior vence!\n");
      printf("5 - Densidade populacional - A menor Vence!\n");
      printf("6 - PIB per Capta - A maior vence!\n");
      printf("7 - Super poder - O maior Vence!\n");
      printf("Escolha o Atributo de 1 a 7: ");
      scanf("%d", &opcao);

      int vencedor = -1; // -1 - Padrão / 0 - empate / 1 - vence carta 1 / 2 - vence carta 2

      switch(opcao)
      {
        case 1:
            nomeAtributo = "População";
            if(populacao1 > populacao2){
                vencedor = 1;
            }else if( populacao2 > populacao1){
                vencedor = 2;
            }else{
                vencedor = 0;
            }
        break;
        case 2:
            nomeAtributo = "Área";
            if(area1 > area2){
                vencedor = 1;
            }else if( area2 > area1){
                vencedor = 2;
            }else{
                vencedor = 0;
            }
        break;
        case 3:
            nomeAtributo = "PIB";
            if(pib1 > pib2){
                vencedor = 1;
            }else if( pib2 > pib1){
                vencedor = 2;
            }else{
                vencedor = 0;
            }
        break;
        case 4:
            nomeAtributo = "Número de Pontos Turísticos";
            if(npturisticos1 > npturisticos2){
                vencedor = 1;
            }else if( npturisticos2 > npturisticos1){
                vencedor = 2;
            }else{
                vencedor = 0;
            }

        break;
        case 5:
            nomeAtributo = "Densidade Populacional";
            if(densidade_pop2 > densidade_pop1){
                vencedor = 1;
            }else if( densidade_pop1 > densidade_pop2){
                vencedor = 2;
            }else{
                vencedor = 0;
            }

        break;
        case 6:
            nomeAtributo = "PIB PerCapta";
            if(pib_percapta1 > pib_percapta2){
                vencedor = 1;
            }else if( pib_percapta2 > pib_percapta1){
                vencedor = 2;
            }else{
                vencedor = 0;
            }

        break;
        case 7:
            nomeAtributo = "Super Poder";
            if(superPoder1 > superPoder2){
                vencedor = 1;
            }else if( superPoder2 > superPoder1){
                vencedor = 2;
            }else{
                vencedor = 0;
            }

        break;
        default:
        printf("Opção Inválida!\n");
        break;
      }

        if( vencedor != -1){
           
           printf("\nO Atributo escolhido foi %s!\n", nomeAtributo);

        if ( vencedor == 1 ){
                
            printf("\n *** Carta 1 VENCEDORA *** \n");
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
        
        }else if ( vencedor == 2 ){

            printf("\n *** Carta 2 VENCEDORA *** \n");
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

        }else{

            printf("O Jogo Empatou !!!\n");
        }
    }
    return 0;
}