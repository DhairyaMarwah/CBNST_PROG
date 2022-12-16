#include <stdio.h>
// #include<conio.h>
int main()
{
    float x[10], y[10], X, p = 1, u, h, val;
    int i, j, n;
    printf("OUTPUT\n");
    printf("Number of arguments\n");
    scanf("%d", &n);
    printf("Enter the value of x and f(x)\n");
    printf("\t\tf(x)\n");

    for (i = 1; i <= n; i++)
        scanf("%f\t%f", &x[i], &y[i]);
    h = x[2] - x[1];
    printf("Value of x where the functional value is to be determined");
    scanf("%f", &X);
    u = (X - x[1]) / h;
    val = y[1];                  // 1
    for (i = 1; i <= n - 1; i++) // 3
        for (j = 1; j <= n - i; j++)
            y[j] = y[j + 1] - y[j];
    {
        p = p * (u - i + 1) / i;
        val = val + p * y[1];
    }
    printf("The value of f(%f)=%f", X, val);
    return 0;
}