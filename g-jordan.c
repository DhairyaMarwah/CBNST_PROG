#include<iostream>
using namespace std;
int main() {
    int n;
    printf("how many variables ");
    scanf("%d",&n);
    float arr[n][n+1];
    float x[n];
    float sum=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
scanf("%f",&arr[i][j]);
    }
}
double c=0;
for(int i=0;i<n;i++)
{
    for(int j=0;j<n;j++)
    {
if(j!=i) {
            c=arr[j][i]/arr[i][i];
            for(int k=0;k<=n;k++)
            {
} }
if((c*arr[i][k]))
    arr[j][k]=arr[j][k]-(c*arr[i][k]);
} }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i][n]/(double)arr[i][i]<<endl;
    }
}