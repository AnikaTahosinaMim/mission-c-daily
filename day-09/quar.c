#include <stdio.h>
#include <math.h>
int main (){
    double a,b,c,d,x,y;
    printf("Enter a b c : ");
    scanf("%lf %lf %lf",&a,&b,&c);
    d = sqrt(b*b-4*a*c);
    x = (-b+d)/(2*a);
    y = (-b-d)/(2*a);
    printf("x = %lf\n",x);
    printf("y = %lf\n",y);
    return 0;
}