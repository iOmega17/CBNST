#include<stdio.h>
float func(float x, float y)
{
    return x+y;
}
int main()
{
   printf("ENter intial value and step size clac point"); 
   float x0, y0, n, xn, h, slope, yn;
   scanf("%f%f%f%f",&x0, &y0, &n, &xn);
   h = (xn-x0)/n;
   for(int i = 0; i<n; i++)
   {
    slope = func(x0,y0);
    yn = y0+ h*slope;
    printf("%.4f\t%.4f\t%0.4f\t%.4f\n",x0,y0,slope,yn);
    y0 = yn;
    x0 = x0+h;
   }
   printf("\nValue of y at x = %0.2f is %0.3f",xn, yn);


}