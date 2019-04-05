#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{   printf("Start\n");
    double a=0.76;
    double b=3.36;
    double x=5.78;
    double q;
    printf("%f %f %f \n", a, b, x);
    q=pow(x,a)-pow(b,x*log(pow(6-x,1/3)));
    printf("Answer\n");
    printf("%f",q);
    return 0;
}
