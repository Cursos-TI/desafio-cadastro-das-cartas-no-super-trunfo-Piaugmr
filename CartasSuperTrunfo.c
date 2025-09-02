#include <stdio.h>
int main(){
    //dados carta 01

    char estado01;
    char codigocarta01;
    char nomecidade01[20];
    float população01;
    float área_km2_01;
    float pib01;
    int ptsturisticos01;

    //dados cartas 02

    //dados carta 02

    char estado02;
    char codigocarta02[10];
    char nomecidade02[20];
    float população02;
    float área_km2_02;
    float pib02;
    int ptsturisticos02;

    //cadastro de cartas
    printf("--- CADASTRO DE CARTA 01 ---\n\n");

    printf("Digite um estado (A-H): ");
    scanf(" %c", &estado01);

    int c;
    while ((c = getchar()) != '\n' && c != EOF) { }

    printf("Digite um codigo (ex:A01): ");
    scanf("%s", &codigocarta01);

    printf("Digite o nome da cidade: ");
    scanf("%s", nomecidade01);

    printf("Digite a população: ");
    scanf("%f", &população01);

    printf("Digite a área km2: ");
    scanf("%f", &área_km2_01);

    printf("Digite o pib: ");
    scanf("%f", &pib01);

    printf("Digite um ponto turistico: ");
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

    printf("Digite um ponto turistico: ");
    scanf(" %s", &ptsturisticos02);



    

    
);
    //printf("Cartas cadastradas\n\n"

    //printf()













}

