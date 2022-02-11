#include <stdio.h>

int main()

{
int dimensao, preto, branco, quadrados;
scanf("%d", &dimensao);
quadrados = dimensao*dimensao;
preto = quadrados/2;
if (dimensao%2 == 0){

branco = quadrados/2;
}
else {
branco = (quadrados/2) + 1;

}

printf("%d casas brancas e %d casas pretas\n",branco,preto);


return 0;
}
