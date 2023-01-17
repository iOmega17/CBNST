#include<stdio.h>
float fva(float x)
{
    return 1/(1+(x*x));
}
int main()
{
    int n, d =1;
    printf("Enter n:");
    scanf("%d", &n);
    float a[n][n+1],x,h,u,sum;
    printf("Enter table:\n");
    for (int i = 0;i<n;i++)
    {
        scanf("%f%f", &a[i][0], &a[i][1]);
    }
    printf("Enter value of x: ");
    scanf("%f",&x);
    h = a[1][0]- a[0][0];
    u = (x-a[0][0])/h;
    for(int j= 2; j<n+1;j++)
    {
        for(int i = 0; i<n-j+1;i++)
        {
            a[i][j] = a[i+1][j-1]-a[i][j-1];
        }
    }
    for(int i = 0; i<n; i++)
    {
        for(int j= 0; j<=n-i;j++)
        {
            printf("%0.1f  ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    sum = a[n-1][1];
    int fact = 1;
    int j =2;
    float u1= u;
    for(int i = n-2; i<=n;i--)
    {
        sum= sum+u1*a[i][j]/fact;
        u1 = u1*(u-(j-1));
        fact = fact*i ;
        j++;
    }
    printf(": %f", sum);
}