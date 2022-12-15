#include <stdio.h> int main(){
printf(“Name
       : Vansh Patpatial\nSection
       : B\nRoll.no : 20\n”);
float x[30], y[30], c, a, b, k = 0;
int i, j, n;
printf("enter the number of terms of table:");
scanf("%d", &n);
printf("enter the respective values of x and y:");
for (i = 0; i < n; i++)
{
    scanf("%f", &x[i]);
    scanf("%f", &y[i]);
}
printf("\n\n The table you entered is as follows :\n\n");
for (i = 0; i < n; i++)
{
    a = 1;
    b = 1;
    for (j = 0; j < n; j++)
    {
        if (j != i)
        {
            a = a * (c - x[j]);
            b = b * (x[i] - x[j]);
        }
    }
    k = k + ((a / b) * y[i]);
}
printf("\n\n The respective value of the variable y is: %f", k);
}