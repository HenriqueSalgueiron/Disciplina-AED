#include <stdio.h>
#include<string.h>
int main()
{
char x[30];
double S, M, TOTAL;
scanf(" %s %lf %lf", &x, &S, &M);
TOTAL = S + 0.15 * M;
printf("TOTAL = R$ %.2lf\n", TOTAL);
return 0;
}
