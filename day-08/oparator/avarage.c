#include <stdio.h>
int main (){
    int num1, num2, num3, sum;
    float avg;
    printf("Enter two Numbers:");
    scanf("%d %d %d",&num1, &num2);
    sum = num1 + num2 ;
    printf("The sum is :%d\n",sum);
    avg = (float)sum/2;
    printf("The avarage is :%f\n", avg);


}