#include <stdio.h>


int main() {

    //Declarar a Matriz

    int matriz[10][10] = {0};

    //Navio 1

    matriz[0][6] = 3;
    matriz[0][7] = 3;
    matriz[0][8] = 3;

    //Navio 2

    matriz[2][2] = 3;
    matriz[3][2] = 3;
    matriz[4][2] = 3;

    //Mostrar o tabuleiro

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n"); 
    }

    return 0;
}
