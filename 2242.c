#include <stdio.h>

int main(){
	int M,N,V[15],i;
	scanf("%d %d",&M,&N);

	while(M!=0 || N!=0)
	{
		int S = M + N;

		//Separando os dígitos
		for(i = 0 ; i < 11 ; i++)
		{
			V[i] = S %10;
			S /= 10;
		}

		//Imprimindo os vetores (de trás para frente)
		for(i = 10 ; i >= 0 ; i--){
			if(V[i] != 0){
				printf("%d",V[i]);
			}
		}
		printf("\n");
	}
}