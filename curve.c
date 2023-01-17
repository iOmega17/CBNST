#include<stdio.h>
void utm(float am[2][3])
{
    for(int i=0; i<2;i++)
    {
        float ratio = 0;
        for(int j = 0; j<3;j++)
        {
            if(j>i)
            {
                ratio = am[j][i]/am[i][i];
                for(int k= 0;k<3+1;k++)
                {
                    am[j][k] = am[j][k] - ratio*am[i][k];
                }
            }
        }
    }
    for(int i =0; i<2;i++)
    {
        for(int j=0;j<3;j++)
            printf("%f ", am[i][j]);
        printf("\n");
    }
}
void bst(float am[2][3])
{
    float value[2];
    value[2] = am[1][2]/am[1][1];
    value[1] = (am[0][2]-am[0][1]*value[2])/am[0][0];
    for(int j=0;j<2;j++)
        printf("%f ", value[j]);
}
int main()
{
    int n;
    printf("Rnter n:");
    scanf("%d",&n);
    float x[n],y[n],x2[n],xy[n];
    float sumx=0,sumy=0,sumx2=0,sumxy=0;
    printf("Enter data : ");
    for(int i=0; i<n;i++)
    {
        scanf("%f%f",&x[i], &y[i]);
        x2[i] = x[i]*x[i];
        xy[i] = x[i]*y[i];
        sumx += x[i];
        sumy += y[i];
        sumxy += xy[i];
        sumx2 += x2[i]; 
    }
    float am[2][3];
    am[0][0] = n;
    am[0][1] = sumx;
    am[0][2] = sumy;
    am[1][0] = sumx;
    am[1][1] = sumx2;
    am[1][2] = sumxy;
    for(int i =0; i<2;i++)
    {
        for(int j=0;j<3;j++)
            printf("%f ", am[i][j]);
        printf("\n");
    }
    utm(am);
    bst(am);
    printf("\n");


}