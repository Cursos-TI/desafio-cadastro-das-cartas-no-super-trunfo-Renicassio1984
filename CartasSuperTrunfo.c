#include <stdio.h>

int main(){
    
    char codigo[3];  // A01 
    char cidade[30]; // Uberlândia 
    char estado[2]; // MG
    int populacao; // 754954 (754.954)
    float area; // 4115206 (4.115,206)
    float pib; // 34,1 Bilhões
    int turismo; //50

    printf("DESAFIO SUPER TRUNFO\n");
    printf("Cadastramento das Cartas\n");
    printf("Cadastramento da Carta 1\n");

    printf("Digite o Código da Carta: \n");
    scanf("%s", &codigo);
    printf("O Código é: %s\n", codigo);

    printf("Digite o Nome da Cidade: \n");
    scanf("%s", &cidade);
    printf("A Cidade é: %s\n", cidade);

    printf("Digite o Estado: \n");
    scanf("%s", &estado);
    printf("O Estado é: %s\n", estado);

    printf("Digite a População: \n");
    scanf("%d", &populacao);
    printf("A população é: %d\n", populacao);

    printf("Digite a Área em KM²: \n");
    scanf("%f", &area);
    printf("A Área em KM² é: %.2f\n", area);

    printf("Digite o PIB: \n");
    scanf("%f", &pib);
    printf("O PIB é: %.2f Bilhões\n", pib);

    printf("Digite o Número de Pontos Turísticos: \n");
    scanf("%d", &turismo);
    printf("O Número de Pontos Turísticos é: %d\n", turismo);

    printf("*CADASTRAMENTO DA CARTA Nº2\n");         // CADASTRAMENTO DA CARTA Nº2 //
    printf("Digite o Código da Carta Nº2: \n");  // CÓDIGO: B02
    scanf("%s", &codigo);
    printf("O Código da Carta Nº2 é: %s\n", codigo);

    printf("Digite o Nome da Cidade Nº2: \n"); // BURITIZAL
    scanf("%s", &cidade);
    printf("A Cidade Nº2 é: %s\n", cidade);

    printf("Digite o Estado Nº2: \n"); // SP
    scanf("%s", &estado);
    printf("O Estado Nº2 é: %s\n", estado);

    printf("Digite a População Nº2: \n"); // 4447 (4.447)
    scanf("%d", &populacao);
    printf("A População da Cidade Nº2 é: %d\n", populacao);

    printf("Digite a Área Nº2 em KM²: \n"); // ÁREA EM KM² 266420 (266.420)
    scanf("%f", &area);
    printf("A Área 2 em KM² é: %.2f\n", area);

    printf("Digite o PIB Nº2: \n");  // 53 MIL
    scanf("%f", &pib);     
    printf("o PIB Nº2 é: %.2f Bilhões\n", pib);

    printf("Digite o Número de Pontos Turísticos da Cidade Nº2: \n"); //12
    scanf("%d", &turismo);
    printf("O Número de Pontos Turísticos é: %d\n", turismo);

    return 0;

}
