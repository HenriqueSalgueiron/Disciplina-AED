#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor;
    int i, a, b;
    
    a=5000;
    b=0;
    
    vetor=malloc(xsizeof(int));
    
    for (i=0;i<a;i++){
        vetor[i]=b;
        b++;
        printf("%d \n", vetor[i]);
    }
    free (vetor);
    return 0;
}