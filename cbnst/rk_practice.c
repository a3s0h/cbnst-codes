#include<stdio.h>
#include<math.h>

float f(float x,float y)
{
    return (x-y)/(x+y);
}

int main()
{
    float x0,y0,h,xn,x,y,m,m1,m2,m3,m4;
    printf("Enter the x0,y0,xn,h\n");
    scanf("%f %f %f %f",&x0,&y0,&xn,&h);

    x=x0;
    y=y0;

    while(x<xn)
    {
        m1 = f(x0,y0);
        m2=f((x0+h/2.0),(y0+m1*h/2.0));
        m3 = f((x0+h/2.0),(y0+m2*h/2.0));
        m4 = f((x0+h),(y0+m3*h));
        m = (m1+2*(m2+m3) + m4)/6;
        y+=h*m;
        x+=h;
        printf("\nx = %f  and y = %f",x,y);
    }

    return 0;
}