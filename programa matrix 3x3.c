#include <math.h>
#include<stdio.h>
int main(){
    
    int x, y, cc;
    int matriz[2][2];
    cc=0;
    for (x=0;x<3;x++){
        for (y=0;y<3;y++){
            cc++;
            matriz[x][y]=cc;
            printf("%d ", matriz[x][y]);
        }
        printf("\n");
    }
    return 0;
} 
