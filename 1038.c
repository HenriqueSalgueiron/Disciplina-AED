#include<stdio.h>
int main ()
{
    int X, Y;
    float T;
    scanf("%d %d", &X, &Y);
    switch (X)
    {
        case 1:
        T = 4*Y;
        printf("Total: R$ %.2f\n", T);
        break;
        case 2:
        T = 4.5*Y;
        printf("Total: R$ %.2f\n", T);
        break;
        case 3:
        T = 5*Y;
        printf("Total: R$ %.2f\n", T);
        break;
        case 4:
        T = 2*Y;
        printf("Total: R$ %.2f\n", T);
        break;
        case 5:
        T = 1.5*Y;
        printf("Total: R$ %.2f\n", T);
        break;
    }
    return 0;
}
