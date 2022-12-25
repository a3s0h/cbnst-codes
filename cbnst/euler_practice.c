#include<stdio.h>
#include<math.h>

float f(float x,float y)
{
    return x+y;
}

int main()
{
    float x0,y0,x,y,h,xn;
    printf("Enter x0 , y0 , h , xn");
    scanf("%f %f %f %f ",&x0,&y0,&h,&xn);
    x=x0;
    y=y0;
    while(x<=xn)
    {
        y+=h*f(x,y);
        x+=h;
        printf("\nx= %f and y= %f",x,y);
    }
    return 0;
}