#include <stdio.h>
int main()
{
    int o;
    float n1,n2;
    printf("Enter the first number");
    scanf("%f",&n1);
    printf("Enter the second number");
    scanf("%f",&n2);

    printf("Menu\n");
     printf("1-Addition\n");
      printf("2-Subtraction\n");
       printf("3-Multiplication\n");
        printf("4-Division\n");
    printf("Enter your preferred option");
    scanf("%d",&o);

    switch(o)
    {
        case 1:printf("The addition of %.2f and %.2f is %.2f",n1,n2,n1+n2);break;
        case 2:printf("The subtraction of %.2f by %.2f is %.2f",n2,n,n1-n2);break;
        case 3:printf("The Multiplication of %.2f and %.2f is %.2f",n1,n2,n1*n2);break;
        case 4:

        if (n2==0){
           printf("The second number is a zero so the answer is not defined");break;
       } else{
     printf("The Division of %.2f by %.2f is %.2f",n1,n2,n1/n2);break;
    }
    default :("The preferred option is invalid");
    return(0);

    }
}
