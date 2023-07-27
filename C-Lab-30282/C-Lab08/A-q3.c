#include <stdio.h>
int main()
{
    int count=1,f=1,n;
    printf("Enter a number");
    scanf("%d",&n);
    if(n<0){
            printf("Invalid input \n");
        }else if(n==0){
        printf("factorial =1 \n");
        }else{
    for(count=1;count<=n;count++)
    {
        f=f*count;
    }}
    printf("Factorial of %d is %d \n",n,f);
}
