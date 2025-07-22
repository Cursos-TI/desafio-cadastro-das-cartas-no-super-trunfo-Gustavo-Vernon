#include <stdio.h>

int main(){
    char estado[50];
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int turismo;
    
        char carta_1;
            printf("carta 1: \n"); 
            
                printf("digite o estado: ");
                scanf("%s", estado);
                
                printf("digite o codigo da carta: ");
                scanf("%s", codigo);
                
                printf("digite o nome da cidade: ");
                scanf("%s", cidade);   
                
                printf("qual a populacao da cidade?: ");
                scanf("%d", &populacao);   
                
                printf("digite a area da cidade em metros quadrados: ");
                scanf("%f", &area);
                
                printf("qual o pib da sua cidade? ");
                scanf("%f", &pib);
                
                printf("quantos pontos turisticos existem em sua cidade? ");
                scanf("%d", &turismo);

                printf("\n");
                printf("Carta 1\n");
                printf("Estado: %s\n", estado); 
                printf("Codigo da carta: %s\n", codigo);
                printf("Cidade: %s\n", cidade);
                printf("Populacao: %d\n", populacao);
                printf("Mts quadrado: %.2f km²\n", area);
                printf("Pib: R$%.2f bilhoes de reais\n", pib); 
                printf("Pontos turisticos: %d\n", turismo);
    
        
        char carta_2;      
            printf("\n");
                
            printf("carta 2: \n"); 
            
                printf("digite o estado: ");
                scanf("%s", estado);
                
                printf("digite o codigo da carta: ");
                scanf("%s", codigo);
                
                printf("digite o nome da cidade: ");
                scanf("%s", cidade);   
                
                printf("qual a populacao da cidade?: ");
                scanf("%d", &populacao);   
                
                printf("digite a area da cidade em metros quadrados: ");
                scanf("%f", &area);
                
                printf("qual o pib da sua cidade? ");
                scanf("%f", &pib);
                
                printf("quantos pontos turisticos existem em sua cidade? ");
                scanf("%d", &turismo);

                printf("\n");
                printf("Carta 2: \n");
                printf("Estado: %s\n", estado); 
                printf("Codigo da carta: %s\n", codigo);
                printf("Cidade: %s\n", cidade);
                printf("Populacao: %d\n", populacao);
                printf("Mts quadrado: %.2f km²\n", area);
                printf("Pib: R$%.2f bilhoes de reais\n", pib); 
                printf("Pontos turisticos: %d\n", turismo);
            
}