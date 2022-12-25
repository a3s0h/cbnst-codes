#include<stdio.h>
#include<math.h>

#define S 20

int main()
{
    int n,i;
    float x[S],y[S],sumx=0,sumy=0,sumx2=0,sumxy=0,a,b;
    printf("Enter the data points : ");
    scanf("%d",&n);
    printf("Enter the data x : \n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%f",&x[i]);
        
    }
    printf("Enter y : \n");
    for(i=0;i<=n-1;i++)
    {
        scanf("%f",&y[i]);
    }

    for(i=0;i<=n-1;i++)
    {
        sumx += x[i];
        sumx2 += x[i] * x[i];
        sumy += y[i];
        sumxy += x[i]*y[i];
    }
    // a=((sumx2*sumy -sumx*sumxy)*1.0/(n*sumx2-sumx*sumx)*1.0);
    a=((sumx2*sumy -sumx*sumxy)*1.0/(n*sumx2-sumx*sumx)*1.0);
    b = ((n*sumxy - sumx*sumy)*1.0 / (n*sumx2 - sumx*sumx)*1.0);

    printf("a = %3.3f and b=%3.3f ",a,b);
    return 0;

}