#include<stdio.h>
int n;
void utm(float a[][n+1], int n)
{
    float ratio;
    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if (j>i)
            {
                ratio = a[j][i]/a[i][i];
                for(int k = 0; k<n+1; k++)
                {
                    a[j][k] = a[j][k] - (ratio*a[i][k]);
                }
                for (int x = 0; x<n; x++)
                {
                    for(int y =0; y<n+1; y++)
                    {
                        printf("%0.2f ", a[x][y]);
                    }
                    printf("\n");

                }
                printf("\n");
            }
        }
    }
} 
void bst(float a[][n+1], int n, float value[])
{
    value[n-1] = a[n-1][n]/a[n-1][n-1];
    
    for(int i = n-2; i>=0; i--)
    {
        float sum  = 0;
        for(int j = i+1; j<n; j++)
        {
            sum = sum + a[i][j]*value[j] ;
        }
        value[i] = (a[i][n] - sum)/ a[i][i];
    }
}
int main()
{
   // int n;
    printf("Enter the number of unknowns:\n");
    scanf("%d", &n);
    float a[n][n+1];
    float value[n];
    printf("Enter Matrix:\n");
    for(int i = 0; i<n; i++)
    {
        for (int j = 0; j<n+1; j++)
        {
            scanf("%f", &a[i][j]);
        }
    }
    
    for(int i = 0; i<n; i++)
    {
        for (int j = 0; j<n+1; j++)
        {
            printf("%f ", a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    utm(a, n);
    bst(a, n, value);
    for(int i = 0; i<n; i++)
    {
        printf("Value of %d: %.2f\n", i, value[i]);
    }
    return 0;
}