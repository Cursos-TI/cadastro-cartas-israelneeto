#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {
    //Inicializando variáveis. 

    //CARTA 1 

    char estado1 [5];
    char codigo1 [10];
    char nomedacidade1 [50];
    int populacao1;
    int pontosturisticos1; 
    float area1;
    float PIB1;

    //CARTA 2 

    char estado2 [5];
    char codigo2 [10];
    char nomedacidade2 [50];
    int populacao2;
    int pontosturisticos2; 
    float area2;
    float PIB2;
    
    //Contextualizando 

    printf("SEJA BEM VINDO AO JOGO DE CARTAS SUPER TRUNFO!!\n\n");
    printf("PARA INICIARMOS O JOGO, VAMOS CADASTRAR AS CARTAS: (TOTAL 2 CARTAS) \n\n");

 
    //interação com o usuário
    //Carta 1:

    printf("CARTA 1:\n\n");

    printf("1.Digite aqui apenas a primeira letra do estado:\n");
    scanf(" %s", estado1);

    printf("2.Digite aqui o codigo da cidade:\n");
    scanf(" %s", codigo1);

    printf("3.Digite aqui o nome da cidade:\n");
    scanf(" %s", nomedacidade1);

    printf("4. Qual o numero de habitantes da cidade?\n");
    scanf("%d", &populacao1);

    printf("5.Digite a area em KM:\n");
    scanf("%f", &area1); 

    printf("6. Digite o PIB:\n");
    scanf("%f", &PIB1);

    printf("7.Quantos pontos turisticos tem na cidade?\n");
    scanf("%d", &pontosturisticos1);

    //Finalizou a carta 1: 

    printf("\nPRIMEIRA CARTA FINALIZADA !!\n");
    printf("AGORA VAMOS CADSTRAR A SEGUNDA CARTA:\n\n ");

    //Carta 2: 

     printf("CARTA 2:\n\n");

    printf("1.Digite aqui apenas a primeira letra do estado:\n");
    scanf(" %s", estado2);

    printf("2.Digite aqui o codigo da cidade:\n");
    scanf(" %s", codigo2);

    printf("3.Digite aqui o nome da cidade:\n");
    scanf(" %s", nomedacidade2);

    printf("4. Qual o numero de habitantes da cidade?\n");
    scanf("%d", &populacao2);

    printf("5.Digite a area em KM:\n");
    scanf("%f", &area2); 

    printf("6. Digite o PIB:\n");
    scanf("%f", &PIB2);

    printf("7.Quantos pontos turisticos tem na cidade?\n");
    scanf("%d", &pontosturisticos2);

    //Finalizou a carta 2: 
    
    printf("\nCARTAS CADASTRADAS COM SUCESSO!!\n\n");

    printf("Carta 1: \n");
    printf("Estado: %s \n", estado1);
    printf("Codigo: %s \n", codigo1);
    printf("Nome da Cidade: %s \n", nomedacidade1);
    printf("Populacao: %d \n", populacao1);
    printf("Area: %f \n", area1);
    printf("PIB: %f reias \n", PIB1);
    printf("Numero de Pontos Turisticos: %d \n", pontosturisticos1);

    
    printf("\n\nCarta 2: \n");
    printf("Estado: %s \n", estado2);
    printf("Codigo: %s \n", codigo2);
    printf("Nome da Cidade: %s \n", nomedacidade2);
    printf("Populacao: %d \n", populacao2);
    printf("Area: %f \n", area2);
    printf("PIB: %f reias \n", PIB2);
    printf("Numero de Pontos Turisticos: %d \n", pontosturisticos2);

return 0;
} 
