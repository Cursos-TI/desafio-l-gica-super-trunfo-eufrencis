#include <stdio.h>

int main(){

// Declarando variáveis

    char estado1[30], estado2[30], codigo1[30], codigo2[30], cidade1 [30], cidade2[30];
    int populacao1, populacao2, ptsturisticos1, ptsturisticos2;
    float area1, area2, pib1, pib2, dens1, dens2, pibper1, pibper2;

    //Entrada e saida de dados:

    printf("*** BEM VINDO AO JOGO SUPER TRUNFO! ***\n");
    printf("Para começar insira os dados da primeira carta. \n");

    printf("Insira  estado: \n");
    scanf("%s", &estado1);

    printf("Insira o codigo da carta: \n");
    scanf("%s", &codigo1);

    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", &cidade1); // método para não dar erro ao utilizar um espaço no nome da cidade

    printf("Insira o número de habitantes da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Insira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area1);
    
    printf("Insira o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib1);

    printf("Insira a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &ptsturisticos1);

    printf("\n\n");

    printf("Agora insira os dados da segunda carta: \n");

    printf("Insira  estado: \n");
    scanf("%s", &estado2);

    printf("Insira o codigo da carta: \n");
    scanf("%s", &codigo2);

    printf("Insira o nome da cidade: \n");
    scanf(" %[^\n]", &cidade2);

    printf("Insira o número de habitantes da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Insira a área da cidade em quilômetros quadrados: \n");
    scanf("%f", &area2);
    
    printf("Insira o Produto Interno Bruto da cidade: \n");
    scanf("%f", &pib2);

    printf("Insira a quantidade de pontos turísticos na cidade: \n");
    scanf("%d", &ptsturisticos2);

    printf("\n\n"); // Pular linhas para organização do codigo

    // Calculando valores

    dens1 = populacao1 / area1;
    dens2 = populacao2 / area2;

    pibper1 = (pib1 * 1000000) / populacao1; // pib em bilhoes
    pibper2 = (pib2 * 1000000) / populacao2;


    // impressão dos resultados na tela

    printf("Carta 1: \n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f Bilhões de reais \n", pib1);
    printf("Número de pontos turísticos: %d\n", ptsturisticos1);
    printf("Densidade Poulacional: %.2f hab/km²\n", dens1);
    printf("PIB per Capta: %.2f reais\n", pibper1);


    printf("\n\n");

    printf("Carta 2: \n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f Bilhões de reais \n", pib2);
    printf("Número de pontos turísticos: %d\n", ptsturisticos2);
    printf("Densidade Poulacional: %.2f hab/km²\n", dens2);
    printf("PIB per Capta: %.2f reais\n", pibper2);
    printf("\n");
    // Iniciando a comparacao das cartas

    if (dens1 < dens2){
    printf("A densidade populacional da primeira carta é: %.3f\n", dens1);
    printf("A densidade populacional da segunda carta é: %.3f\n", dens2);
    printf("### A primeira carta venceu o jogo ###\n");
        } else if (dens1 == dens2) { // Coloquei essa opção a mais caso tenha o mesmo valor.
        printf("A densidade populacional da primeira carta é: %.3f\n", dens1);
        printf("A densidade populacional da segunda carta é: %.3f\n", dens2);
        printf ("Resultado empatado\n");
            } else {
            printf("A densidade populacional da primeira carta é: %.3f\n", dens1);
            printf("A densidade populacional da segunda carta é: %.3f\n", dens2);
            printf("\n");
            printf("### A segunda carta venceu o jogo ###\n");
    }

    return 0;


}