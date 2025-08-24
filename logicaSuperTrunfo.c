#include <stdio.h>



int main() {

    printf("Bem-vindo a Lógica do Super Trunfo!\n");

  char nome1[50] = "SP";
    char codigocarta1[20] = "SP1";
    char nomedacidade[50] = "Sao Paulo";
    unsigned int populacao1 = 12400000;
    float area1 = 1521.11;
    float PIB1 = 700.0;
    unsigned int numeropontosturisticos1 = 10;
    char nome2[50] = "RJ";
    char codigocarta2[20] = "RJ2";  
    char nomedacidade2[50] = "Rio de Janeiro";
    unsigned int populacao2 = 6211423;
    float area2 = 1182.3;
    float PIB2 = 600.0;
    unsigned int numeropontosturisticos2 = 8;

            printf(" CARTA 1: São Paulo possui 12.400.000 habitantes.\n");
            printf(" CARTA 2: Rio de Janeiro possui 6.211.423 habitantes.\n");

        if (populacao1 > populacao2) {
            printf("A carta 1 é a vencedora!\n");
        } else {
            printf("A carta 2 é a vencedora!\n");
        }
    

}

