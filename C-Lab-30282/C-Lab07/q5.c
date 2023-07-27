#include <stdio.h>
int main()
{
    int m;
    printf("Enter the month number");
    scanf("%d",&m);

    switch(m)
    {
case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        printf("There are 31 days in this month");break;
    case 4:
    case 6:
    case 9:
    case 11:
        printf("There are 30 days in this month");break;
        case 2:printf("There are 28 days in this month");break;
        default:printf("The month number entered is invalid");
    }
    return(0);
}

