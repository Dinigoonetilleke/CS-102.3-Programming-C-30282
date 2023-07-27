#include <stdio.h>
int main()
{
    int b,e,p=1;
    printf("Enter the base");
    scanf("%d",&b);

    printf("Enter the exponent");
    scanf("%d",&e);

    for(int i=0;i<e;i++)
        p*=b;
    printf("The power is %d",p);
}
