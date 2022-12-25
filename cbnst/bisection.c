#include<stdio.h>
#include<math.h>

float fun(float x)
{
    // float eq;
    return cos(x) - x * exp(x);
}

void bisection(float *x,float a,float b,int *itr)
{
    *x = (a+b)/2;
    ++(*itr);
    printf("After %3d iterations root : %7.5f\n",*itr,*x);
}

void main()
{
    int itr=0 , maxitr,n;
    float a,b,x1,x,tol;
    printf("Enter a,b ,tol and max iterations : ");
    scanf("%f %f %f %d",&a,&b,&tol,&maxitr);

    bisection(&x,a,b,&itr);
    do{
        if(fun(a) * fun(x) < 0)
        {
            b=x;
        }
        else {
            a=x;
        }
        bisection(&x1,a,b,&itr);
        if(fabs(x1-x) < tol)
        {
            printf("\nRoot : %6.5f",x1);return 0;
        }
        x=x1;
    }while(itr<maxitr);
}