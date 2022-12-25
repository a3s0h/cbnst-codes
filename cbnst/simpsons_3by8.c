#include<stdio.h>
#include<math.h>

double f(double x)
{    return x*x;}

int main()
{
    int n,i;
    double a,b,h,x,sum=0,integral;
    printf("Enter th sub-interval: ");
    scanf("%d",&n);
    printf("Enter initial limit : ");
    scanf("%lf",&a);
    printf("Enter final limit : ");
    scanf("%lf",&b);

    h=fabs(b-a)/n;
    for(i=1;i<n;i++)
    {
        x=a+i*h;
        if(i%3==0)
        {
            sum += 2*f(x);
        }
        else{
            sum += 3*f(x);
        }
    }
    integral = (3*n/8)*(f(a)+f(b)+sum);
    printf("Integra : %lf ",integral);

    return 0;
}