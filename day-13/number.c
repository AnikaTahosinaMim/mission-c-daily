#include <stdio.h>
int main () {
    int num1,num2;
    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);
    if(num1>num2)
    printf(" large num1 : %d\n",num1);
    else if (num2>num1)
        printf("large num2 :%d\n",num2);
    else
    printf("equal");
    
}