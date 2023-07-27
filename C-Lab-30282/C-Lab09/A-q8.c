#include <stdio.h>
int main()
{
    int n, rn, rem, count=0, result=0;

    printf("Enter a number");
    scanf("%d",&n);

    rn=n;
    while(rn!=0){
        rem=rn%10;
        count++;
        rn/=10;
    }
    rn=n;
    for(int i=0;i<count;i++){
        rem=rn%10;
        result+=pow(rem,count);
        rn/=10;
    }
    if(result==n){
       printf("%d is an Armstrong number \n",n);
       }
        else
        printf("%d is not an Armstrong number \n",n);
}
