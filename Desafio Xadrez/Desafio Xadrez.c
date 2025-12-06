#include <stdio.h>

//mright = MOVIMENTO DIREITA
void mright (int direita) {
      if (direita > 0) {
            mright(direita - 1);
            printf("%d casas para direita\n", direita);
            
            
      }
}
//mup = MOVIMENTO ESQUERDA
void mleft (int esquerda) {
      if (esquerda > 0) {
            mleft(esquerda - 1);
            printf("%d casas para esquerda \n", esquerda);
            
            
      }
}

//mup = MOVIMENTO CIMA
void mup (int cima) {
      if (cima > 0) {
            mup(cima - 1);
            printf("%d casas para cima \n", cima);
            
            
      }
}

//mup = MOVIMENTO BAIXO
void mdown (int baixo) {
      if (baixo > 0) {
            mdown(baixo - 1);
            printf("%d casas para baixo \n", baixo);
            
            
      }
}

int main () {

      int rainha = 8 ;
      int casas = 0;
      int bispo = 5;
      int torre = 5;
      int cavalo = 3;
      int x = 0;
      int y = 0;
      
// Movimentos da peca do bispo usando recursividade

      printf("casas que o bispo andou\n");
      mright (bispo);
      mup (bispo);
  
      printf("\n");



// Movimentos da peca da torre

      printf("casas que a torre andou\n");
      mright(torre);

      printf("\n");

// Movimentos da peca da rainha

      printf("casas que a rainha andou\n");
      mright(rainha);

      printf("\n");

//Movimento da peca do cavalo


for (casas = 0; y < 3; x < 0) {
        while (casas < cavalo)
        {
            casas++;
            y++;
        }
        x++;
      }

       printf("O cavalo andou %d casas para baixo e %d casas para a esquerda\n", y, x);

       printf("\n");

//Movimento da peca bispo usando estruturas de loop

      casas = 0;
      x = 0;
      y = 0;casas = 0;
      x = 0;
      y = 0;
      do
      {
            x++;
            y++;
            casas++;
            printf("O bispo andou %d casas para cima e %d para a direita\n", y, x);
      }
       while (casas < bispo); 

       printf("\n");





       






return 0;
}
