//area of the triangle using Heron's formula
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("enter the value of a:\n");
    scanf("%f",&a);
    printf("enter the value of b:\n");
    scanf("%f",&b);
    printf("enter the value of c:\n");
    scanf("%f",&c);
    s = (a + b + c) / 2;
    area = sqrt( s * ( s - a) * ( s - b) * ( s - c));
    printf("the area of triangle is: %.2f\n", area);
    return 0;
}
