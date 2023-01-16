#include<stdio.h>
#include<math.h>
int main()
{
    float a, t;
    scanf("%f %f", &t, &a);
    float aerror = fabs(t-a);
    float relerror = fabs(aerror/t);
    float relper = relerror*100;
    printf("%f\t%f\t%f\t", aerror, relerror, relper);
    return 0;
}