#include<stdio.h>
#include<math.h>

double f(double x)
{
    return x*x;
}

int main()

{
    int n,i;
    double a,b,h,sum=0,integral,x;
    printf("Enter the number of data : ");
    scanf("%d",&n);
    printf("Enter the initial limit : ");
    scanf("%lf",&a);
    printf("Enter the final limit : ");
    scanf("%lf",&b);

    h = fabs(b-a)/n;

    for(i=1;i<n;i++)
    {
        x=a+i*h;
        if(i%2==0)
        {
            sum += 2*f(x);
        }
        else{
            sum += 4*f(x);
        }
    }
    integral = (h/3)*(f(a)+f(b)+sum);
    printf("Integral : %lf",integral);

    return 0;
}