#include <stdio.h>
double f(double x, double y, double h)
{
    double v = (y - x) / (double)(y + x);
    return v;
}
int main()
{
    printf(“Name
           : Vansh Patpatia \nSection
           : B\nRoll.no : 20\n);
    double h, x0, xn, y0;
    printf("enter the value of h,x0,y0: ");
    scanf("%lf %lf %lf", &h, &x0, &y0);
    printf("enter the value of xn:");
    scanf("%lf", &xn);
    while (x0 < xn)
    {
        y0 = y0 + h * (f(x0, y0, h));
        x0 = x0 + h;
    }
    printf("xn:%lf,y0:%lf", xn, y0);
}
}
}
integration = integration * h * 3 / 8;
printf("\nvalue of integration is: %.3f", integration);
return 0;
}