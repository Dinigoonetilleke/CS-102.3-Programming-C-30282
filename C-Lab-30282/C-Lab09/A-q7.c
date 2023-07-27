#include <stdio.h>
int main()
{
    int n1=0,n2=1,n,i;
    printf("The Fibonacci sequence is %d  %d",n1 , n2);

    for(i=3;i<=10;i++){
        n=n1+n2;
        printf(" %d",n);
        n1=n2;
        n2=n;
    }
    printf("\n");
}
