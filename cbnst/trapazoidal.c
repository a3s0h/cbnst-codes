#include <stdio.h>
#include <conio.h>
#include <math.h>
#define f(x) (x + (1 / x))
void trapezoidalRule()
{
    double a, b, h, ifx = 0.0, i;
    int n;
    printf("“Enter the lower and upper limits of the integral: “");
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("“Enter the number of subintervals you want: “");
    scanf("%d", &n);
    h = fabs(b - a) / n;
    ifx = ifx + f(a) + f(b);
    for (i = a + h; i < b;)
    {
        ifx = ifx + (2 * f(i));
        i = i + h;
    }
    ifx = ifx * h / 2;
    printf("“\nThe integral of the equation using Trapezoidal Rule is %lf\n”", ifx);
}
int main()
{
    trapezoidalRule();
}