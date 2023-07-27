#include <stdio.h>
int main()
{
    int n,s=0;

    printf("Enter a number ");
    scanf("%d",&n);

    for(;n!=0;)
    {
        s+=n%10;
        n=n/10;
    }
    printf("Sum is  %d\n",s);
}

