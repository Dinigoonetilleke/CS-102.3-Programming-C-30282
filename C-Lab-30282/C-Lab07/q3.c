#include <stdio.h>
int main()
{
int c;
    float r,pi=3.14;
    printf("Enter the value of radius");
    scanf("%f",&r);

    printf("Menu\n");
    printf("1-Calculate the circumference of the circle\n");
    printf("2-Calculate the area of the circle\n");
    printf("3-Calculate the volume of the sphere\n");

    printf("Enter your preferred choice from the above menu:");
    scanf("%d",&c);

    switch(c){
    case 1:printf("The circumference is %.2f  \n",2*pi*r);break;
     case 2:printf("The area is %.2f \n",pi*r*r);break;
      case 3:printf("The volume is %.2f \n ",4/3.0*pi*r*r*r);break;
      default: printf("The preferred choice is invalid");
    }



}
