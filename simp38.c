#include<stdio.h>
float findvalueat(float x)
{
    return  1/(1+x*x);
}
int main()
{   
    int n,d= 1;
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
        if(d%3!=0)
            sum = sum + 3*findvalueat(i);
        else 
            sum += 2*findvalueat(i);
        d++;
    }
    sum = (sum*h)*3/8;
    printf("Sum : %f", sum);
}