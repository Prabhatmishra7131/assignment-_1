#include<stdio.h>
int main()
{
    int r;
    float a;
    printf("Enter the radius\n");
    scanf("%d",&r);
    a=3.14*r*r;
    printf("Area is %.2f",a);
    return 0;
}