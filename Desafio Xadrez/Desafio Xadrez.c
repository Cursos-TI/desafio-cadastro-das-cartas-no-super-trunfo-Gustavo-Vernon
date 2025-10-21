#include <stdio.h>
#include <string.h>
int main () {

      int rainha = 8 ;
      int casas = 0;
      int bispo = 5;
      int torre = 5;
      int cavalo = 3;
      int x = 0;
      int y = 0;

      printf("Movimento (x) significa horizontal e o movimento (Y) significa vertical\n");
      printf("Torre comeca na posicao %d\n", x);

      while (casas < torre) {
            x++;
            casas++;
            printf("A torre andou %d casas para a direita\n", x);
      }

      printf("\n");
     
      // Movimentacao da peca bispo;
      // Primeiro determinando novamente os valores das casas e direcoes
      casas = 0;
      x = 0;
      y = 0;

      printf("A peca agora eh o bispo comecando na posicao %d em x e %d em y \n", x, y);
      do
      {
            x++;
            y++;
            casas++;
            printf("O bispo andou %d casas para cima e %d para a direita\n", y, x);
      }
       while (casas < bispo); 
       printf("O bispo terminou na posicao %d y e %d x \n", y, x);

       printf("\n");

       //Movimentacao da rainha sendo feito o inverso
       //Comeca da ultima posicao (8) e retorna para o 0
      
       x = 8;
       printf("A rainha comeca na posicao %d\n", rainha);
       

    for (casas = 0; x > 0; casas++) {
        x--; 
        printf("A rainha andou para a esquerda, posição atual: %d\n", x);
    }

    printf("A rainha terminou na posicao %d\n", x);

    //Movimento da peca cavalo

    for (casas = 0; y < 3; x < 0) {
        while (casas < cavalo)
        {
            casas++;
            y++;
        }
        x++;

       printf("O cavalo andou %d casas para baixo e %d casas para a esquerda\n", y, x);
       
    }
      

      
      
      

      
      
      
      
      
      
      
      return 0;
}
