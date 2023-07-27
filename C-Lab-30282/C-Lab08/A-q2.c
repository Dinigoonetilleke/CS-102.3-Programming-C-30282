#include <stdio.h>
int main()
{
    int no,total=0,counter=1;
    float avg;
    while(counter<=10)
    {
        printf("Enter the %d mark",counter);
        scanf("%d",&no);
        total=total+no;
        counter++;
    }
    avg=(float)total/10.0;

printf("The total marks are %d \n",total);
printf("The average is %.2f",avg);
 if (avg>=50)
        printf("You are passed");
        else
            printf("You are failed");
}

