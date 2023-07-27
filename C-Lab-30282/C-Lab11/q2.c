#include <stdio.h>
int main()
{
    int size ;
    int sum1=0, sum2=0;
    int i;

    printf("Input the size of array :");
    scanf("%d",&size);

    int arr1[size];

    for(i=0;i<size;i++)
    {
        printf("Input the %d value to array",i+1);
        scanf("%d",&arr1[i]);
        sum1=arr1[i]+sum1;
    }
    printf("Scalar sum of array 1 is %d \n",sum1);

    int arr2[size];

    for(i=0;i<size;i++)
    {
        printf("Input the %d value to array",i+1);
        scanf("%d",&arr2[i]);
        sum2=arr2[i]+sum2;
    }
    printf("Scalar sum of array 2 is %d \n",sum2);

    int sum[size];

    for(i=0;i<size;i++)
    {
        sum[i]=arr1[i]+arr2[i];
    }
    printf("Vector sum of array 1 & 2 is %d \n",sum[i]);

    for(i=0;i<size;i++)
    {
        printf("\t %d",sum[i]);
    }

    int prod1[i];
    for(i=0;i<size;i++)
    {

        prod1[i]=arr1[i]*arr2[i];
    }
    printf("Vector product of array 1 is %d \n",prod1[i]);


}
