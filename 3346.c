#include <stdio.h>

int main()

{
    double pib, f1, f2, exp1, porcentagemexp1, exp3;
     
    scanf("%lf %lf", &f1, &f2);
    
    exp1 = 100 + f1;
    porcentagemexp1 = exp1 / 100;
    exp3 = porcentagemexp1 * f2;
    pib = f1 + exp3;
    
    printf("%.6lf\n", pib);
   
    
    return 0;
    
    
    
    
    
}
