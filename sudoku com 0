#include <math.h>
#define referencia 0
#include <stdio.h>
#define parametro 3
#define retorno 1
void anulador(int *algarismo){
    int i;
     for (i=referencia; 
                    10>i; 
                        i++){
     algarismo[i]=referencia;    
     }
}
int funprin(int v[9][9], int bandeira, int *algarismo)
{
    int i;
    int j;
    for (i=referencia; 
                    i<9; 
                        i++){
     for (j=referencia; 
                    j<9;
                       j++){
      if (bandeira){
      algarismo[v[i][j]]++;
       if (retorno < algarismo[v[i][j]] && v[i][j] != 0){
        return retorno;
       }
      } 
      else{
      algarismo[v[j][i]]++;
       if (retorno < algarismo[v[j][i]] && v[j][i] != 0){
       return retorno;
       }
      }  
    }
    anulador(algarismo);
    }
return referencia;
}
int funsecund(int v[9][9], int lInicio, int lFim, int cInicio, int cFim, int *algarismo){
    int i;
    int j;
     for (i=lInicio; 
                    i<lFim; 
                          i++){
      for (j=cInicio; 
                    j<cFim; 
                            j++){
	  algarismo[v[j][i]]++;
	   if (algarismo[v[j][i]] > retorno  && v[i][j] != 0){
	   return retorno;
	   }
	  }
	  anulador(algarismo);
     }
    return referencia;
    }
int main(){
    int incognita;
    int matriz[9][9];
    int error;
    int algarismo2[10];
    int situation;
    int i;
    int j;
    scanf("%i", &incognita);
     for (situation=retorno; 
                        situation<=incognita; 
                                situation++){
      for (i=referencia; 
                        i<9; 
                            i++){
	  anulador(algarismo2);
	   for (j=referencia; 
	                    j<9; 
	                        j++){
	   scanf("%i", &matriz[i][j]);
	   
	   }
	  }
	  error = funprin(matriz, retorno, algarismo2) + funprin(matriz, referencia, algarismo2);
	   for (i=referencia; 
	                    i<9; 
	                        i+=parametro)
        for (j=referencia; 
                        j<9; 
                            j+=parametro)
    	 error += funsecund(matriz, i, i + parametro, j, j + parametro, algarismo2);
	     printf("Instancia %i", situation);
	     printf("\n");
	    if (error){
	     printf("NAO");
	     printf("\n");
	     printf("\n");
	    }
	    else{
	     printf("SIM");
	     printf("\n");
	     printf("\n");
	    }
    }
return referencia;
}
