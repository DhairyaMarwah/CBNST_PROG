#include <stdio.h>
#include <conio.h>
#include <math.h>
double f(double x)
{
    double v = (x * log(x) / 2.303) - 1.2;
    return (v);
}
double calc(double a, double b)
{
    double c = a;
    int i = 1;
    while ((b - a) >= 0.0001)
    {
        c = a - ((double)(b - a) / (f(b) - f(a))) * f(a);
        // cout<<c;
        if (f(c) == 0.0)
        {
            break;
        }
        else if (f(a) * f(c) < 0)
        {
            b = c;
        }
        else
        {
            a = c;
        }
        i++;
    }
    return c;
}
int main()
{
    double ps = f(0);
    double a, b;
    for (int i = 1; i < 100; i++)
    {
        if (ps < 0 && f(i) > 0 || ps > 0 && f(i) < 0)
        {
            a = i - 1;
            b = i;
            break;
        }
        ps = f(i);
    }
    printf("%lf %lf %lf %lf %lf", a, b, f(a), f(b), log(b));
    double x = calc(a, b);
    printf("%lf", x);
}