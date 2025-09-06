#include <stdio.h>
int main(){
    //dados carta 01

    char estado01[20];
    char codigocarta01[20];
    char nomecidade01[20];
    float população01;
    float área_km2_01;
    float pib01;
    int ptsturisticos01;

    //dados cartas 02

    //dados carta 02

    char estado02[20];
    char codigocarta02[20];                                                                                                                                                          
    char nomecidade02[20];
    float população02;
    float área_km2_02;
    float pib02;
    int ptsturisticos02;

    //cadastro de cartas
    printf("--- CADASTRO DE CARTA 01 ---\n\n");

    printf("Digite um estado (A-H): ");
    scanf(" %s", estado01);

    int c;
    while ((c = getchar()) != '\n' && c != EOF) { } 

    printf("Digite um codigo (ex:A01): ");
    scanf("%s", codigocarta01);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade01);

    printf("Digite a população: ");
    scanf("%f", &população01);

    printf("Digite a área km2: ");
    scanf("%f", &área_km2_01);

    printf("Digite o pib: ");
    scanf("%f", &pib01);

    printf("Digite quantos pts turistico: ");
    scanf("%d", &ptsturisticos01);

    printf("\n\n--- CADASTRO DE CARTA 02 ---\n");
    printf("\n");

    printf("Digite um estado (A-H): ");
    scanf(" %s", &estado02);

    printf("Digite um codigo (ex:A02): ");
    scanf(" %s", &codigocarta02);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade02);

    printf("Digite a população: ");
    scanf("%f", &população02);

    printf("Digite a área km2: ");
    scanf("%f", &área_km2_02);

    printf("Digite o pib: ");
    scanf("%f", &pib02);

    printf("Digite quantos pts turistico: ");
    scanf(" %d", &ptsturisticos02);


    //printf("Cartas cadastradas\n\n");
    printf("\n\n--- Cartas cadastradas ---\n");

    printf("\n");

    printf("--- carta 01 ---\n");
    printf("Seu estado: %s\n", estado01);
    printf("Seu codigo: %s\n", codigocarta01);
    printf("Sua cidade: %s\n", nomecidade01);
    printf("populaçao: %.0f\n", população01);
    printf("area km2: %.0f\n", área_km2_01);
    printf("pib: %.0f\n", pib01);
    printf("pts turisticos: %d\n", ptsturisticos01);

    printf("\n");
 
    printf("--- carta 02 ---\n");

    printf("\n");

    printf("Seu estado: %s\n", estado02);
    printf("Seu codigo: %s\n", codigocarta02);
    printf("Sua cidade: %s\n", nomecidade02);
    printf("populaçao: %.0f\n", população02);
    printf("area km2: %.0f\n", área_km2_02);
    printf("pib: %.0f\n", pib02);
    printf("pts turisticos: %d\n", ptsturisticos02);

    printf("\n\n");




    //printf()




    return 0;




    



}

