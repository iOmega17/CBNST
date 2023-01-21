#include<stdio.h>
#include<math.h>
#define e 0.0001
float func(float x)
{
    return x*x*x -2*x -5;
}
float findx(float x1, float x2)
{
    return (x1*func(x2) - x2*func(x1))/(func(x2)- func(x1));
}
int main()
{
    float x, x1, x2,x3;
    up:
    scanf("%f %f", &x1, &x2);
    if(func(x1)*func(x2)>0)
    {
        printf("Invalid Roots");
        goto up;
    }
    else 
    {
        for(int i = 1; i<=50; i++)
        {
            x = findx(x1, x2);
            if (func(x)*func(x1)<0)
                x2 = x;
            else 
                x1 = x;
            printf("At iteration: %d value : %f\n", i, x );
            x3 = findx(x1, x2);
            if(fabs(x3-x)<=e)
            {
                printf("Final roots at iteration [%d] is : %f\n", i, x);
                return 0;
            }
            
        }
    }
    return 0;
}