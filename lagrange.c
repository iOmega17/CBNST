#include<stdio.h>
int main()
{
    int n,l;
    printf("Enter the size: ");
    scanf("%d", &n);
    printf("Enter x[n] and y[n]:\n");
    float x[n], y[n];
    for(int i = 0; i<n; i++)
    {
        scanf("%f %f",&x[i], &y[i]);
    }
    printf("Enter the value");
    scanf("%d", &l);
    float sum = 0;
        for(int i =0; i<n;i++)
    {
        float temp = 1;
        for(int j = 0;j<n;j++)
        {   
            if(i!=j)
            {
                temp *= (l-x[j])/(x[i]-x[j]);
            }
        }
        temp *= y[i];
        sum += temp;
    }
    printf("Sum: %.2f", sum);
    return 0;
}