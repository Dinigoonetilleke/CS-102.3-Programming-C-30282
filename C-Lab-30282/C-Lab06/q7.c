#include <stdio.h>
int main()
{
    float bs,gr,aa1,aa2,ms,mb;
    char c;
    int y;
    printf("Enter the basic salary");
    scanf("%f",&bs);
    printf("Enter the no.of years of service");
    scanf("%d",&y);
    printf("Enter character C if working in Colombo");
    scanf("%s",&c);
    printf("Enter the amount of monthly sales");
    scanf("%f",&ms);
{
    if (y>=5.0)
    aa1=bs*0.10;
}
{
    if (c='C')
        aa2=2500;
}
{
    if (ms<=25000)
        mb=ms*0.10;
    else if (ms>=50000)
        mb=ms*0.15;
        else
            mb=ms*0.12;
}

    gr=(bs+aa1+aa2+mb);
    printf("The gross remuneration of a company is %.2f",gr);
}
