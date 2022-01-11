#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(){
  	int matriz[9][9], testador[10], a, j, k, m, n, teste = 0;
   
  	scanf("%d",&n);
  
  	for(m = 1; m <= n; m++){
    	
    	teste = 0;
    	
    	for(a = 0; a < 9; a++){
      		for(j = 0; j < 9; j++)
    			scanf("%d",&matriz[a][j]);
    	}
     
	    for(a = 0 ; a < 9 && !teste; a++){
	      	memset(testador, 0, sizeof(testador));
	      	for(j = 0; j < 9 && !teste; j++){
	    		if(testador[matriz[a][j]])
	      			teste = 1;
	    		else
	      			testador[matriz[a][j]] = 1;
	      	}
	    }
	     
	    for(a = 0; a < 9 && !teste; a++){
	      	memset(testador, 0, sizeof(testador));
	      	for(j = 0; j < 9 && !teste; j++){
	    		if(testador[matriz[j][a]])
	      			teste = 1;
	    		else
	      			testador[matriz[j][a]] = 1;
	      	}
	    }
	     
	    for(a = 2; a < 9 && !teste; a+=3){
	      	memset(testador, 0, sizeof(testador));
	      	for(j = a - 2; j <= a && !teste; j++){
	    		for(k = a - 2; k <= a && !teste; k++){
	      			if(testador[matriz[j][k]])
	        			teste = 1;
	      			else
	        			testador[matriz[j][k]] = 1;
	    		}
	      	}
	    }

	    printf("Instancia %d\n",m);
	    printf("%s\n\n",(!teste)?"SIM":"NAO");
  	}
  	
  	return 0 ; 
}