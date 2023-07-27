#include <stdio.h>
double findp(int a, float b)
{
    double pro;
    pro=a*b;
    return pro;
}
int main()
{
    int a;
    float b;
    printf("Enter two nuumbers");
    scanf("%d %f",&a,&b);
    printf("%lf is the product",findp(a,b));
}
