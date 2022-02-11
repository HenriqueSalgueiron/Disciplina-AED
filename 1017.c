#include<stdio.h>
int main ()
{
    int t, v, d;
    float l;
    scanf("%d %d", &t, &v);
    d = v * t;
    l = d / 12.0;
    printf("%.3f\n", l);
    return 0;
}
