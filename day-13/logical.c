#include <stdio.h>
int main () {
    // char ch;
    // printf("Enter a letter = ");
    // scanf("%c",&ch);
    // if (ch=='a'|| ch=='i'||ch=='e'||ch=='o'||ch=='u')
    // printf("Vowel");
    // else 
    // printf("consanent");

    int num1,num2,num3;
    printf("Enter three number: ");
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1>num2 && num1>num3)
    printf("large = %d\n",num1);
    else if (num2>num1 && num2>num3)
    printf("large = %d\n",num2);
    else if (num3>num1 && num3>num2)
    printf("large = %d\n",num3);
    else 
    printf("equal");





    return 0;

}