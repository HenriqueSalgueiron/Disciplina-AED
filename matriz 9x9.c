#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define LIM 9

int main() {

    int linha, coluna, MATRIZ[LIM][LIM];

    srand(time(NULL));

    for(linha = 0; linha < LIM; linha++)
    {
        for(coluna = 0; coluna < LIM; coluna++)
        {
            MATRIZ[linha][coluna] = rand();
        }
    }

    for(linha = 0; linha < LIM; linha++)
    {
        for(coluna = 0; coluna < LIM; coluna++)
        {
            printf("%5d ", MATRIZ[linha][coluna]);
        }
        printf("\n");
    }

return 0;
}
