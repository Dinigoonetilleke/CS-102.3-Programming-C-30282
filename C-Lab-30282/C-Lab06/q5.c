#include <stdio.h>
int main()
{
    int n1,n2;
    printf("Enter two numbers");
    scanf("%d %d",&n1,&n2);
    if (n1%n2==0)
        printf("First number is a multiple of second number");
    else
        printf("First number is not a multiple of second number");
}
