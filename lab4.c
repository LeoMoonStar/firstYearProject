#include <stdio.h>
#include <stdlib.h>
#include <math.h>

double gaussFunc(double x,double spread)
{
    double result;
    result=exp(-x*x/spread);
    return result;
}




int main(void){
    double spread=0.0,a,b,midpoint,result=0.0,range;
    int n=2;
    double gaussFunc(double x, double spread);
    
    
    while(spread<=0){
        printf("Enter the spread value (must be >0): ");
        scanf("%lf",&spread);
    }
    while (n>=1){
       printf("Please enter the number of rectangles (n): ");
       scanf("%d",&n);
       if (n<1)
          break;
       else {
         printf("Enter the interval of integration (a b): ");
         scanf("%lf %lf",&a,&b);
        while (a>b){
            printf("Invalid interval!\n");
            printf("Enter the interval of integration (a b): ");
            scanf("%lf %lf",&a,&b);
        }
           range=(b-a)/n;
           midpoint=a+range/2;
           while (midpoint<=b-range/2) {
               result=result+gaussFunc(midpoint, spread)*range;
               midpoint+=range;
           }
        
           printf("Integral of Gaussian with spread %.3lf on [%.3lf, %.3lf] with n = %d is: %.3lf \n",spread,a,b,n,result);
           result=0;}}
        printf("Exiting.");
        return 0;
}
