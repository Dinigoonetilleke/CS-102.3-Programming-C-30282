#include <stdio.h>
int main()
{//using If-Else//
    int n;
    printf("Enter an integer");
    scanf("%d",&n);
    if(n%2==0)
        printf("%d is an even number\n",n);
        else
         printf("%d is an odd number\n",n);

    //Using switch//
    int no;
     printf("Enter an integer");
    scanf("%d",&no);
    switch (no%2)
    {
        case 0 :printf("%d is an even number",no);break;
        case 1 :printf("%d is an odd number",no);break;
        default:printf("You have not entered a proper integer");
    }
}
