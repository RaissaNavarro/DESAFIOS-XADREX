#include <stdio.h>

int main () {

    int i = 0;
    int cont = 0;

    printf("\n*=====================*\n");
    printf("Movimento da TORRE:\n");
    for (int i = 0; i < 5; i++){
        printf("Direita.\n");
    }
    printf("*=====================*\n");

    printf("\n*=====================*");
    printf("Movimento do BISPO\n");

    while (i <= 4 ){
        printf("Cima, Direita.\n");
        i++;
    }
    printf("*=====================*\n");

    printf("\n*=====================*\n");
    printf("Movimento da RAINHA\n");

    do
    { 
        printf("Esquerda.\n"); 
        cont++; 
        
    } while (cont < 8);

    printf("*=====================*\n");


    printf("\n*=====================*\n");
    printf("Movimento do CAVALO\n");
    for (int j = 1; j <= 2 ; j++){

        for( int k = 1; k <= j; k++){
            printf("Baixo\n");
        }
        printf("Esquerda\n");
        printf("*=====================*");
        
    }
    

    


}