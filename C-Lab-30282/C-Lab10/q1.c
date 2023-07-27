#include <stdio.h>
int main()
{
    int i, arr[10], sum=0,max=0,min=0,r;
    float avg;

    for(i=0;i<10;i++)
    {
        printf("Enter a value to the element %d ",i+1);
        scanf("%d",&arr[i]);
    }
        for(i=0;i<10;i++)
    {
     sum=sum+arr[i];
     if(arr[i]>max)
        max=arr[i];
    }
    printf("The maximum value is %d \n",max);

        for(i=0;i<10;i++)
    {
        if(arr[i]<max)
            min=arr[i];
    }
    avg=(float)sum/10.0;
    printf("The minimum value is %d \n",min);
    printf("The average is %.2f \n",avg);

        for(i=0;i<10;i++)
    {
        printf("%d\t",arr[i]);
    }
}
