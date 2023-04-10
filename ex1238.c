// N: número de casos de teste
// i e j: contadores
// n1 e n2: cadeias de caracteres
// len1 e len2: número de caracteres de cada cadeia
// maior: a maior cadeia de caracter 

#include <stdio.h>
#include <string.h>
int main () {

	int N, i, len1, len2, maior, j;
	char n1[55], n2[55];


	scanf("%d",&N);                 // Lê o número de casos de teste 

	for (i = 0; i < N; i++)  {       // Laço de acordo com o número de casos
			
		scanf("%s",n1);     // Lê as cadeias de caracteres 
		scanf("%s",n2);

		len1 = strlen(n1);         
		len2 = strlen(n2);

		if (len1 < len2) {				  	// verificando qual possui mais caracteres para servir de limitante
			maior = len2;	
		} else {
			maior = len1;
		}

		for (j = 0; j < maior; j++ ) {    // Laço que imprimará uma letra de cada palavra por vez, da primeira 
			if (j < len1) {								// ..até a última letra da palavra, parando quando chegar na letra de
				printf("%c", n1[j]);			// ...posição equivalente ao número de caracteres da maior cadeia
			}  
			if (j < len2) {
				printf("%c", n2[j]);
			}
		} printf("\n");

	}
	return 0 ;
}