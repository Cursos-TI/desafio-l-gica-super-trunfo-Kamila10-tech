#include <stdio.h>

int main() {
    // Variáveis da primeira carta
    char estado1[50] = "Goiás";
    char nomedacidade1[50] = "Goiânia";
    unsigned long int populacao1 = 1437237;
    float area1 = 73000.00;
    float pib1 = 6050000000;
    int pontosTuristicos1 = 15;
    float densidade1 = populacao1 / area1;
    float pibpercapita1 = pib1 / populacao1;

    // Variáveis da segunda carta
    char estado2[50] = "Amazonas";
    char nomedacidade2[50] = "Manaus";
    unsigned long int populacao2 = 2303732;
    float area2 = 11400.00;
    float pib2 = 4503500000;
    int pontosTuristicos2 = 20;
    float densidade2 = populacao2 / area2;
    float pibpercapita2 = pib2 / populacao2;

    // Variáveis para armazenar valores escolhidos
    float valor1_carta1 = 0, valor1_carta2 = 0;
    float valor2_carta1 = 0, valor2_carta2 = 0;

    int atributo1, atributo2;

    // Menu 1
    printf("Escolha o primeiro atributo:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per capita\n");
    scanf("%d", &atributo1);

    // menu 2 dinâmico - não permite escolher o mesmo atributo do menu 1
    printf("\nEscolha o segundo atributo:\n");
    if (atributo1 != 1) printf("1. População\n");
    if (atributo1 != 2) printf("2. Área\n");
    if (atributo1 != 3) printf("3. PIB\n");
    if (atributo1 != 4) printf("4. Pontos Turísticos\n");
    if (atributo1 != 5) printf("5. Densidade Populacional\n");
    if (atributo1 != 6) printf("6. PIB per capita\n");
    scanf("%d", &atributo2);

    if (atributo1 == atributo2) {
        printf("Opção inválida! Você não pode escolher o mesmo atributo duas vezes.\n");
        return 1;
    }

    // Switch para o primeiro atributo
    switch (atributo1) {
        case 1: valor1_carta1 = populacao1; valor1_carta2 = populacao2;
         break;

        case 2: valor1_carta1 = area1; valor1_carta2 = area2; 
        break;

        case 3: valor1_carta1 = pib1; valor1_carta2 = pib2; 
        break;

        case 4: valor1_carta1 = pontosTuristicos1; valor1_carta2 = pontosTuristicos2; 
        break;

        case 5: valor1_carta1 = densidade1; valor1_carta2 = densidade2; 
        break;

        case 6: valor1_carta1 = pibpercapita1; valor1_carta2 = pibpercapita2; 
        break;
    }

    // Switch para o segundo atributo
    switch (atributo2) {
        case 1: valor2_carta1 = populacao1; valor2_carta2 = populacao2; 
        break;

        case 2: valor2_carta1 = area1; valor2_carta2 = area2; 
        break;

        case 3: valor2_carta1 = pib1; valor2_carta2 = pib2; 
        break;

        case 4: valor2_carta1 = pontosTuristicos1; valor2_carta2 = pontosTuristicos2; 
        break;

        case 5: valor2_carta1 = densidade1; valor2_carta2 = densidade2;
         break;

        case 6: valor2_carta1 = pibpercapita1; valor2_carta2 = pibpercapita2; 
        break;
    }

    // Comparação individual do atributo 1
    printf("\nResultado do atributo 1:\n");
    if (atributo1 == 5) { // densidade é o menor
        (valor1_carta1 < valor1_carta2) ? 
            printf("Carta 1 Goiânia venceu (%.2f < %.2f)\n", valor1_carta1, valor1_carta2) :
            printf("Carta 2 Manaus venceu (%.2f < %.2f)\n", valor1_carta2, valor1_carta1);
    } else {
        (valor1_carta1 > valor1_carta2) ? 
            printf("Carta 1 Goiânia venceu (%.2f > %.2f)\n", valor1_carta1, valor1_carta2) :
            printf("Carta 2 Manaus venceu (%.2f > %.2f)\n", valor1_carta2, valor1_carta1);
    }

    // Comparação individual do atributo 2
    printf("\nResultado do atributo 2:\n");
    if (atributo2 == 5) { // densidade é o menor
        (valor2_carta1 < valor2_carta2) ? 
            printf("Carta 1 Goiânia venceu (%.2f < %.2f)\n", valor2_carta1, valor2_carta2) :
            printf("Carta 2 Manaus venceu (%.2f < %.2f)\n", valor2_carta2, valor2_carta1);
    } else {
        (valor2_carta1 > valor2_carta2) ? 
            printf("Carta 1 Goiânia venceu (%.2f > %.2f)\n", valor2_carta1, valor2_carta2) :
            printf("Carta 2 Manaus venceu (%.2f > %.2f)\n", valor2_carta2, valor2_carta1);
    }

    // Soma dos dois atributos
    float soma1 = valor1_carta1 + valor2_carta1;
    float soma2 = valor1_carta2 + valor2_carta2;

    printf("\nSoma dos atributos:\n");
    printf("Carta 1: %.2f\n", soma1);
    printf("Carta 2: %.2f\n", soma2);

    if (soma1 > soma2)
        printf("\nCarta 1 - Goiânia venceu a rodada!\n");
    else if (soma2 > soma1)
        printf("\nCarta 2 - Manaus venceu a rodada!\n");
    else
        printf("\nEmpate!\n");

    return 0;
}
