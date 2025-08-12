#include <stdio.h>

int main(){
    char estado1[50];
    char codigo1[2];
    char cidade1[50];
    int populacao1;
    float area1;
    float pib1;
    int turismo1;
    
    int carta_1;
        printf("carta 1: \n"); 
        
            printf("digite o estado: ");
            scanf("%s", estado1);
            
            printf("digite o codigo da carta: ");
            scanf("%s", codigo1);
            
            printf("digite o nome da cidade: ");
            scanf("%s", cidade1);   
            
            printf("qual a populacao da cidade?: ");
            scanf("%d", &populacao1);   
            
            printf("digite a area da cidade em metros quadrados: ");
            scanf("%f", &area1);
            
            printf("qual o pib da sua cidade? ");
            scanf("%f", &pib1);
            
            printf("quantos pontos turisticos existem em sua cidade? ");
            scanf("%d", &turismo1);

            printf("\n");

    int carta_2;
    
    char estado2[50];
    char codigo2[2];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int turismo2;
    
    printf("carta 2: \n"); 
        
            printf("digite o estado: ");
            scanf("%s", estado2);
            
            printf("digite o codigo da carta: ");
            scanf("%s", codigo2);
            
            printf("digite o nome da cidade: ");
            scanf("%s", cidade2);   
            
            printf("qual a populacao da cidade?: ");
            scanf("%d", &populacao2);   
            
            printf("digite a area da cidade em metros quadrados: ");
            scanf("%f", &area2);
            
            printf("qual o pib da sua cidade? ");
            scanf("%f", &pib2);
            
            printf("quantos pontos turisticos existem em sua cidade? ");
            scanf("%d", &turismo2);

            //Carta 1
            printf("Os dados da Carta 1 sao: \n");
            printf("Estado: %s\n", estado1); 
            printf("Codigo da carta: %s\n", codigo1);
            printf("Cidade: %s\n", cidade1);
            printf("Populacao: %d\n", populacao1);
            printf("Mts quadrado: %.2f km²\n", area1);
            printf("Pib: R$%.2f bilhoes de reais\n", pib1); 
            printf("Pontos turisticos: %d\n", turismo1);

            printf("\n");
            
            //Carta 2
            printf("Os dados da Carta 2 sao: \n");
            printf("Estado: %s\n", estado2); 
            printf("Codigo da carta: %s\n", codigo2);
            printf("Cidade: %s\n", cidade2);
            printf("Populacao: %d\n", populacao2);
            printf("Mts quadrado: %.2f km²\n", area2);
            printf("Pib: R$%.2f bilhoes de reais\n", pib2); 
            printf("Pontos turisticos: %d\n", turismo2);

    return 0;
}
