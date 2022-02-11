#include <stdio.h>
int main()
{   int c1, n1, c2, n2;
    float v1, v2, y;
    scanf("%d %d %f", &c1, &n1, &v1);
    scanf("%d %d %f", &c2, &n2, &v2);
    y = (n1*v1) + (n2*v2);
    printf("VALOR A PAGAR: R$ %.2f\n", y);

return 0;
}
