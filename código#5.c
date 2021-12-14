#include <stdio.h>
#include <stdlib.h>

int main()
{
    int vetor;
    int i, a, b;
    
    a=5000;
    b=0;
    
    for (i=0;i<a;i++){
        vetor=malloc(xsizeof(int));
        vetor[i]=b;
        b++;
        printf("%d \n", vetor[i]);
    }
    return 0;
}