#include <stdio.h>
void Mix(int a, int b, int c)
{
    int sum, dif, prod;
     sum=a+b;
     dif=a-b;
     prod=a*b;
    printf("The sum, difference and product of the two numbers are %d %d %d",sum , dif, prod);
}
int main()
{
    int a,b, c;
printf("Enter two numbers");
    scanf("%d %d",&a, &b, &c);
    Mix(a,b,c);
}

