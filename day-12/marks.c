#include <stdio.h>
int main () {
    float marks;
    printf("Enter Your marks: ");
    scanf("%f",&marks);
    if (marks >= 80)
    printf("got A+");
    else if (marks >= 70)
    printf("got A");
    else if (marks >=60)
    printf("got A-");
    else if (marks >= 50)
    printf("got B");
    else if (marks >= 40)  
    printf("got C");
    else if (marks >= 33)  
    printf("got D");
    else 
    printf("failed");
    return 0;


}

