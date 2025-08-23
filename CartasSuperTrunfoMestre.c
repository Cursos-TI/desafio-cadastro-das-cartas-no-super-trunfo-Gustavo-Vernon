#include <stdio.h>


int main(){
    
    char estado1[50];
    char codigo1[3];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int turismo1;
    float densidade1;
    float pib_capita1;
    float SuperPoder1;
    
    int carta_1;
        printf("carta 1: \n"); 
        
            printf("digite o estado: ");
            scanf("%s", estado1);
            
            printf("digite o codigo da carta: ");
            scanf("%s", codigo1);
            
            printf("digite o nome da cidade: ");
            scanf("%s", cidade1);   
            
            printf("qual a populacao da cidade?: ");
            scanf("%lu", &populacao1);   
            
            printf("digite a area da cidade em Km quadrados: ");
            scanf("%f", &area1);
            
            printf("qual o pib da sua cidade? (Em bilhoes de reais)");
            scanf("%f", &pib1);
            
            printf("quantos pontos turisticos existem em sua cidade? ");
            scanf("%d", &turismo1);

            densidade1 = populacao1 / area1;
            pib_capita1 = (pib1 * 1000000000.0f) / populacao1;
            SuperPoder1 = ((float)populacao1 + area1 + pib1 + (float)turismo1  + pib_capita1 / densidade1);

            printf("\n");

    int carta_2;
    
    char estado2[50];
    char codigo2[3];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int turismo2;
    float densidade2;
    float pib_capita2;
    float SuperPoder2;

    
        printf("carta 2: \n"); 
        
            printf("digite o estado: ");
            scanf("%s", estado2);
            
            printf("digite o codigo da carta: ");
            scanf("%s", codigo2);
            
            printf("digite o nome da cidade: ");
            scanf("%s", cidade2);   
            
            printf("qual a populacao da cidade?: ");
            scanf("%lu", &populacao2);   
            
            printf("digite a area da cidade em KM quadrados: ");
            scanf("%f", &area2);
            
            printf("qual o pib da sua cidade? ");
            scanf("%f", &pib2);
            
            printf("quantos pontos turisticos existem em sua cidade? ");
            scanf("%d", &turismo2);

            densidade2 = (float)populacao2 / area2;
            pib_capita2 = (pib2 * 1000000000.0f) / (float)populacao2;
            SuperPoder2 = (float)populacao2 + area2 + pib2 + (float)turismo2 + pib_capita2 / densidade2;


            
            
            
            //Carta 1 
            printf("Carta 1: \n");
            printf("Estado: %s\n", estado1); 
            printf("Codigo da carta: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("Populacao: %lu\n", populacao1);
            printf("KM quadrado: %.2f km²\n", area1);
            printf("Pib: R$%.2f bilhoes\n", pib1); 
            printf("Pontos turisticos: %d\n", turismo1);
            printf("Densidade: %.2f\n", densidade1);
            printf("Pib per capita: %.2f\n", pib_capita1);
            printf("Super Poder: %f\n", SuperPoder1);

            printf("\n");
            //Carta 2
            printf("Carta 2: \n");
            printf("Estado: %s\n", estado2); 
            printf("Codigo da carta: %s\n", codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("Populacao: %lu\n", populacao2);
            printf("KM quadrado: %.2f km²\n", area2);
            printf("Pib: R$%.2f bilhoes\n", pib2); 
            printf("Pontos turisticos: %d\n", turismo2);
            printf("Densidade: %.2f\n", densidade2);
            printf("Pib per capita: %.2f\n", pib_capita2);
            printf("Super Poder: %f\n", SuperPoder2);

            printf("\n");
            
            unsigned long int populacao0 = populacao1 > populacao2;
            float area0 = area1 > area2;
            float pib0 = pib1 > pib2;
            int turismo0 = turismo1 > turismo2;
            float densidade0 = densidade1 > densidade2;
            float pib_capita0 = pib_capita1 > pib_capita2;
            float SuperPoder0 = SuperPoder1 > SuperPoder2;

            printf("Comparacao das cartas: \n");
            printf("Se o resultado for (1) a Carta 1 venceu, se for (0) a Carta 2 venceu \n");
            printf("Populacao:  %lu\n", populacao0);
            printf("Area:  %.0f\n", area0);
            printf("PIB: %.0f \n", pib0);
            printf("Turismo: %d \n", turismo0);
            printf("Densidade: %.0f \n", densidade0);
            printf("Pib per capita: %.0f \n", pib_capita0);
            printf("SuperPoder: %.0f \n", SuperPoder0);


            


    return 0;

}
