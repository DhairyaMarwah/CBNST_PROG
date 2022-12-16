#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
double f(double x)
{
    double v=(x*x*x*x)-x-10;
return (v); }
double fd(double x)
{
    double diff=(4*x*x*x)-1;
    if(diff==0)
    {
printf("derivative can not be zero\n"); exit(0);
}
    return (diff);
}
double calc(double x)
{
    double c=x-((double)f(x)/fd(x));
    double d=x-c;
    while((fabs(d))>0.00001)
    {
        c=x-((double)f(x)/fd(x));
        d=x-c;
        x=c;
}
return c;
}
int main() {
double a,b;
double ps=f(0);
for(int i=1;i<100;i++)
{
    if(i!=0 && (ps<0 && f(i)>0 || ps>0 && f(i)<0))
    {
a=i-1;
break; }
ps=f(i); }
double x=calc(a);
    printf("%lf",x);
}