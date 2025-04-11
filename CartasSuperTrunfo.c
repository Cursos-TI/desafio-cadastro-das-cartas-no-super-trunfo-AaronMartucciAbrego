#include <stdio.h>

int main(){

    char estado1, estado2;
    char cidade1[20], cidade2[20];
    char cod1[5], cod2[5];
    int populacao1, populacao2;
    int turismo1, turismo2;
    float area1, area2;
    float pib1, pib2;
//dados declarados por categoria pra melhor vizualizaçao e ediçao dos elementos.
    printf("\n\nINSIRA O DADOS DA CARTA 1:\n");

    printf("Digite uma Letra de A a H para Estado 1:");
    scanf(" %c", &estado1);
    
    printf("Digite o Nome da Cidade 1:");
    scanf("%s", cidade1);

    printf("Digite o código da Carta 1:\n");
    printf("O código deverá ser a Letra do Estado, \nseguido de um número de 01 a 04*:");
    scanf("%s", cod1);

    printf("Digite a População da Cidade 1:");
    scanf("%d", &populacao1);

    printf("Digite a Área da Cidade 1:");
    scanf("%f", &area1);

    printf("Digite o PIB da Cidade 1:");
    scanf("%f", &pib1);
    //Atentar-se em digitar o valor com ponto flutuante.
    printf("Digite quantos Pontos Turisticos há na Cidade 1:");
    scanf("%d", &turismo1);

    printf("\n\nINSIRA O DADOS DA CARTA 2:\n");

    printf("Digite uma Letra de A a H para Estado 2:");
    scanf(" %c", &estado2);

    printf("Digite o Nome da Cidade 2:");
    scanf("%s", cidade2);

    printf("Digite o código da Carta 2:\n");
    printf("O código deverá ser a Letra do Estado, \nseguido de um número de 01 a 04*:");
    scanf("%s", cod2);

    printf("Digite a População da Cidade 2:");
    scanf("%d", &populacao2);

    printf("Digite a Área da Cidade 2:");
    scanf("%f", &area2);

    printf("Digite o PIB da Cidade 2:");
    scanf("%f", &pib2);
    //Atentar-se em digitar o valor com ponto flutuante.
    printf("Digite quantos Pontos Turisticos há na Cidade 2:");
    scanf("%d", &turismo2);


    printf("\nOS DADOS DAS CARTAS SÃO:\n");

    printf("\nCARTA1\n");
    printf("\nESTADO:\t\t %c", estado1);
    printf("\nCOD.:\t\t %s", cod2);
    printf("\nCIDADE:\t\t %s", cidade1);
    printf("\nPOPULAÇÃO:\t %d", populacao1);
    printf("\nÁREA:\t\t %.2f m2", area1);
    printf("\nPIB:\t\t R$ %.2f", pib1);
    printf("\nP. TURÍSTICOS:\t %d", turismo1);
    printf("\n");
    printf("\nCARTA 2\n");
    printf("\nESTADO:\t\t %c", estado2);
    printf("\nCOD.:\t\t %s", cod2);
    printf("\nCIDADE:\t\t %s", cidade2);
    printf("\nPOPULAÇÃO:\t %d", populacao2);
    printf("\nÁREA:\t\t %.2f m2", area2);
    printf("\nPIB:\t\t R$ %.2f", pib2);
    printf("\nP. TURÍSTICOS:\t %d", turismo2);

    printf("\n\n");




    return 0;
}
