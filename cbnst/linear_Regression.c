#include<stdio.h>
#include<math.h>

#define S 50

int main()
{
    int n,i;
    float x[S],y[S],sumx=0,sumy=0,sumx2=0,sumxy=0,a,b;
    printf("Enter data points : ");
    scanf("%d",&n);
    printf("Enter the data: ");
    for(i=1;i<=n;i++)
    {
        printf("X[%d] = ",i);
        scanf("%f",&x[i]);
        printf("Y[%d] = ",i);
        scanf("%f",&y[i]);
    }

    for(i=1;i<=n;i++)
    {
        sumx += x[i];
        sumx2 += x[i] * x[i];
        sumy += y[i];
        sumxy += x[i] * y[i];
    }

    a = (sumy - b*sumx)/n;
    b = (n*sumxy - sumx * sumy) / (n*sumx2 - sumx*sumx);

    printf("a = %0.2f and b = %.2f",a,b);
    return 0;
}