// Calcular as raízes da equação de Bhaskara
// x1 = -B + sqrt(delta) / 2A
// x2 = -B - sqrt(delta) / 2A
// delta = Bˆ2 - 4AC


#include <stdio.h>
#include <math.h>
int main () {

    double A, B, C, raiz1, raiz2, delta;
    scanf("%lf", &A);
    scanf("%lf", &B);
    scanf("%lf", &C);

    delta = pow(B,2) - 4*A*C;
    
    if (A == 0 || delta < 0) {
        printf("Impossivel calcular\n");
    } else {
        raiz1 = (-B + sqrt(delta))/(2*A);
        raiz2 = (-B - sqrt(delta))/(2*A);

        printf("R1 = %.5lf\n",raiz1);
        printf("R2 = %.5lf\n",raiz2);
    }


    return 0 ;
}