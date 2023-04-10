#include <stdio.h>

int main(){

    int N,V;
    char sent[50];

    scanf("%d",&N);
    for(int i = 0; i < N; i++){
            scanf("%s",&sent);
            scanf("%d",&V);
            
            for(int j = 0; j < 50; j++){
                    if(sent[j] == '\0') break;
                    if((sent[j] - V) < 65) printf("%c", (sent[j] - V)+ 26);
                    else printf("%c", (sent[j] - V));
            }
            printf("\n");        
    }
    
    return 0 ;
}