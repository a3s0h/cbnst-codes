#include<stdio.h>

int main()
{
    int n;
    float x[20],y[20],xp,yp=0,p;
    printf("Enter the data points : ");
    scanf("%d",&n);
    printf("Enter x : ");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&x[i]);
    }
    printf("\nEnter y: ");
    for(int i=0;i<n;i++)
    {
        scanf("%f",&y[i]);
    }
    printf("Enter interpolation point: ");
    scanf("%f",&xp);
    for(int i=1;i<=n;i++)
    {
        p=1;
        for(int j=1;i<=n;j++)
        {
            if(i!=j)
            {
                p  = p* (xp-x[j]) / (x[i]-x[j]);
            }
        }
        yp = yp + p*y[i];
    }
    printf("The inteerpolation at %f is %f",xp,yp);
    return 0;
}