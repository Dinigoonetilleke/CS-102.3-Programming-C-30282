#include <stdio.h>
int main()
{
    int num, re=0, n;
    printf("Enter a number");
    scanf("%d",&num);
    do{
        n=num%10;
        re=re*10+n;
        num/=10;
    }while (num!=0);
    printf("Reversed number is %d \n",re);
}
