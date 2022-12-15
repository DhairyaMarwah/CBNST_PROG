#include <stdio.h> #include<math.h> #define f(x,y) x+y void main(){
printf(“Name
       : Vansh Patpatial\nSection
       : B\nRoll.no : 20\n”);
int n, i;
float
    x,
    xf, y, h, s, s1, s2, s3, s4;
printf("Enter x0 =");
scanf("%f", &x);
printf("Enter y0 =");
scanf("%f", &y);
printf("Enter the xn =");
scanf("%f", &xf);
printf("Enter h =");
scanf("%f", &h);
while (x < xf)
{
    s1 = f(x, y);
    s2 = f((x + (h / 2)), (y + (h / 2) * s1));
    s3 = f((x + (h / 2)), (y + (h / 2) * s2));
    s4 = f((x + h), (y + h * s3));
    s = (s1 + (2 * s2) + (2 * s3) + s4) / 6;
    y = y + (h * s);
    x = x + h;
}
}
}
integration = integration * h * 3 / 8;
printf("\nvalue of integration is: %.3f", integration);
return 0;
}