#include<stdio.h>
float findvalueat(float x)
{
    return  (x*x*x);
}
int main()
{   
    int n;
    float a,b;
    printf("Enter total interval, limits: ");
    scanf("%d%f%f",&n, &a, &b);
    float h,x[n+1],y[n+1];
    h = (b-a)/n;
    printf("%f\n", h);
    // for(int i = 0; i<=n+1; i++)
    // {
    //     x[i] = a+i*h ;
    // }
    // for(int i = 0; i<=n+1;i++)
    // {
    //     y[i] = findvalueat(x[i]);
    // }
    // for(int i = 0; i<n+1;i++)
    // {
    //     printf("x: %f\t", x[i]);
    // }
    // printf("\n");
    // for(int i = 0; i<n+1;i++)
    // {
    //     printf("y: %f\t", y[i]);
    // }
    float sum = 0;
    sum = findvalueat(a)+ findvalueat(b);
    for(float i = a+h; i<b; i=i+h)
    {
        sum = sum + 2*findvalueat(i);
    }
    sum = (sum*h)/2;
    printf("Sum : %f", sum);
}