#include <stdio.h>
int main()
{
    char data;
    printf("Enter a character");
    scanf("%c",&data);

    int dataInt=(int)data;

    if(dataInt>=97 && dataInt<=122)
    printf("You entered a lowercase character");
    else if (dataInt>=65 && dataInt<=90)
    printf("You entered an uppercase character");
    else if (dataInt>=49 && dataInt<=57)
    printf("You entered a numerical character");
    else if (dataInt==32)
    printf("You didn't enter anything");
    else
        printf("You entered a special character");



    return 0;
}
